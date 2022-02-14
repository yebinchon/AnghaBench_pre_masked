
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int wdog_mode_intvl_shift; int wdog_mode_en; int wdog_config_value; int wdog_ctrl_key; scalar_t__ wdog_ctrl; scalar_t__ wdog_config; scalar_t__ wdog_mode; } ;
struct TYPE_4__ {int value; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_2 ;

void
FUNC_2(void)
{

 if (VAR_1 == ((void*)0)) {
  FUNC_1("Reset: watchdog device has not been initialized\n");
  return;
 }

 FUNC_0(VAR_1, VAR_1->wdog_mode,
     (VAR_2[0].value << VAR_1->wdog_mode_intvl_shift) |
     VAR_1->wdog_mode_en);
 if (VAR_1->wdog_config)
  FUNC_0(VAR_1, VAR_1->wdog_config,
        VAR_1->wdog_config_value);
 FUNC_0(VAR_1, VAR_1->wdog_ctrl,
     VAR_0 | VAR_1->wdog_ctrl_key);
 while(1)
  ;

}
