
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int transfer_buffer_length; int number_of_packets; TYPE_2__* iso_frame_desc; int dev; } ;
struct snd_usb_endpoint {int type; int curpacksize; int syncmaxsize; TYPE_1__* chip; } ;
struct snd_urb_ctx {int packets; struct urb* urb; } ;
struct TYPE_4__ {int offset; int length; } ;
struct TYPE_3__ {int dev; } ;




 int FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct snd_usb_endpoint *VAR_0,
           struct snd_urb_ctx *VAR_1)
{
 int VAR_2, VAR_3;
 struct urb *VAR_4 = VAR_1->urb;

 VAR_4->dev = VAR_0->chip->dev;

 switch (VAR_0->type) {
 case 129:
  VAR_3 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_1->packets; VAR_2++) {
   VAR_4->iso_frame_desc[VAR_2].offset = VAR_3;
   VAR_4->iso_frame_desc[VAR_2].length = VAR_0->curpacksize;
   VAR_3 += VAR_0->curpacksize;
  }

  VAR_4->transfer_buffer_length = VAR_3;
  VAR_4->number_of_packets = VAR_1->packets;
  break;

 case 128:
  VAR_4->iso_frame_desc[0].length = FUNC_0(4u, VAR_0->syncmaxsize);
  VAR_4->iso_frame_desc[0].offset = 0;
  break;
 }
}
