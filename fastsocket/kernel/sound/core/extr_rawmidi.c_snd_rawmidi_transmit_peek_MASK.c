
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {unsigned char* buffer; int avail; int buffer_size; size_t hw_ptr; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct snd_rawmidi_substream *VAR_1,
         unsigned char *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 int VAR_5, VAR_6;
 struct snd_rawmidi_runtime *VAR_7 = VAR_1->runtime;

 if (VAR_7->buffer == ((void*)0)) {
  FUNC_1("snd_rawmidi_transmit_peek: output is not active!!!\n");
  return -VAR_0;
 }
 VAR_5 = 0;
 FUNC_2(&VAR_7->lock, VAR_4);
 if (VAR_7->avail >= VAR_7->buffer_size) {

  goto __skip;
 }
 if (VAR_3 == 1) {
  *VAR_2 = VAR_7->buffer[VAR_7->hw_ptr];
  VAR_5++;
 } else {
  VAR_6 = VAR_7->buffer_size - VAR_7->hw_ptr;
  if (VAR_6 > VAR_3)
   VAR_6 = VAR_3;
  if (VAR_6 > (int)(VAR_7->buffer_size - VAR_7->avail))
   VAR_6 = VAR_7->buffer_size - VAR_7->avail;
  FUNC_0(VAR_2, VAR_7->buffer + VAR_7->hw_ptr, VAR_6);
  VAR_3 -= VAR_6;
  VAR_5 += VAR_6;
  if (VAR_3 > 0) {
   if (VAR_3 > (int)(VAR_7->buffer_size - VAR_7->avail - VAR_6))
    VAR_3 = VAR_7->buffer_size - VAR_7->avail - VAR_6;
   FUNC_0(VAR_2 + VAR_6, VAR_7->buffer, VAR_3);
   VAR_5 += VAR_3;
  }
 }
      __skip:
 FUNC_3(&VAR_7->lock, VAR_4);
 return VAR_5;
}
