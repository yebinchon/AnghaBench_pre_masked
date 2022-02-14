
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
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_xfer*) ;
 int VAR_0 ;
 int FUNC_4 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_5(struct usb_xfer *VAR_1)
{
 usb_error_t VAR_2 = 0;

 FUNC_0(13, "xfer=%p endpoint=%p transfer done\n",
     VAR_1, VAR_1->endpoint);
 FUNC_4(VAR_1);



 VAR_1->td_transfer_cache = VAR_1->td_transfer_first;

 if (VAR_1->flags_int.control_xfr) {
  if (VAR_1->flags_int.control_hdr) {

   VAR_2 = FUNC_3(VAR_1);
  }
  VAR_1->aframes = 1;

  if (VAR_1->td_transfer_cache == ((void*)0)) {
   goto done;
  }
 }
 while (VAR_1->aframes != VAR_1->nframes) {

  VAR_2 = FUNC_3(VAR_1);
  VAR_1->aframes++;

  if (VAR_1->td_transfer_cache == ((void*)0)) {
   goto done;
  }
 }

 if (VAR_1->flags_int.control_xfr &&
     !VAR_1->flags_int.control_act) {

  VAR_2 = FUNC_3(VAR_1);
 }
done:
 FUNC_1(VAR_1, VAR_2);
}
