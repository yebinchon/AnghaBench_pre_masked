
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sbintime_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int *,int ,char const*,scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

int
FUNC_5(const char *VAR_12, sbintime_t VAR_13, sbintime_t VAR_14, int VAR_15)
{
 FUNC_1(VAR_13 >= 0, ("pause_sbt: timeout must be >= 0"));


 if (VAR_13 == 0)
  VAR_13 = VAR_11;

 if ((VAR_5 && VAR_7 == &VAR_10) || VAR_8 ||
     FUNC_2()) {




  while (VAR_13 >= VAR_3) {
   FUNC_0(1000000);
   VAR_13 -= VAR_3;
  }

  VAR_13 = FUNC_4(VAR_13, VAR_4);
  if (VAR_13 > 0)
   FUNC_0(VAR_13);
  return (VAR_1);
 }
 return (FUNC_3(&VAR_9[VAR_6], ((void*)0),
     (VAR_15 & VAR_0) ? VAR_2 : 0, VAR_12, VAR_13, VAR_14, VAR_15));
}
