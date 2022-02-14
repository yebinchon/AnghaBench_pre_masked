
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_usb_endpoint {int datainterval; int stride; int silence_value; int maxpacksize; unsigned int freqmax; int freqn; unsigned int curpacksize; unsigned int syncinterval; unsigned int nurbs; int pipe; TYPE_1__* chip; struct snd_urb_ctx* urb; scalar_t__ fill_max; } ;
struct snd_urb_ctx {unsigned int index; unsigned int packets; unsigned int buffer_size; int ready_list; TYPE_2__* urb; struct snd_usb_endpoint* ep; } ;
struct audioformat {int datainterval; scalar_t__ fmt_type; } ;
typedef scalar_t__ snd_pcm_format_t ;
struct TYPE_4__ {int transfer_flags; int interval; int complete; struct snd_urb_ctx* context; int pipe; int transfer_buffer; int transfer_dma; } ;
struct TYPE_3__ {unsigned int nrpacks; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct snd_usb_endpoint*,int ) ;
 int VAR_10 ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct snd_usb_endpoint*) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (unsigned int,int ) ;
 int FUNC_8 (int ,unsigned int,int ,int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct snd_usb_endpoint *VAR_11,
         snd_pcm_format_t VAR_12,
         unsigned int VAR_13,
         unsigned int VAR_14,
         struct audioformat *VAR_15,
         struct snd_usb_endpoint *VAR_16)
{
 unsigned int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22 = FUNC_9(VAR_11->pipe);
 int VAR_23 = FUNC_4(VAR_12) * VAR_13;

 VAR_11->datainterval = VAR_15->datainterval;
 VAR_11->stride = VAR_23 >> 3;
 VAR_11->silence_value = VAR_12 == VAR_5 ? 0x80 : 0;


 if (VAR_11->maxpacksize) {

  VAR_17 = VAR_11->maxpacksize;
  VAR_11->freqmax = (VAR_17 / (VAR_23 >> 3))
    << (16 - VAR_11->datainterval);
 } else {

  VAR_11->freqmax = VAR_11->freqn + (VAR_11->freqn >> 2);
  VAR_17 = ((VAR_11->freqmax + 0xffff) * (VAR_23 >> 3))
    >> (16 - VAR_11->datainterval);
 }

 if (VAR_11->fill_max)
  VAR_11->curpacksize = VAR_11->maxpacksize;
 else
  VAR_11->curpacksize = VAR_17;

 if (FUNC_6(VAR_11->chip->dev) != VAR_9)
  VAR_21 = 8 >> VAR_11->datainterval;
 else
  VAR_21 = 1;

 if (VAR_22 && !FUNC_5(VAR_11)) {
  VAR_19 = FUNC_1(VAR_11->chip->nrpacks, 1);
  VAR_19 = FUNC_2(VAR_19, (unsigned int) VAR_2);
 } else {
  VAR_19 = 1;
 }

 VAR_19 *= VAR_21;

 if (VAR_16 && !FUNC_5(VAR_11))
  VAR_19 = FUNC_2(VAR_19, 1U << VAR_16->syncinterval);


 if (VAR_22 && !FUNC_5(VAR_11)) {
  unsigned int VAR_24, VAR_25;

  VAR_24 = (VAR_11->freqn >> (16 - VAR_11->datainterval))
     * (VAR_23 >> 3);

  if (VAR_16)
   VAR_24 -= VAR_24 >> 3;
  VAR_24 = FUNC_1(VAR_24, 1u);
  VAR_20 = (VAR_14 + VAR_24 - 1) / VAR_24;

  if (VAR_20 < 2) {
   VAR_20 = 2;
  } else {

   VAR_25 = FUNC_1(VAR_3 * VAR_21, VAR_19 * 2);
   VAR_20 = FUNC_2(VAR_20, VAR_25);
  }
 } else {
  while (VAR_19 > 1 && VAR_19 * VAR_17 >= VAR_14)
   VAR_19 >>= 1;
  VAR_20 = VAR_4 * VAR_19;
 }

 VAR_11->nurbs = (VAR_20 + VAR_19 - 1) / VAR_19;
 if (VAR_11->nurbs > VAR_4) {

  VAR_11->nurbs = VAR_4;
  VAR_20 = VAR_4 * VAR_19;
 } else if (VAR_11->nurbs < 2) {



  VAR_11->nurbs = 2;
 }


 for (VAR_18 = 0; VAR_18 < VAR_11->nurbs; VAR_18++) {
  struct snd_urb_ctx *VAR_26 = &VAR_11->urb[VAR_18];
  VAR_26->index = VAR_18;
  VAR_26->ep = VAR_11;
  VAR_26->packets = (VAR_18 + 1) * VAR_20 / VAR_11->nurbs
   - VAR_18 * VAR_20 / VAR_11->nurbs;
  VAR_26->buffer_size = VAR_17 * VAR_26->packets;

  if (VAR_15->fmt_type == VAR_6)
   VAR_26->packets++;
  VAR_26->urb = FUNC_7(VAR_26->packets, VAR_1);
  if (!VAR_26->urb)
   goto out_of_memory;

  VAR_26->urb->transfer_buffer =
   FUNC_8(VAR_11->chip->dev, VAR_26->buffer_size,
        VAR_1, &VAR_26->urb->transfer_dma);
  if (!VAR_26->urb->transfer_buffer)
   goto out_of_memory;
  VAR_26->urb->pipe = VAR_11->pipe;
  VAR_26->urb->transfer_flags = VAR_7 | VAR_8;
  VAR_26->urb->interval = 1 << VAR_11->datainterval;
  VAR_26->urb->context = VAR_26;
  VAR_26->urb->complete = VAR_10;
  FUNC_0(&VAR_26->ready_list);
 }

 return 0;

out_of_memory:
 FUNC_3(VAR_11, 0);
 return -VAR_0;
}
