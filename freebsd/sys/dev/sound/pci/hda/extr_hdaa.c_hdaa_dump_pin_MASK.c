
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int cap; int config; int ctrl; } ;
struct TYPE_8__ {TYPE_3__ pin; } ;
struct TYPE_6__ {int widget_cap; } ;
struct hdaa_widget {TYPE_4__ wclass; TYPE_2__ param; TYPE_1__* devinfo; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int ,char*,int) ;
 int FUNC_19 (char*) ;

__attribute__((used)) static void
FUNC_20(struct hdaa_widget *VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = VAR_4->wclass.pin.cap;

 FUNC_18(VAR_4->devinfo->dev, "        Pin cap: 0x%08x", VAR_5);
 if (FUNC_7(VAR_5))
  FUNC_19(" ISC");
 if (FUNC_11(VAR_5))
  FUNC_19(" TRQD");
 if (FUNC_10(VAR_5))
  FUNC_19(" PDC");
 if (FUNC_6(VAR_5))
  FUNC_19(" HP");
 if (FUNC_9(VAR_5))
  FUNC_19(" OUT");
 if (FUNC_8(VAR_5))
  FUNC_19(" IN");
 if (FUNC_1(VAR_5))
  FUNC_19(" BAL");
 if (FUNC_5(VAR_5))
  FUNC_19(" HDMI");
 if (FUNC_12(VAR_5)) {
  FUNC_19(" VREF[");
  if (FUNC_14(VAR_5))
   FUNC_19(" 50");
  if (FUNC_15(VAR_5))
   FUNC_19(" 80");
  if (FUNC_13(VAR_5))
   FUNC_19(" 100");
  if (FUNC_16(VAR_5))
   FUNC_19(" GROUND");
  if (FUNC_17(VAR_5))
   FUNC_19(" HIZ");
  FUNC_19(" ]");
 }
 if (FUNC_3(VAR_5))
  FUNC_19(" EAPD");
 if (FUNC_2(VAR_5))
  FUNC_19(" DP");
 if (FUNC_4(VAR_5))
  FUNC_19(" HBR");
 FUNC_19("\n");
 FUNC_18(VAR_4->devinfo->dev, "     Pin config: 0x%08x\n",
     VAR_4->wclass.pin.config);
 FUNC_18(VAR_4->devinfo->dev, "    Pin control: 0x%08x", VAR_4->wclass.pin.ctrl);
 if (VAR_4->wclass.pin.ctrl & VAR_0)
  FUNC_19(" HP");
 if (VAR_4->wclass.pin.ctrl & VAR_1)
  FUNC_19(" IN");
 if (VAR_4->wclass.pin.ctrl & VAR_2)
  FUNC_19(" OUT");
 if (FUNC_0(VAR_4->param.widget_cap)) {
  if ((VAR_4->wclass.pin.ctrl &
      VAR_3) == 0x03)
   FUNC_19(" HBR");
  else if ((VAR_4->wclass.pin.ctrl &
      VAR_3) != 0)
   FUNC_19(" EPTs");
 } else {
  if ((VAR_4->wclass.pin.ctrl &
      VAR_3) != 0)
   FUNC_19(" VREFs");
 }
 FUNC_19("\n");
}
