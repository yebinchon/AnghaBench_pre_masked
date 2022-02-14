
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ capMultiFinger; scalar_t__ capAdvancedGestures; scalar_t__ capClickPad; scalar_t__ verticalScroll; } ;
struct TYPE_5__ {int directional_scrolls; int max_x; int max_y; int two_finger_scroll; int min_pressure; int max_pressure; int max_width; int margin_top; int margin_right; int margin_bottom; int margin_left; int na_top; int na_right; int na_bottom; int na_left; int window_min; int window_max; int multiplicator; int weight_current; int weight_previous; int weight_previous_na; int weight_len_squared; int div_min; int div_max; int div_max_na; int div_len; int tap_max_delta; int tap_min_queue; int vscroll_ver_area; int vscroll_min_delta; int vscroll_div_min; int vscroll_div_max; scalar_t__ softbutton3_x; scalar_t__ softbutton2_x; scalar_t__ softbuttons_y; int * sysctl_tree; int sysctl_ctx; scalar_t__ natural_scroll; scalar_t__ three_finger_drag; scalar_t__ touchpad_off; scalar_t__ vscroll_hor_area; int taphold_timeout; } ;
struct TYPE_4__ {scalar_t__ in_taphold; } ;
struct psm_softc {TYPE_3__ synhw; TYPE_2__ syninfo; TYPE_1__ gesture; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_0 (int *,int ,int ,char*,int,int*,int ,char*) ;
 int * FUNC_1 (int *,int ,int ,char const*,int,int ,char const*) ;
 int FUNC_2 (int *,int ,int ,char*,int,struct psm_softc*,int ,int ,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_5 (struct psm_softc*) ;
 int FUNC_6 (int *) ;
 int VAR_40 ;

__attribute__((used)) static void
FUNC_7(struct psm_softc *VAR_41, const char *VAR_42,
    const char *VAR_43)
{

 if (VAR_41->syninfo.sysctl_tree != ((void*)0))
  return;


 FUNC_6(&VAR_41->syninfo.sysctl_ctx);
 VAR_41->syninfo.sysctl_tree = FUNC_1(&VAR_41->syninfo.sysctl_ctx,
     FUNC_4(VAR_38), VAR_4, VAR_42, VAR_1,
     0, VAR_43);


 VAR_41->syninfo.directional_scrolls = 0;
 FUNC_0(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "directional_scrolls", VAR_2|VAR_0,
     &VAR_41->syninfo.directional_scrolls, 0,
     "Enable hardware scrolling pad (if non-zero) or register it as "
     "extended buttons (if 0)");


 VAR_41->syninfo.max_x = 6143;
 FUNC_0(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "max_x", VAR_1|VAR_0,
     &VAR_41->syninfo.max_x, 0,
     "Horizontal reporting range");


 VAR_41->syninfo.max_y = 6143;
 FUNC_0(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "max_y", VAR_1|VAR_0,
     &VAR_41->syninfo.max_y, 0,
     "Vertical reporting range");






 if (VAR_41->synhw.verticalScroll || (VAR_41->synhw.capMultiFinger == 0 &&
      VAR_41->synhw.capAdvancedGestures == 0))
  VAR_41->syninfo.two_finger_scroll = 0;
 else
  VAR_41->syninfo.two_finger_scroll = 1;

 FUNC_0(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "two_finger_scroll", VAR_2|VAR_0,
     &VAR_41->syninfo.two_finger_scroll, 0,
     "Enable two finger scrolling");


 VAR_41->syninfo.min_pressure = 32;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "min_pressure", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_15,
     VAR_39, "I",
     "Minimum pressure required to start an action");


 VAR_41->syninfo.max_pressure = 220;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "max_pressure", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_13,
     VAR_39, "I",
     "Maximum pressure to detect palm");


