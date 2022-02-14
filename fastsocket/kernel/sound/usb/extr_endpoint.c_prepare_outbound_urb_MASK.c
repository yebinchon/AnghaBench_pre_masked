
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {unsigned char* transfer_buffer; int number_of_packets; unsigned int transfer_buffer_length; TYPE_2__* iso_frame_desc; int dev; } ;
struct snd_usb_endpoint {int type; unsigned int stride; unsigned char freqn; TYPE_1__* chip; int silence_value; int data_subs; int (* prepare_data_urb ) (int ,struct urb*) ;} ;
struct snd_urb_ctx {int packets; int* packet_size; struct urb* urb; } ;
struct TYPE_4__ {unsigned int offset; int length; } ;
struct TYPE_3__ {int dev; } ;




 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct urb*) ;

__attribute__((used)) static void FUNC_3(struct snd_usb_endpoint *VAR_1,
     struct snd_urb_ctx *VAR_2)
{
 int VAR_3;
 struct urb *VAR_4 = VAR_2->urb;
 unsigned char *VAR_5 = VAR_4->transfer_buffer;

 VAR_4->dev = VAR_1->chip->dev;

 switch (VAR_1->type) {
 case 129:
  if (VAR_1->prepare_data_urb) {
   VAR_1->prepare_data_urb(VAR_1->data_subs, VAR_4);
  } else {

   unsigned int VAR_6 = 0;
   for (VAR_3 = 0; VAR_3 < VAR_2->packets; ++VAR_3) {
    int VAR_7 = VAR_2->packet_size[VAR_3];
    VAR_4->iso_frame_desc[VAR_3].offset = VAR_6 * VAR_1->stride;
    VAR_4->iso_frame_desc[VAR_3].length = VAR_7 * VAR_1->stride;
    VAR_6 += VAR_7;
   }

   VAR_4->number_of_packets = VAR_2->packets;
   VAR_4->transfer_buffer_length = VAR_6 * VAR_1->stride;
   FUNC_0(VAR_4->transfer_buffer, VAR_1->silence_value,
          VAR_6 * VAR_1->stride);
  }
  break;

 case 128:
  if (FUNC_1(VAR_1->chip->dev) >= VAR_0) {




   VAR_4->iso_frame_desc[0].length = 4;
   VAR_4->iso_frame_desc[0].offset = 0;
   VAR_5[0] = VAR_1->freqn;
   VAR_5[1] = VAR_1->freqn >> 8;
   VAR_5[2] = VAR_1->freqn >> 16;
   VAR_5[3] = VAR_1->freqn >> 24;
  } else {




   VAR_4->iso_frame_desc[0].length = 3;
   VAR_4->iso_frame_desc[0].offset = 0;
   VAR_5[0] = VAR_1->freqn >> 2;
   VAR_5[1] = VAR_1->freqn >> 10;
   VAR_5[2] = VAR_1->freqn >> 18;
  }

  break;
 }
}
