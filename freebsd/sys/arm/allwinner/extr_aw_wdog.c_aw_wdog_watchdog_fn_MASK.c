
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_int ;
struct aw_wdog_softc {int wdog_mode_intvl_shift; int wdog_mode_en; int wdog_ctrl_key; int wdog_config_value; int mtx; scalar_t__ wdog_mode; int dev; scalar_t__ wdog_config; scalar_t__ wdog_ctrl; } ;
struct TYPE_2__ {int milliseconds; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aw_wdog_softc*,scalar_t__,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_4(void *VAR_3, u_int VAR_4, int *VAR_5)
{
 struct aw_wdog_softc *VAR_6;
 uint64_t VAR_7;
 int VAR_8;

 VAR_6 = VAR_3;
 FUNC_2(&VAR_6->mtx);

 VAR_4 &= VAR_1;

 if (VAR_4 > 0) {
  VAR_7 = ((uint64_t)1 << (VAR_4 & VAR_1)) / 1000000;
  VAR_8 = 0;
  while (VAR_2[VAR_8].milliseconds &&
      (VAR_7 > VAR_2[VAR_8].milliseconds))
   VAR_8++;
  if (VAR_2[VAR_8].milliseconds) {
   FUNC_0(VAR_6, VAR_6->wdog_mode,
     (VAR_2[VAR_8].value << VAR_6->wdog_mode_intvl_shift) |
       VAR_6->wdog_mode_en);
   FUNC_0(VAR_6, VAR_6->wdog_ctrl,
       VAR_0 | VAR_6->wdog_ctrl_key);
   if (VAR_6->wdog_config)
    FUNC_0(VAR_6, VAR_6->wdog_config,
        VAR_6->wdog_config_value);
   *VAR_5 = 0;
  }
  else {




   FUNC_1(VAR_6->dev,
       "Can't arm, timeout is more than 16 sec\n");
   FUNC_3(&VAR_6->mtx);
   FUNC_0(VAR_6, VAR_6->wdog_mode, 0);
   return;
  }
 }
 else
  FUNC_0(VAR_6, VAR_6->wdog_mode, 0);

 FUNC_3(&VAR_6->mtx);
}
