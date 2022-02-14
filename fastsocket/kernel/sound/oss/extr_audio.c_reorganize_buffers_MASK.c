
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buffparms {unsigned int data_rate; unsigned int fragment_size; unsigned int buffsize; int subdivision; unsigned int max_fragments; unsigned int nbufs; unsigned int bytes_in_use; int max_byte_counter; int flags; scalar_t__* counts; int neutral_byte; scalar_t__ raw_buf; scalar_t__ needs_reorg; } ;
struct audio_operations {int min_fragment; int max_fragment; TYPE_1__* d; } ;
struct TYPE_2__ {unsigned int (* set_speed ) (int,int ) ;unsigned int (* set_channels ) (int,int ) ;unsigned int (* set_bits ) (int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 struct audio_operations** VAR_6 ;
 int FUNC_1 (scalar_t__,int ,int) ;
 unsigned int FUNC_2 (int,int ) ;
 unsigned int FUNC_3 (int,int ) ;
 unsigned int FUNC_4 (int,int ) ;

void FUNC_5(int VAR_7, struct dma_buffparms *VAR_8, int VAR_9)
{




 struct audio_operations *VAR_10 = VAR_6[VAR_7];

 unsigned VAR_11, VAR_12;
 unsigned VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_13 = VAR_10->d->set_speed(VAR_7, 0);
 VAR_14 = VAR_10->d->set_channels(VAR_7, 0);
 VAR_15 = VAR_10->d->set_bits(VAR_7, 0);

 if (VAR_15 == 8)
  VAR_8->neutral_byte = VAR_5;
 else
  VAR_8->neutral_byte = VAR_4;

 if (VAR_13 < 1 || VAR_14 < 1 || VAR_15 < 1)
 {

  VAR_13 = VAR_2;
  VAR_14 = 1;
  VAR_15 = 8;
 }

 VAR_15 = VAR_13 * VAR_14 * VAR_15;

 VAR_15 /= 8;
 VAR_8->data_rate = VAR_15;

 if (!VAR_8->needs_reorg)
  return;
 VAR_8->needs_reorg = 0;

 if (VAR_8->fragment_size == 0)
 {
  VAR_16 = VAR_8->buffsize;
  while (VAR_16 > VAR_15)
   VAR_16 /= 2;

  if (VAR_16 == VAR_8->buffsize)
   VAR_16 /= 2;







  if (VAR_8->subdivision == 0)
  {
   VAR_8->subdivision = 4;

   if ((VAR_16 / VAR_8->subdivision) > 4096)
    VAR_8->subdivision *= 2;
   if ((VAR_16 / VAR_8->subdivision) < 4096)
    VAR_8->subdivision = 1;
  }
  VAR_16 /= VAR_8->subdivision;

  if (VAR_16 < 16)
   VAR_16 = 16;

  VAR_8->fragment_size = VAR_16;
 }
 else
 {




  if (VAR_8->fragment_size > (VAR_8->buffsize / 2))
   VAR_8->fragment_size = (VAR_8->buffsize / 2);
  VAR_16 = VAR_8->fragment_size;
 }

 if (VAR_6[VAR_7]->min_fragment)
  if (VAR_16 < (1 << VAR_6[VAR_7]->min_fragment))
   VAR_16 = 1 << VAR_6[VAR_7]->min_fragment;
 if (VAR_6[VAR_7]->max_fragment)
  if (VAR_16 > (1 << VAR_6[VAR_7]->max_fragment))
   VAR_16 = 1 << VAR_6[VAR_7]->max_fragment;
 VAR_16 &= ~0x07;




 VAR_12 = VAR_8->buffsize / VAR_16;
 if (VAR_12 > VAR_3)
  VAR_12 = VAR_3;
 if (VAR_12 > VAR_8->max_fragments)
  VAR_12 = VAR_8->max_fragments;

 if (VAR_12 < 2)
 {
  VAR_12 = 2;
  VAR_16 /= 2;
 }
 VAR_8->nbufs = VAR_12;
 VAR_8->bytes_in_use = VAR_12 * VAR_16;
 VAR_8->fragment_size = VAR_16;
 VAR_8->max_byte_counter = (VAR_8->data_rate * 60 * 60) +
   VAR_8->bytes_in_use;

 if (VAR_8->raw_buf)
 {
  FUNC_1(VAR_8->raw_buf, VAR_8->neutral_byte, VAR_8->bytes_in_use);
 }

 for (VAR_11 = 0; VAR_11 < VAR_8->nbufs; VAR_11++)
 {
  VAR_8->counts[VAR_11] = 0;
 }

 VAR_8->flags |= VAR_0 | VAR_1;
}
