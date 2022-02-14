
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int info; int makecode; } ;
typedef TYPE_1__ keystroke ;
struct TYPE_14__ {int kb_count; TYPE_3__* kb_data; } ;
typedef TYPE_2__ keyboard_t ;
struct TYPE_15__ {scalar_t__ sc_mode; int dev; } ;
typedef TYPE_3__ hv_kbd_sc ;


 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static uint32_t
FUNC_8(keyboard_t *VAR_10, int VAR_11)
{
 uint32_t VAR_12 = VAR_5;
 keystroke VAR_13;
 hv_kbd_sc *VAR_14 = VAR_10->kb_data;
 FUNC_1();

 if (!FUNC_2(VAR_10) || !FUNC_6(VAR_14))
  return (VAR_5);
 if (VAR_14->sc_mode == VAR_4) {
  if (FUNC_4(VAR_14, &VAR_13)) {
   return (VAR_5);
  }
  if ((VAR_13.info & VAR_1) || (VAR_13.info & VAR_2)) {




   if (VAR_13.info & VAR_1) {
    VAR_12 = VAR_6;
    VAR_13.info &= ~VAR_1;
   } else if (VAR_13.info & VAR_2) {
    VAR_12 = VAR_7;
    VAR_13.info &= ~VAR_2;
   }




   FUNC_5(VAR_14, &VAR_13);
  } else if (VAR_13.info & VAR_3) {







   if (VAR_9)
    FUNC_3(VAR_14->dev, "Unsupported unicode\n");
   FUNC_7(VAR_14);
   return (VAR_5);
  } else {
   VAR_12 = VAR_13.makecode;
   if (VAR_13.info & VAR_0) {
    VAR_12 |= VAR_8;
   }
   FUNC_7(VAR_14);
  }
 } else {
  if (VAR_9)
   FUNC_3(VAR_14->dev, "Unsupported mode: %d\n", VAR_14->sc_mode);
 }
 ++VAR_10->kb_count;
 FUNC_0(VAR_10, "read scan: 0x%x\n", VAR_12);
 return VAR_12;
}