 VAR_41->syninfo.max_width = 10;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "max_width", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_14,
     VAR_39, "I",
     "Maximum finger width to detect palm");


 VAR_41->syninfo.margin_top = 200;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "margin_top", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_12,
     VAR_39, "I",
     "Top margin");


 VAR_41->syninfo.margin_right = 200;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "margin_right", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_11,
     VAR_39, "I",
     "Right margin");


 VAR_41->syninfo.margin_bottom = 200;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "margin_bottom", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_9,
     VAR_39, "I",
     "Bottom margin");


 VAR_41->syninfo.margin_left = 200;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "margin_left", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_10,
     VAR_39, "I",
     "Left margin");


 VAR_41->syninfo.na_top = 1783;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "na_top", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_21,
     VAR_39, "I",
     "Top noisy area, where weight_previous_na is used instead "
     "of weight_previous");


 VAR_41->syninfo.na_right = 563;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "na_right", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_20,
     VAR_39, "I",
     "Right noisy area, where weight_previous_na is used instead "
     "of weight_previous");


 VAR_41->syninfo.na_bottom = 1408;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "na_bottom", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_18,
     VAR_39, "I",
     "Bottom noisy area, where weight_previous_na is used instead "
     "of weight_previous");


 VAR_41->syninfo.na_left = 1600;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "na_left", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_19,
     VAR_39, "I",
     "Left noisy area, where weight_previous_na is used instead "
     "of weight_previous");


 VAR_41->syninfo.window_min = 4;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "window_min", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_37,
     VAR_39, "I",
     "Minimum window size to start an action");


 VAR_41->syninfo.window_max = 10;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "window_max", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_36,
     VAR_39, "I",
     "Maximum window size");


 VAR_41->syninfo.multiplicator = 10000;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "multiplicator", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_16,
     VAR_39, "I",
     "Multiplicator to increase precision in averages and divisions");


 VAR_41->syninfo.weight_current = 3;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "weight_current", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_32,
     VAR_39, "I",
     "Weight of the current movement in the new average");


 VAR_41->syninfo.weight_previous = 6;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "weight_previous", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_34,
     VAR_39, "I",
     "Weight of the previous average");


 VAR_41->syninfo.weight_previous_na = 20;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "weight_previous_na", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_35,
     VAR_39, "I",
     "Weight of the previous average (inside the noisy area)");


 VAR_41->syninfo.weight_len_squared = 2000;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "weight_len_squared", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_33,
     VAR_39, "I",
     "Length (squared) of segments where weight_previous "
     "starts to decrease");


 VAR_41->syninfo.div_min = 9;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "div_min", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_8,
     VAR_39, "I",
     "Divisor for fast movements");


 VAR_41->syninfo.div_max = 17;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "div_max", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_6,
     VAR_39, "I",
     "Divisor for slow movements");


 VAR_41->syninfo.div_max_na = 30;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "div_max_na", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_7,
     VAR_39, "I",
     "Divisor with slow movements (inside the noisy area)");


 VAR_41->syninfo.div_len = 100;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "div_len", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_5,
     VAR_39, "I",
     "Length of segments where div_max starts to decrease");


 VAR_41->syninfo.tap_max_delta = 80;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "tap_max_delta", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_23,
     VAR_39, "I",
     "Length of segments above which a tap is ignored");


 VAR_41->syninfo.tap_min_queue = 2;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "tap_min_queue", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_24,
     VAR_39, "I",
     "Number of packets required to consider a tap");


 VAR_41->gesture.in_taphold = 0;
 VAR_41->syninfo.taphold_timeout = VAR_40;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "taphold_timeout", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_22,
     VAR_39, "I",
     "Maximum elapsed time between two taps to consider a tap-hold "
     "action");


 VAR_41->syninfo.vscroll_hor_area = 0;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "vscroll_hor_area", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_29,
     VAR_39, "I",
     "Area reserved for horizontal virtual scrolling");


 VAR_41->syninfo.vscroll_ver_area = -400 - VAR_41->syninfo.margin_right;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "vscroll_ver_area", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_31,
     VAR_39, "I",
     "Area reserved for vertical virtual scrolling");


 VAR_41->syninfo.vscroll_min_delta = 50;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "vscroll_min_delta", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_30,
     VAR_39, "I",
     "Minimum movement to consider virtual scrolling");


 VAR_41->syninfo.vscroll_div_min = 100;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "vscroll_div_min", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_28,
     VAR_39, "I",
     "Divisor for fast scrolling");


 VAR_41->syninfo.vscroll_div_max = 150;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "vscroll_div_max", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_27,
     VAR_39, "I",
     "Divisor for slow scrolling");


 VAR_41->syninfo.touchpad_off = 0;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "touchpad_off", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_26,
     VAR_39, "I",
     "Turn off touchpad");

 VAR_41->syninfo.three_finger_drag = 0;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "three_finger_drag", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_25,
     VAR_39, "I",
     "Enable dragging with three fingers");


 VAR_41->syninfo.natural_scroll = 0;
 FUNC_2(&VAR_41->syninfo.sysctl_ctx,
     FUNC_3(VAR_41->syninfo.sysctl_tree), VAR_4,
     "natural_scroll", VAR_3|VAR_2|VAR_0,
     VAR_41, VAR_17,
     VAR_39, "I",
     "Enable natural scrolling");

 VAR_41->syninfo.softbuttons_y = 0;
 VAR_41->syninfo.softbutton2_x = 0;
 VAR_41->syninfo.softbutton3_x = 0;


 if (VAR_41->synhw.capClickPad)
  FUNC_5(VAR_41);
}
