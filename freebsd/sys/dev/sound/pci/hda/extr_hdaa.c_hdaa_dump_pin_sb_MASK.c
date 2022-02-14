
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct sbuf {int dummy; } ;
struct TYPE_5__ {int ctrl; int config; int cap; } ;
struct TYPE_6__ {TYPE_2__ pin; } ;
struct TYPE_4__ {int widget_cap; } ;
struct hdaa_widget {TYPE_3__ wclass; TYPE_1__ param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (struct sbuf*,char*,...) ;

__attribute__((used)) static void
FUNC_27(struct sbuf *VAR_9, struct hdaa_widget *VAR_10)
{
 uint32_t VAR_11, VAR_12;

 VAR_11 = VAR_10->wclass.pin.cap;

 FUNC_26(VAR_9, "        Pin cap: 0x%08x", VAR_11);
 if (FUNC_15(VAR_11))
  FUNC_26(VAR_9, " ISC");
 if (FUNC_19(VAR_11))
  FUNC_26(VAR_9, " TRQD");
 if (FUNC_18(VAR_11))
  FUNC_26(VAR_9, " PDC");
 if (FUNC_14(VAR_11))
  FUNC_26(VAR_9, " HP");
 if (FUNC_17(VAR_11))
  FUNC_26(VAR_9, " OUT");
 if (FUNC_16(VAR_11))
  FUNC_26(VAR_9, " IN");
 if (FUNC_9(VAR_11))
  FUNC_26(VAR_9, " BAL");
 if (FUNC_13(VAR_11))
  FUNC_26(VAR_9, " HDMI");
 if (FUNC_20(VAR_11)) {
  FUNC_26(VAR_9, " VREF[");
  if (FUNC_22(VAR_11))
   FUNC_26(VAR_9, " 50");
  if (FUNC_23(VAR_11))
   FUNC_26(VAR_9, " 80");
  if (FUNC_21(VAR_11))
   FUNC_26(VAR_9, " 100");
  if (FUNC_24(VAR_11))
   FUNC_26(VAR_9, " GROUND");
  if (FUNC_25(VAR_11))
   FUNC_26(VAR_9, " HIZ");
  FUNC_26(VAR_9, " ]");
 }
 if (FUNC_11(VAR_11))
  FUNC_26(VAR_9, " EAPD");
 if (FUNC_10(VAR_11))
  FUNC_26(VAR_9, " DP");
 if (FUNC_12(VAR_11))
  FUNC_26(VAR_9, " HBR");
 FUNC_26(VAR_9, "\n");
 VAR_12 = VAR_10->wclass.pin.config;
 FUNC_26(VAR_9, "     Pin config: 0x%08x", VAR_12);
 FUNC_26(VAR_9, " as=%d seq=%d "
     "device=%s conn=%s ctype=%s loc=%s color=%s misc=%d\n",
     FUNC_0(VAR_12),
     FUNC_7(VAR_12),
     VAR_7[FUNC_4(VAR_12)],
     VAR_6[FUNC_3(VAR_12)],
     VAR_5[FUNC_2(VAR_12)],
     VAR_8[FUNC_5(VAR_12)],
     VAR_4[FUNC_1(VAR_12)],
     FUNC_6(VAR_12));
 FUNC_26(VAR_9, "    Pin control: 0x%08x", VAR_10->wclass.pin.ctrl);
 if (VAR_10->wclass.pin.ctrl & VAR_0)
  FUNC_26(VAR_9, " HP");
 if (VAR_10->wclass.pin.ctrl & VAR_1)
  FUNC_26(VAR_9, " IN");
 if (VAR_10->wclass.pin.ctrl & VAR_2)
  FUNC_26(VAR_9, " OUT");
 if (FUNC_8(VAR_10->param.widget_cap)) {
  if ((VAR_10->wclass.pin.ctrl &
      VAR_3) == 0x03)
   FUNC_26(VAR_9, " HBR");
  else if ((VAR_10->wclass.pin.ctrl &
      VAR_3) != 0)
   FUNC_26(VAR_9, " EPTs");
 } else {
  if ((VAR_10->wclass.pin.ctrl &
      VAR_3) != 0)
   FUNC_26(VAR_9, " VREFs");
 }
 FUNC_26(VAR_9, "\n");
}
