
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {int buffer_size; char* buffer; int avail_min; } ;
struct snd_rawmidi_params {int buffer_size; int avail_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_rawmidi_substream*) ;

int FUNC_3(struct snd_rawmidi_substream *VAR_3,
        struct snd_rawmidi_params * VAR_4)
{
 char *VAR_5;
 struct snd_rawmidi_runtime *VAR_6 = VAR_3->runtime;

 FUNC_2(VAR_3);
 if (VAR_4->buffer_size < 32 || VAR_4->buffer_size > 1024L * 1024L) {
  return -VAR_0;
 }
 if (VAR_4->avail_min < 1 || VAR_4->avail_min > VAR_4->buffer_size) {
  return -VAR_0;
 }
 if (VAR_4->buffer_size != VAR_6->buffer_size) {
  VAR_5 = FUNC_1(VAR_4->buffer_size, VAR_2);
  if (!VAR_5)
   return -VAR_1;
  FUNC_0(VAR_6->buffer);
  VAR_6->buffer = VAR_5;
  VAR_6->buffer_size = VAR_4->buffer_size;
 }
 VAR_6->avail_min = VAR_4->avail_min;
 return 0;
}
