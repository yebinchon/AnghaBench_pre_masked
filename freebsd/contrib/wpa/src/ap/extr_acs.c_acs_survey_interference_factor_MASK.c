
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freq_survey {int filled; long double channel_time_busy; long double channel_time_rx; long double channel_time; long double nf; scalar_t__ channel_time_tx; } ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long double FUNC_0 (int,long double) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static long double
FUNC_2(struct freq_survey *VAR_4, s8 VAR_5)
{
 long double VAR_6, VAR_7, VAR_8;

 if (VAR_4->filled & VAR_1)
  VAR_7 = VAR_4->channel_time_busy;
 else if (VAR_4->filled & VAR_2)
  VAR_7 = VAR_4->channel_time_rx;
 else {


  FUNC_1(VAR_0, "ACS: Survey data missing");
  return 0;
 }

 VAR_8 = VAR_4->channel_time;

 if (VAR_4->filled & VAR_3) {
  VAR_7 -= VAR_4->channel_time_tx;
  VAR_8 -= VAR_4->channel_time_tx;
 }


 VAR_6 = FUNC_0(10, VAR_4->nf / 5.0L) +
  (VAR_8 ? (VAR_7 / VAR_8) : 0) *
  FUNC_0(2, FUNC_0(10, (long double) VAR_4->nf / 10.0L) -
      FUNC_0(10, (long double) VAR_5 / 10.0L));

 return VAR_6;
}
