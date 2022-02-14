
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panel_info {int h_back_porch; int h_pulse_width; int h_front_porch; int v_back_porch; int v_pulse_width; int v_front_porch; int clk_div; } ;
struct TYPE_2__ {int fb_height; int fb_width; int fb_pbase; } ;
struct dcu_softc {TYPE_1__ sc_info; struct panel_info* panel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_9 (struct dcu_softc*,int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_10 (struct dcu_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_11(struct dcu_softc *VAR_32)
{
 struct panel_info *VAR_33;
 int VAR_34;
 int VAR_35;

 VAR_33 = VAR_32->panel;


 VAR_34 = ((VAR_32->sc_info.fb_height) << VAR_17);
 VAR_34 |= (VAR_32->sc_info.fb_width / 16);
 FUNC_10(VAR_32, VAR_6, VAR_34);

 VAR_34 = (VAR_33->h_back_porch << VAR_2);
 VAR_34 |= (VAR_33->h_pulse_width << VAR_27);
 VAR_34 |= (VAR_33->h_front_porch << VAR_19);
 FUNC_10(VAR_32, VAR_8, VAR_34);

 VAR_34 = (VAR_33->v_back_porch << VAR_3);
 VAR_34 |= (VAR_33->v_pulse_width << VAR_28);
 VAR_34 |= (VAR_33->v_front_porch << VAR_20);
 FUNC_10(VAR_32, VAR_16, VAR_34);

 FUNC_10(VAR_32, VAR_4, 0);
 FUNC_10(VAR_32, VAR_7, VAR_33->clk_div);

 VAR_34 = (VAR_22 | VAR_21);
 FUNC_10(VAR_32, VAR_13, VAR_34);


 VAR_34 = (0x3 << VAR_23);
 VAR_34 |= (0x78 << VAR_25);
 VAR_34 |= (0 << VAR_26);
 FUNC_10(VAR_32, VAR_14, VAR_34);


 FUNC_10(VAR_32, VAR_9, 0xffffffff);


 for (VAR_35 = 0; VAR_35 < VAR_24; VAR_35++) {
  FUNC_10(VAR_32, FUNC_0(VAR_35), 0x0);
  FUNC_10(VAR_32, FUNC_1(VAR_35), 0x0);
  FUNC_10(VAR_32, FUNC_2(VAR_35), 0x0);
  FUNC_10(VAR_32, FUNC_3(VAR_35), 0x0);
  FUNC_10(VAR_32, FUNC_4(VAR_35), 0x0);
  FUNC_10(VAR_32, FUNC_5(VAR_35), 0x0);
  FUNC_10(VAR_32, FUNC_6(VAR_35), 0x0);
  FUNC_10(VAR_32, FUNC_7(VAR_35), 0x0);
  FUNC_10(VAR_32, FUNC_8(VAR_35), 0x0);
 }


 VAR_34 = (VAR_32->sc_info.fb_width | (VAR_32->sc_info.fb_height << 16));
 FUNC_10(VAR_32, FUNC_0(0), VAR_34);
 FUNC_10(VAR_32, FUNC_1(0), 0x0);
 FUNC_10(VAR_32, FUNC_2(0), VAR_32->sc_info.fb_pbase);
 VAR_34 = (VAR_0 << VAR_1);
 VAR_34 |= VAR_18;
 VAR_34 |= (0xFF << VAR_31);
 FUNC_10(VAR_32, FUNC_3(0), VAR_34);
 FUNC_10(VAR_32, FUNC_4(0), 0xffffff);
 FUNC_10(VAR_32, FUNC_5(0), 0x0);
 FUNC_10(VAR_32, FUNC_6(0), 0x0);
 FUNC_10(VAR_32, FUNC_7(0), 0x0);
 FUNC_10(VAR_32, FUNC_8(0), 0x0);


 VAR_34 = FUNC_9(VAR_32, VAR_5);
 VAR_34 &= ~(VAR_10 << VAR_12);
 VAR_34 |= (VAR_11 << VAR_12);
 VAR_34 |= (VAR_29);
 FUNC_10(VAR_32, VAR_5, VAR_34);
 FUNC_10(VAR_32, VAR_15, VAR_30);

 return (0);
}
