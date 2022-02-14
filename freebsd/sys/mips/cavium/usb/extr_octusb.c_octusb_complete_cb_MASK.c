
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octusb_td {int error_any; int error_stall; TYPE_1__* qh; } ;
typedef int cvmx_usb_state_t ;
typedef int cvmx_usb_complete_t ;
typedef scalar_t__ cvmx_usb_callback_t ;
struct TYPE_2__ {int fixup_complete; int fixup_actlen; int fixup_handle; scalar_t__ fixup_pending; } ;


 scalar_t__ VAR_0 ;




__attribute__((used)) static void
FUNC_0(cvmx_usb_state_t *VAR_1,
    cvmx_usb_callback_t VAR_2,
    cvmx_usb_complete_t VAR_3,
    int VAR_4, int VAR_5,
    int VAR_6, void *VAR_7)
{
 struct octusb_td *VAR_8;

 if (VAR_2 != VAR_0)
  return;

 VAR_8 = VAR_7;

 VAR_8->qh->fixup_complete = 1;
 VAR_8->qh->fixup_pending = 0;
 VAR_8->qh->fixup_actlen = VAR_6;
 VAR_8->qh->fixup_handle = -1;

 switch (VAR_3) {
 case 128:
 case 130:
  VAR_8->error_any = 0;
  VAR_8->error_stall = 0;
  break;
 case 129:
  VAR_8->error_stall = 1;
  VAR_8->error_any = 1;
  break;
 default:
  VAR_8->error_any = 1;
  break;
 }
}
