
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_1__* status; } ;
struct TYPE_2__ {int state; } ;


 void* VAR_0 ;


 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct snd_pcm_runtime*) ;
 int FUNC_1 (struct snd_pcm_substream*,void*) ;
 int FUNC_2 (struct snd_pcm_substream*,int) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*,void*) ;
 int FUNC_5 (struct snd_pcm_substream*,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_3, int VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 if (VAR_3->stream == VAR_2) {
  switch (VAR_5->status->state) {
  case 129:

   if (! FUNC_3(VAR_3)) {
    FUNC_1(VAR_3, VAR_0);
    FUNC_4(VAR_3, VAR_0);
   }
   break;
  case 128:
   VAR_5->status->state = VAR_0;
   break;
  default:
   break;
  }
 } else {

  if (VAR_5->status->state == 128) {
   int VAR_6 = FUNC_0(VAR_5) > 0 ?
    VAR_0 : VAR_1;
   FUNC_2(VAR_3, VAR_6);
   FUNC_5(VAR_3, VAR_6);
  }
 }
 return 0;
}
