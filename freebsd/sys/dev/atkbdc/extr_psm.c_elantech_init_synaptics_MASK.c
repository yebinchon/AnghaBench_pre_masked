
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sizex; int sizey; scalar_t__ isclickpad; scalar_t__ issemimt; int hastrackpoint; int dpmmy; int dpmmx; int fwversion; int hwversion; } ;
struct TYPE_5__ {int max_x; int max_y; int min_pressure; int max_width; int tap_min_queue; int weight_len_squared; int div_min; int div_max; int div_max_na; int div_len; int tap_max_delta; int vscroll_min_delta; int vscroll_div_min; int vscroll_div_max; int softbuttons_y; int softbutton2_x; int softbutton3_x; scalar_t__ vscroll_ver_area; scalar_t__ vscroll_hor_area; scalar_t__ na_left; scalar_t__ na_bottom; scalar_t__ na_right; scalar_t__ na_top; scalar_t__ margin_left; scalar_t__ margin_bottom; scalar_t__ margin_right; scalar_t__ margin_top; int * sysctl_tree; } ;
struct TYPE_4__ {int nExtendedQueries; int capExtended; int capMultiFinger; int capAdvancedGestures; int capReportsV; int capPalmDetect; int capReportsMax; int maximumXCoord; int maximumYCoord; int capReportsMin; scalar_t__ minimumYCoord; scalar_t__ minimumXCoord; scalar_t__ capPen; scalar_t__ capClickPad; int capPassthrough; scalar_t__ verticalScroll; int infoYupmm; int infoXupmm; int infoMinor; int infoMajor; } ;
struct psm_softc {TYPE_3__ elanhw; TYPE_2__ syninfo; TYPE_1__ synhw; } ;


 int FUNC_0 (struct psm_softc*,char*,char*) ;

__attribute__((used)) static void
FUNC_1(struct psm_softc *VAR_0)
{


 VAR_0->synhw.infoMajor = VAR_0->elanhw.hwversion;
 VAR_0->synhw.infoMinor = VAR_0->elanhw.fwversion;
 VAR_0->synhw.infoXupmm = VAR_0->elanhw.dpmmx;
 VAR_0->synhw.infoYupmm = VAR_0->elanhw.dpmmy;
 VAR_0->synhw.verticalScroll = 0;
 VAR_0->synhw.nExtendedQueries = 4;
 VAR_0->synhw.capExtended = 1;
 VAR_0->synhw.capPassthrough = VAR_0->elanhw.hastrackpoint;
 VAR_0->synhw.capClickPad = VAR_0->elanhw.isclickpad;
 VAR_0->synhw.capMultiFinger = 1;
 if (VAR_0->elanhw.issemimt)
  VAR_0->synhw.capAdvancedGestures = 1;
 else
  VAR_0->synhw.capReportsV = 1;
 VAR_0->synhw.capPalmDetect = 1;
 VAR_0->synhw.capPen = 0;
 VAR_0->synhw.capReportsMax = 1;
 VAR_0->synhw.maximumXCoord = VAR_0->elanhw.sizex;
 VAR_0->synhw.maximumYCoord = VAR_0->elanhw.sizey;
 VAR_0->synhw.capReportsMin = 1;
 VAR_0->synhw.minimumXCoord = 0;
 VAR_0->synhw.minimumYCoord = 0;

 if (VAR_0->syninfo.sysctl_tree == ((void*)0)) {
  FUNC_0(VAR_0, "elantech",
      "Elantech Touchpad");
  VAR_0->syninfo.max_x = VAR_0->elanhw.sizex;
  VAR_0->syninfo.max_y = VAR_0->elanhw.sizey;


  VAR_0->syninfo.min_pressure = 1;


  VAR_0->syninfo.max_width = 7;


  VAR_0->syninfo.tap_min_queue = 1;


  VAR_0->syninfo.margin_top = 0;
  VAR_0->syninfo.margin_right = 0;
  VAR_0->syninfo.margin_bottom = 0;
  VAR_0->syninfo.margin_left = 0;


  VAR_0->syninfo.na_top = 0;
  VAR_0->syninfo.na_right = 0;
  VAR_0->syninfo.na_bottom = 0;
  VAR_0->syninfo.na_left = 0;


  VAR_0->syninfo.weight_len_squared = 200;
  VAR_0->syninfo.div_min = 3;
  VAR_0->syninfo.div_max = 6;
  VAR_0->syninfo.div_max_na = 10;
  VAR_0->syninfo.div_len = 30;
  VAR_0->syninfo.tap_max_delta = 25;


  VAR_0->syninfo.vscroll_hor_area = 0;
  VAR_0->syninfo.vscroll_ver_area = 0;
  VAR_0->syninfo.vscroll_min_delta = 15;
  VAR_0->syninfo.vscroll_div_min = 30;
  VAR_0->syninfo.vscroll_div_max = 50;


  if (VAR_0->elanhw.isclickpad) {
   VAR_0->syninfo.softbuttons_y = VAR_0->elanhw.sizey / 4;
   VAR_0->syninfo.softbutton2_x = VAR_0->elanhw.sizex * 11 / 25;
   VAR_0->syninfo.softbutton3_x = VAR_0->elanhw.sizex * 14 / 25;
  }
 }

 return;
}
