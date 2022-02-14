
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_frlength_t ;
struct TYPE_4__ {int control_act; int control_stall; int control_hdr; scalar_t__ usb_mode; int control_rem; int control_did_data; } ;
struct TYPE_3__ {scalar_t__ manual_status; scalar_t__ force_short_xfer; scalar_t__ stall_pipe; } ;
struct usb_xfer {int nframes; int sumlen; int* frlengths; int max_data_length; TYPE_2__ flags_int; TYPE_1__ flags; } ;
struct usb_device_request {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct usb_xfer*) ;
 int FUNC_3 (struct usb_xfer*) ;

__attribute__((used)) static int
FUNC_4(struct usb_xfer *VAR_1)
{
 usb_frlength_t VAR_2;


 if (VAR_1->flags.stall_pipe && VAR_1->flags_int.control_act) {

  VAR_1->flags_int.control_stall = 1;
  VAR_1->flags_int.control_act = 0;
 } else {

  VAR_1->flags_int.control_stall = 0;
 }


 if (VAR_1->nframes > 2) {






  FUNC_1(0, "Too many frames: %u\n",
      (unsigned int)VAR_1->nframes);
  goto error;
 }





 if (VAR_1->flags_int.control_act) {

  if (VAR_1->flags_int.control_hdr) {



   VAR_1->flags_int.control_hdr = 0;


   if (VAR_1->flags_int.usb_mode == VAR_0) {
    FUNC_3(VAR_1);
   }
  }


  VAR_2 = VAR_1->sumlen;

 } else {



  if (VAR_1->frlengths[0] != sizeof(struct usb_device_request)) {
   FUNC_1(0, "Wrong framelength %u != %zu\n",
       VAR_1->frlengths[0], sizeof(struct
       usb_device_request));
   goto error;
  }

  if (VAR_1->flags_int.usb_mode == VAR_0) {


   if (VAR_1->nframes != 1) {





    FUNC_0("Misconfigured transfer\n");
    goto error;
   }





   VAR_1->flags_int.control_rem = 0xFFFF;
  } else {



   FUNC_3(VAR_1);
  }



  VAR_1->flags_int.control_hdr = 1;



  VAR_2 = (VAR_1->sumlen - sizeof(struct usb_device_request));
 }



 VAR_1->flags_int.control_did_data =
     FUNC_2(VAR_1);



 if (VAR_2 > VAR_1->flags_int.control_rem) {
  FUNC_1(0, "Length (%d) greater than "
      "remaining length (%d)\n", VAR_2,
      VAR_1->flags_int.control_rem);
  goto error;
 }


 if (VAR_1->flags.force_short_xfer) {
  VAR_1->flags_int.control_rem = 0;
 } else {
  if ((VAR_2 != VAR_1->max_data_length) &&
      (VAR_2 != VAR_1->flags_int.control_rem) &&
      (VAR_1->nframes != 1)) {
   FUNC_1(0, "Short control transfer without "
       "force_short_xfer set\n");
   goto error;
  }
  VAR_1->flags_int.control_rem -= VAR_2;
 }



 if ((VAR_1->flags_int.control_rem > 0) ||
     (VAR_1->flags.manual_status)) {

  VAR_1->flags_int.control_act = 1;


  if ((!VAR_1->flags_int.control_hdr) &&
      (VAR_1->nframes == 1)) {



   FUNC_1(0, "Invalid parameter "
       "combination\n");
   goto error;
  }
 } else {

  VAR_1->flags_int.control_act = 0;
 }
 return (0);

error:
 return (1);
}
