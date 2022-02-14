
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct echoaudio {int* last_period; int midi_buffer; scalar_t__ midi_in; int lock; struct snd_pcm_substream** substream; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int period_size; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct echoaudio*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct echoaudio *VAR_5 = VAR_4;
 struct snd_pcm_substream *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 FUNC_5(&VAR_5->lock);
 VAR_9 = FUNC_2(VAR_5);
 if (VAR_9 < 0) {
  FUNC_6(&VAR_5->lock);
  return VAR_2;
 }


 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if ((VAR_6 = VAR_5->substream[VAR_8])) {
   VAR_7 = FUNC_1(VAR_6) /
    VAR_6->runtime->period_size;
   if (VAR_7 != VAR_5->last_period[VAR_8]) {
    VAR_5->last_period[VAR_8] = VAR_7;
    FUNC_6(&VAR_5->lock);
    FUNC_3(VAR_6);
    FUNC_5(&VAR_5->lock);
   }
  }
 }
 FUNC_6(&VAR_5->lock);







 return VAR_1;
}
