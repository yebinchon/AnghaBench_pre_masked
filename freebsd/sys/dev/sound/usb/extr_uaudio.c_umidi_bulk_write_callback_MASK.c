
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_2__ {int * fp; } ;
struct umidi_sub_chan {int * temp_cmd; TYPE_1__ fifo; int write_open; } ;
struct umidi_chan {int curr_cable; size_t max_emb_jack; int single_command; struct umidi_sub_chan* sub; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct umidi_sub_chan*,size_t,int) ;
 int FUNC_3 (int ,int*,int,int *,int ) ;
 int FUNC_4 (struct usb_page_cache*,int,int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_7 (struct usb_xfer*,int ) ;
 int FUNC_8 (struct usb_xfer*,int ,int) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct umidi_chan* FUNC_10 (struct usb_xfer*) ;
 int FUNC_11 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_12(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct umidi_chan *VAR_5 = FUNC_10(VAR_3);
 struct umidi_sub_chan *VAR_6;
 struct usb_page_cache *VAR_7;
 uint32_t VAR_8;
 uint16_t VAR_9;
 uint8_t VAR_10;
 uint8_t VAR_11;
 uint8_t VAR_12;
 int VAR_13;

 FUNC_11(VAR_3, &VAR_13, ((void*)0), ((void*)0), ((void*)0));





 switch (FUNC_1(VAR_3)) {
 case 128:
  FUNC_0("actlen=%d bytes\n", VAR_13);

 case 129:
tr_setup:
  FUNC_0("start\n");

  VAR_9 = 0;
  VAR_11 = VAR_5->curr_cable;
  VAR_12 = 0;
  VAR_7 = FUNC_7(VAR_3, 0);

  while (1) {



   VAR_6 = &VAR_5->sub[VAR_5->curr_cable];

   if (VAR_6->write_open) {
    FUNC_3(VAR_6->fifo.fp[VAR_2],
        &VAR_10, 1, &VAR_8, 0);
   } else {
    VAR_8 = 0;
   }

   if (VAR_8) {

    VAR_12 = 1;

    FUNC_0("byte=0x%02x from FIFO %u\n", VAR_10,
        (unsigned int)VAR_5->curr_cable);

    if (FUNC_2(VAR_6, VAR_5->curr_cable, VAR_10)) {

     FUNC_0("sub=0x%02x 0x%02x 0x%02x 0x%02x\n",
         VAR_6->temp_cmd[0], VAR_6->temp_cmd[1],
         VAR_6->temp_cmd[2], VAR_6->temp_cmd[3]);

     FUNC_4(VAR_7, VAR_9 * 4, VAR_6->temp_cmd, 4);

     VAR_9++;

     if ((VAR_9 >= VAR_0) || (VAR_5->single_command != 0))
      break;
    } else {
     continue;
    }
   }

   VAR_5->curr_cable++;
   if (VAR_5->curr_cable >= VAR_5->max_emb_jack)
    VAR_5->curr_cable = 0;

   if (VAR_5->curr_cable == VAR_11) {
    if (VAR_12 == 0)
     break;
    VAR_12 = 0;
   }
  }

  if (VAR_9 != 0) {
   FUNC_0("Transferring %d frames\n", (int)VAR_9);
   FUNC_8(VAR_3, 0, 4 * VAR_9);
   FUNC_6(VAR_3);
  }
  break;

 default:

  FUNC_0("error=%s\n", FUNC_5(VAR_4));

  if (VAR_4 != VAR_1) {

   FUNC_9(VAR_3);
   goto tr_setup;
  }
  break;
 }
}
