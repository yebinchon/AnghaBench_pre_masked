
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ads111x_softc {TYPE_1__* chipinfo; int dev; } ;
typedef int rateidx ;
typedef scalar_t__ phandle_t ;
typedef int gainidx ;
typedef int chan ;
struct TYPE_2__ {scalar_t__ numchan; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ads111x_softc*,scalar_t__,scalar_t__,scalar_t__) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char const*,scalar_t__,char*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_8(struct ads111x_softc *VAR_3)
{
 const char *VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 bool VAR_10;
 VAR_7 = 0;



 VAR_4 = FUNC_4(VAR_3->dev);
 VAR_9 = FUNC_5(VAR_3->dev);
 for (VAR_5 = 0; VAR_5 < VAR_3->chipinfo->numchan; ++VAR_5) {
  VAR_10 = 0;
  VAR_6 = VAR_1;
  VAR_8 = VAR_2;
  if (FUNC_7(VAR_4, VAR_9, "gain_index", &VAR_6) == 0)
   VAR_10 = 1;
  if (FUNC_7(VAR_4, VAR_9, "rate_index", &VAR_6) == 0)
   VAR_10 = 1;
  if (VAR_10) {
   FUNC_3(VAR_3, VAR_5, VAR_6, VAR_8);
   ++VAR_7;
  }
 }


 if (VAR_7 > 0)
  return;





 for (VAR_5 = 0; VAR_5 < VAR_3->chipinfo->numchan; ++VAR_5) {
  VAR_6 = VAR_1;
  VAR_8 = VAR_2;
  FUNC_3(VAR_3, VAR_5, VAR_6, VAR_8);
 }
}
