
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_usb_endpoint {int syncinterval; int nurbs; int pipe; scalar_t__ sync_dma; scalar_t__ syncbuf; struct snd_urb_ctx* urb; TYPE_1__* chip; } ;
struct snd_urb_ctx {int index; int packets; TYPE_2__* urb; struct snd_usb_endpoint* ep; } ;
struct audioformat {int dummy; } ;
struct TYPE_4__ {int transfer_buffer_length; int transfer_flags; int number_of_packets; int interval; int complete; struct snd_urb_ctx* context; int pipe; scalar_t__ transfer_dma; scalar_t__ transfer_buffer; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_usb_endpoint*,int ) ;
 int VAR_5 ;
 TYPE_2__* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ,int,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct snd_usb_endpoint *VAR_6,
         struct audioformat *VAR_7)
{
 int VAR_8;

 VAR_6->syncbuf = FUNC_2(VAR_6->chip->dev, VAR_2 * 4,
      VAR_1, &VAR_6->sync_dma);
 if (!VAR_6->syncbuf)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  struct snd_urb_ctx *VAR_9 = &VAR_6->urb[VAR_8];
  VAR_9->index = VAR_8;
  VAR_9->ep = VAR_6;
  VAR_9->packets = 1;
  VAR_9->urb = FUNC_1(1, VAR_1);
  if (!VAR_9->urb)
   goto out_of_memory;
  VAR_9->urb->transfer_buffer = VAR_6->syncbuf + VAR_8 * 4;
  VAR_9->urb->transfer_dma = VAR_6->sync_dma + VAR_8 * 4;
  VAR_9->urb->transfer_buffer_length = 4;
  VAR_9->urb->pipe = VAR_6->pipe;
  VAR_9->urb->transfer_flags = VAR_3 |
      VAR_4;
  VAR_9->urb->number_of_packets = 1;
  VAR_9->urb->interval = 1 << VAR_6->syncinterval;
  VAR_9->urb->context = VAR_9;
  VAR_9->urb->complete = VAR_5;
 }

 VAR_6->nurbs = VAR_2;

 return 0;

out_of_memory:
 FUNC_0(VAR_6, 0);
 return -VAR_0;
}
