
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_info {void* backlight_pin; void* clk_div; void* v_front_porch; void* v_pulse_width; void* v_back_porch; void* h_front_porch; void* h_pulse_width; void* h_back_porch; void* height; void* width; } ;
struct dcu_softc {int dev; } ;
typedef int phandle_t ;
typedef void* pcell_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,void**,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct dcu_softc *VAR_1, struct panel_info *VAR_2)
{
 phandle_t VAR_3;
 pcell_t VAR_4[3];
 int VAR_5;

 if ((VAR_3 = FUNC_2(VAR_1->dev)) == -1)
  return (VAR_0);


 if ((VAR_5 = FUNC_1(VAR_3, "panel-size")) <= 0)
  return (VAR_0);
 FUNC_0(VAR_3, "panel-size", VAR_4, VAR_5);
 VAR_2->width = VAR_4[0];
 VAR_2->height = VAR_4[1];


 if ((VAR_5 = FUNC_1(VAR_3, "panel-hsync")) <= 0)
  return (VAR_0);
 FUNC_0(VAR_3, "panel-hsync", VAR_4, VAR_5);
 VAR_2->h_back_porch = VAR_4[0];
 VAR_2->h_pulse_width = VAR_4[1];
 VAR_2->h_front_porch = VAR_4[2];


 if ((VAR_5 = FUNC_1(VAR_3, "panel-vsync")) <= 0)
  return (VAR_0);
 FUNC_0(VAR_3, "panel-vsync", VAR_4, VAR_5);
 VAR_2->v_back_porch = VAR_4[0];
 VAR_2->v_pulse_width = VAR_4[1];
 VAR_2->v_front_porch = VAR_4[2];


 if ((VAR_5 = FUNC_1(VAR_3, "panel-clk-div")) <= 0)
  return (VAR_0);
 FUNC_0(VAR_3, "panel-clk-div", VAR_4, VAR_5);
 VAR_2->clk_div = VAR_4[0];


 if ((VAR_5 = FUNC_1(VAR_3, "panel-backlight-pin")) <= 0)
  return (VAR_0);
 FUNC_0(VAR_3, "panel-backlight-pin", VAR_4, VAR_5);
 VAR_2->backlight_pin = VAR_4[0];

 return (0);
}
