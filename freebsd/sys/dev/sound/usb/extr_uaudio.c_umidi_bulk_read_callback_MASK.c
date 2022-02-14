
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_2__ {int * fp; } ;
struct umidi_sub_chan {TYPE_1__ fifo; int read_open; } ;
struct umidi_chan {int max_emb_jack; struct umidi_sub_chan* sub; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct usb_xfer*) ;


 int* VAR_2 ;
 int FUNC_2 (int ,int*,int,int) ;
 int FUNC_3 (struct usb_page_cache*,int,int*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_6 (struct usb_xfer*,int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int ,int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct umidi_chan* FUNC_10 (struct usb_xfer*) ;
 int FUNC_11 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_12(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct umidi_chan *VAR_5 = FUNC_10(VAR_3);
 struct umidi_sub_chan *VAR_6;
 struct usb_page_cache *VAR_7;
 uint8_t VAR_8[4];
 uint8_t VAR_9;
 uint8_t VAR_10;
 uint16_t VAR_11;
 int VAR_12;

 FUNC_11(VAR_3, &VAR_12, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_3)) {
 case 128:

  FUNC_0("actlen=%d bytes\n", VAR_12);

  VAR_11 = 0;
  VAR_7 = FUNC_6(VAR_3, 0);

  while (VAR_12 >= 4) {


   FUNC_3(VAR_7, VAR_11, VAR_8, 4);

   VAR_9 = VAR_2[VAR_8[0] & 0xF];

   VAR_10 = VAR_8[0] >> 4;




   VAR_6 = &VAR_5->sub[VAR_10];

   if ((VAR_9 != 0) && (VAR_10 < VAR_5->max_emb_jack) &&
       (VAR_6->read_open != 0)) {


    FUNC_2(
        VAR_6->fifo.fp[VAR_1],
        VAR_8 + 1, VAR_9, 1);
   }
   VAR_12 -= 4;
   VAR_11 += 4;
  }

 case 129:
  FUNC_0("start\n");
tr_setup:
  FUNC_8(VAR_3, 0, FUNC_7(VAR_3));
  FUNC_5(VAR_3);
  break;

 default:
  FUNC_0("error=%s\n", FUNC_4(VAR_4));

  if (VAR_4 != VAR_0) {

   FUNC_9(VAR_3);
   goto tr_setup;
  }
  break;
 }
}
