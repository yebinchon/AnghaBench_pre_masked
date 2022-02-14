
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct TYPE_2__ {int control_act; scalar_t__ control_xfr; scalar_t__ control_hdr; } ;
struct usb_xfer {int aframes; int nframes; TYPE_1__ flags_int; int * td_transfer_cache; int * td_transfer_first; int endpoint; } ;


 int FUNC_0 (int,char*,struct usb_xfer*,int ) ;
 int FUNC_1 (struct usb_xfer*,int ) ;
 int FUNC_2 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_3(struct usb_xfer *VAR_0)
{
 usb_error_t VAR_1 = 0;

 FUNC_0(12, "xfer=%p endpoint=%p transfer done\n",
     VAR_0, VAR_0->endpoint);



 VAR_0->td_transfer_cache = VAR_0->td_transfer_first;

 if (VAR_0->flags_int.control_xfr) {

  if (VAR_0->flags_int.control_hdr) {

   VAR_1 = FUNC_2(VAR_0);
  }
  VAR_0->aframes = 1;

  if (VAR_0->td_transfer_cache == ((void*)0)) {
   goto done;
  }
 }
 while (VAR_0->aframes != VAR_0->nframes) {

  VAR_1 = FUNC_2(VAR_0);
  VAR_0->aframes++;

  if (VAR_0->td_transfer_cache == ((void*)0)) {
   goto done;
  }
 }

 if (VAR_0->flags_int.control_xfr &&
     !VAR_0->flags_int.control_act) {

  VAR_1 = FUNC_2(VAR_0);
 }
done:
 FUNC_1(VAR_0, VAR_1);
}
