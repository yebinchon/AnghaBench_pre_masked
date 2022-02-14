
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int use_count; int active_sensing; scalar_t__ append; struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {int buffer_size; char* buffer; int avail; int avail_min; } ;
struct snd_rawmidi_params {int buffer_size; int avail_min; int no_active_sensing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_rawmidi_substream*) ;

int FUNC_3(struct snd_rawmidi_substream *VAR_4,
         struct snd_rawmidi_params * VAR_5)
{
 char *VAR_6;
 struct snd_rawmidi_runtime *VAR_7 = VAR_4->runtime;

 if (VAR_4->append && VAR_4->use_count > 1)
  return -VAR_0;
 FUNC_2(VAR_4);
 if (VAR_5->buffer_size < 32 || VAR_5->buffer_size > 1024L * 1024L) {
  return -VAR_1;
 }
 if (VAR_5->avail_min < 1 || VAR_5->avail_min > VAR_5->buffer_size) {
  return -VAR_1;
 }
 if (VAR_5->buffer_size != VAR_7->buffer_size) {
  VAR_6 = FUNC_1(VAR_5->buffer_size, VAR_3);
  if (!VAR_6)
   return -VAR_2;
  FUNC_0(VAR_7->buffer);
  VAR_7->buffer = VAR_6;
  VAR_7->buffer_size = VAR_5->buffer_size;
  VAR_7->avail = VAR_7->buffer_size;
 }
 VAR_7->avail_min = VAR_5->avail_min;
 VAR_4->active_sensing = !VAR_5->no_active_sensing;
 return 0;
}
