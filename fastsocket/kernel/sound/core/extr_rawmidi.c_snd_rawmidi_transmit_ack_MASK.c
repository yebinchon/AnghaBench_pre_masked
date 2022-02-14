
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int bytes; struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {int avail; int buffer_size; int hw_ptr; int lock; int sleep; scalar_t__ drain; int * buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct snd_rawmidi_substream*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct snd_rawmidi_substream *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 struct snd_rawmidi_runtime *VAR_4 = VAR_1->runtime;

 if (VAR_4->buffer == ((void*)0)) {
  FUNC_1("snd_rawmidi_transmit_ack: output is not active!!!\n");
  return -VAR_0;
 }
 FUNC_3(&VAR_4->lock, VAR_3);
 FUNC_0(VAR_4->avail + VAR_2 > VAR_4->buffer_size);
 VAR_4->hw_ptr += VAR_2;
 VAR_4->hw_ptr %= VAR_4->buffer_size;
 VAR_4->avail += VAR_2;
 VAR_1->bytes += VAR_2;
 if (VAR_2 > 0) {
  if (VAR_4->drain || FUNC_2(VAR_1))
   FUNC_5(&VAR_4->sleep);
 }
 FUNC_4(&VAR_4->lock, VAR_3);
 return VAR_2;
}
