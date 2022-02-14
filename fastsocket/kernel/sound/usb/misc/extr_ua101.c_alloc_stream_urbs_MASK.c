
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int transfer_flags; unsigned int transfer_dma; unsigned int transfer_buffer_length; int number_of_packets; int interval; void (* complete ) (struct urb*) ;TYPE_1__* iso_frame_desc; struct ua101* context; int * transfer_buffer; int pipe; TYPE_2__* dev; } ;
struct ua101_urb {TYPE_3__ urb; } ;
struct ua101_stream {unsigned int max_packet_bytes; unsigned int queue_length; struct ua101_urb** urbs; int usb_pipe; TYPE_4__* buffers; } ;
struct ua101 {TYPE_2__* dev; } ;
typedef unsigned int dma_addr_t ;
struct TYPE_8__ {unsigned int size; unsigned int dma; int * addr; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {unsigned int length; scalar_t__ offset; } ;


 unsigned int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 struct ua101_urb* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct ua101 *VAR_5, struct ua101_stream *VAR_6,
        void (*VAR_7)(struct urb *))
{
 unsigned VAR_8 = VAR_6->max_packet_bytes;
 struct ua101_urb *VAR_9;
 unsigned int VAR_10, VAR_11 = 0;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6->buffers); ++VAR_10) {
  unsigned int VAR_12 = VAR_6->buffers[VAR_10].size;
  u8 *VAR_13 = VAR_6->buffers[VAR_10].addr;
  dma_addr_t VAR_14 = VAR_6->buffers[VAR_10].dma;

  while (VAR_12 >= VAR_8) {
   if (VAR_11 >= VAR_6->queue_length)
    goto bufsize_error;
   VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_2);
   if (!VAR_9)
    return -VAR_0;
   FUNC_3(&VAR_9->urb);
   VAR_9->urb.dev = VAR_5->dev;
   VAR_9->urb.pipe = VAR_6->usb_pipe;
   VAR_9->urb.transfer_flags = VAR_3 |
     VAR_4;
   VAR_9->urb.transfer_buffer = VAR_13;
   VAR_9->urb.transfer_dma = VAR_14;
   VAR_9->urb.transfer_buffer_length = VAR_8;
   VAR_9->urb.number_of_packets = 1;
   VAR_9->urb.interval = 1;
   VAR_9->urb.context = VAR_5;
   VAR_9->urb.complete = VAR_7;
   VAR_9->urb.iso_frame_desc[0].offset = 0;
   VAR_9->urb.iso_frame_desc[0].length = VAR_8;
   VAR_6->urbs[VAR_11++] = VAR_9;
   VAR_12 -= VAR_8;
   VAR_13 += VAR_8;
   VAR_14 += VAR_8;
  }
 }
 if (VAR_11 == VAR_6->queue_length)
  return 0;
bufsize_error:
 FUNC_1(&VAR_5->dev->dev, "internal buffer size error\n");
 return -VAR_1;
}
