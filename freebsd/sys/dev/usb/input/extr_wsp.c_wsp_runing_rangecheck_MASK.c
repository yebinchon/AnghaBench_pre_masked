
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsp_tuning {int enable_single_tap_clicks; int scr_hor_threshold; int pressure_tap_threshold; int pressure_untouch_threshold; int pressure_touch_threshold; int z_factor; int scale_factor; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct wsp_tuning *VAR_0)
{
 FUNC_0(VAR_0->scale_factor, 1, 63);
 FUNC_0(VAR_0->z_factor, 1, 63);
 FUNC_0(VAR_0->pressure_touch_threshold, 1, 255);
 FUNC_0(VAR_0->pressure_untouch_threshold, 1, 255);
 FUNC_0(VAR_0->pressure_tap_threshold, 1, 255);
 FUNC_0(VAR_0->scr_hor_threshold, 1, 255);
 FUNC_0(VAR_0->enable_single_tap_clicks, 0, 1);
}
