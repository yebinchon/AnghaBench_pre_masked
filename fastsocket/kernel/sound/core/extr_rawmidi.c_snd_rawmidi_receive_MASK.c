
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {scalar_t__ bytes; int opened; struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {unsigned char* buffer; int avail; int buffer_size; int hw_ptr; int lock; int sleep; int tasklet; scalar_t__ event; scalar_t__ xruns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct snd_rawmidi_substream*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct snd_rawmidi_substream *VAR_2,
   const unsigned char *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = 0, VAR_7;
 struct snd_rawmidi_runtime *VAR_8 = VAR_2->runtime;

 if (!VAR_2->opened)
  return -VAR_0;
 if (VAR_8->buffer == ((void*)0)) {
  FUNC_1("snd_rawmidi_receive: input is not active!!!\n");
  return -VAR_1;
 }
 FUNC_3(&VAR_8->lock, VAR_5);
 if (VAR_4 == 1) {
  VAR_2->bytes++;
  if (VAR_8->avail < VAR_8->buffer_size) {
   VAR_8->buffer[VAR_8->hw_ptr++] = VAR_3[0];
   VAR_8->hw_ptr %= VAR_8->buffer_size;
   VAR_8->avail++;
   VAR_6++;
  } else {
   VAR_8->xruns++;
  }
 } else {
  VAR_2->bytes += VAR_4;
  VAR_7 = VAR_8->buffer_size - VAR_8->hw_ptr;
  if (VAR_7 > VAR_4)
   VAR_7 = VAR_4;
  if (VAR_7 > (int)(VAR_8->buffer_size - VAR_8->avail))
   VAR_7 = VAR_8->buffer_size - VAR_8->avail;
  FUNC_0(VAR_8->buffer + VAR_8->hw_ptr, VAR_3, VAR_7);
  VAR_8->hw_ptr += VAR_7;
  VAR_8->hw_ptr %= VAR_8->buffer_size;
  VAR_8->avail += VAR_7;
  VAR_4 -= VAR_7;
  VAR_6 += VAR_7;
  if (VAR_4 > 0) {
   VAR_3 += VAR_7;
   VAR_7 = VAR_4;
   if (VAR_7 > (int)(VAR_8->buffer_size - VAR_8->avail)) {
    VAR_7 = VAR_8->buffer_size - VAR_8->avail;
    VAR_8->xruns += VAR_4 - VAR_7;
   }
   if (VAR_7 > 0) {
    FUNC_0(VAR_8->buffer, VAR_3, VAR_7);
    VAR_8->hw_ptr = VAR_7;
    VAR_8->avail += VAR_7;
    VAR_6 += VAR_7;
   }
  }
 }
 if (VAR_6 > 0) {
  if (VAR_8->event)
   FUNC_5(&VAR_8->tasklet);
  else if (FUNC_2(VAR_2))
   FUNC_6(&VAR_8->sleep);
 }
 FUNC_4(&VAR_8->lock, VAR_5);
 return VAR_6;
}
