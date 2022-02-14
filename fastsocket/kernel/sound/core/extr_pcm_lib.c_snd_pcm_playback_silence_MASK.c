
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_3__* ops; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int silence_size; int boundary; int silence_start; scalar_t__ silence_filled; scalar_t__ buffer_size; scalar_t__ silence_threshold; scalar_t__ access; char* dma_area; scalar_t__ channels; unsigned int dma_bytes; int format; TYPE_2__* status; TYPE_1__* control; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
typedef scalar_t__ snd_pcm_sframes_t ;
struct TYPE_6__ {int (* silence ) (struct snd_pcm_substream*,int,scalar_t__,scalar_t__) ;} ;
struct TYPE_5__ {int hw_ptr; } ;
struct TYPE_4__ {int appl_ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct snd_pcm_runtime*,scalar_t__) ;
 int FUNC_1 (struct snd_pcm_runtime*,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct snd_pcm_runtime*) ;
 int FUNC_5 (struct snd_pcm_substream*,int,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct snd_pcm_substream*,unsigned int,scalar_t__,scalar_t__) ;

void FUNC_7(struct snd_pcm_substream *VAR_3, snd_pcm_uframes_t VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 snd_pcm_uframes_t VAR_6, VAR_7, VAR_8;

 if (VAR_5->silence_size < VAR_5->boundary) {
  snd_pcm_sframes_t VAR_9, VAR_10;
  if (VAR_5->silence_start != VAR_5->control->appl_ptr) {
   VAR_10 = VAR_5->control->appl_ptr - VAR_5->silence_start;
   if (VAR_10 < 0)
    VAR_10 += VAR_5->boundary;
   if ((snd_pcm_uframes_t)VAR_10 < VAR_5->silence_filled)
    VAR_5->silence_filled -= VAR_10;
   else
    VAR_5->silence_filled = 0;
   VAR_5->silence_start = VAR_5->control->appl_ptr;
  }
  if (VAR_5->silence_filled >= VAR_5->buffer_size)
   return;
  VAR_9 = FUNC_4(VAR_5) + VAR_5->silence_filled;
  if (VAR_9 >= (snd_pcm_sframes_t) VAR_5->silence_threshold)
   return;
  VAR_6 = VAR_5->silence_threshold - VAR_9;
  if (VAR_6 > VAR_5->silence_size)
   VAR_6 = VAR_5->silence_size;
 } else {
  if (VAR_4 == VAR_2) {
   snd_pcm_sframes_t VAR_11 = FUNC_4(VAR_5);
   VAR_5->silence_filled = VAR_11 > 0 ? VAR_11 : 0;
   VAR_5->silence_start = (VAR_5->status->hw_ptr +
        VAR_5->silence_filled) %
       VAR_5->boundary;
  } else {
   VAR_7 = VAR_5->status->hw_ptr;
   VAR_6 = VAR_4 - VAR_7;
   if ((snd_pcm_sframes_t)VAR_6 < 0)
    VAR_6 += VAR_5->boundary;
   VAR_5->silence_filled -= VAR_6;
   if ((snd_pcm_sframes_t)VAR_5->silence_filled < 0) {
    VAR_5->silence_filled = 0;
    VAR_5->silence_start = VAR_4;
   } else {
    VAR_5->silence_start = VAR_7;
   }
  }
  VAR_6 = VAR_5->buffer_size - VAR_5->silence_filled;
 }
 if (FUNC_2(VAR_6 > VAR_5->buffer_size))
  return;
 if (VAR_6 == 0)
  return;
 VAR_7 = VAR_5->silence_start % VAR_5->buffer_size;
 while (VAR_6 > 0) {
  VAR_8 = VAR_7 + VAR_6 > VAR_5->buffer_size ? VAR_5->buffer_size - VAR_7 : VAR_6;
  if (VAR_5->access == VAR_1 ||
      VAR_5->access == VAR_0) {
   if (VAR_3->ops->silence) {
    int VAR_12;
    VAR_12 = VAR_3->ops->silence(VAR_3, -1, VAR_7, VAR_8);
    FUNC_2(VAR_12 < 0);
   } else {
    char *VAR_13 = VAR_5->dma_area + FUNC_0(VAR_5, VAR_7);
    FUNC_3(VAR_5->format, VAR_13, VAR_8 * VAR_5->channels);
   }
  } else {
   unsigned int VAR_14;
   unsigned int VAR_15 = VAR_5->channels;
   if (VAR_3->ops->silence) {
    for (VAR_14 = 0; VAR_14 < VAR_15; ++VAR_14) {
     int VAR_16;
     VAR_16 = VAR_3->ops->silence(VAR_3, VAR_14, VAR_7, VAR_8);
     FUNC_2(VAR_16 < 0);
    }
   } else {
    size_t VAR_17 = VAR_5->dma_bytes / VAR_15;
    for (VAR_14 = 0; VAR_14 < VAR_15; ++VAR_14) {
     char *VAR_18 = VAR_5->dma_area + (VAR_14 * VAR_17) + FUNC_1(VAR_5, VAR_7);
     FUNC_3(VAR_5->format, VAR_18, VAR_8);
    }
   }
  }
  VAR_5->silence_filled += VAR_8;
  VAR_6 -= VAR_8;
  VAR_7 = 0;
 }
}
