
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panel_info {int ivclk; int fixvclk; int clkval_f; int v_pulse_width; int v_front_porch; int v_back_porch; int h_pulse_width; int h_front_porch; int h_back_porch; int width; int height; } ;
struct TYPE_2__ {int fb_pbase; int fb_stride; int fb_height; } ;
struct fimd_softc {TYPE_1__ sc_info; struct panel_info* panel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fimd_softc*,int ,int) ;
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
 int FUNC_1 (struct fimd_softc*,int ) ;
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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_2 (struct fimd_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct fimd_softc *VAR_33)
{
 struct panel_info *VAR_34;
 int VAR_35;

 VAR_34 = VAR_33->panel;


 VAR_35 = VAR_34->ivclk | VAR_34->fixvclk;
 FUNC_0(VAR_33,VAR_20,VAR_35);

 VAR_35 = (VAR_18 | VAR_19);
 VAR_35 |= (VAR_34->clkval_f << VAR_3);
 FUNC_2(VAR_33,VAR_17,VAR_35);

 VAR_35 = (VAR_34->v_pulse_width << VAR_29);
 VAR_35 |= (VAR_34->v_front_porch << VAR_31);
 VAR_35 |= (VAR_34->v_back_porch << VAR_30);
 FUNC_0(VAR_33,VAR_23,VAR_35);

 VAR_35 = (VAR_34->h_pulse_width << VAR_10);
 VAR_35 |= (VAR_34->h_front_porch << VAR_12);
 VAR_35 |= (VAR_34->h_back_porch << VAR_11);
 FUNC_0(VAR_33,VAR_24,VAR_35);

 VAR_35 = ((VAR_34->width - 1) << VAR_9);
 VAR_35 |= ((VAR_34->height - 1) << VAR_13);
 FUNC_0(VAR_33,VAR_25,VAR_35);

 VAR_35 = VAR_33->sc_info.fb_pbase;
 FUNC_2(VAR_33, VAR_26, VAR_35);
 VAR_35 += (VAR_33->sc_info.fb_stride * (VAR_33->sc_info.fb_height + 1));
 FUNC_2(VAR_33, VAR_27, VAR_35);
 FUNC_2(VAR_33, VAR_28, VAR_33->sc_info.fb_stride);

 VAR_35 = ((VAR_34->width - 1) << VAR_14);
 VAR_35 |= ((VAR_34->height - 1) << VAR_15);
 FUNC_2(VAR_33,VAR_21,VAR_35);

 VAR_35 = VAR_34->width * VAR_34->height;
 FUNC_2(VAR_33,VAR_22,VAR_35);

 VAR_35 = FUNC_1(VAR_33, VAR_16);
 VAR_35 |= VAR_2;
 VAR_35 &= ~(1 << 5);
 FUNC_2(VAR_33,VAR_16,VAR_35);

 VAR_35 = VAR_1 << VAR_0;
 VAR_35 |= VAR_7 | VAR_8;
 VAR_35 &= ~VAR_6;
 FUNC_2(VAR_33,VAR_32,VAR_35);


 FUNC_2(VAR_33, VAR_4, VAR_5);

 return (0);
}
