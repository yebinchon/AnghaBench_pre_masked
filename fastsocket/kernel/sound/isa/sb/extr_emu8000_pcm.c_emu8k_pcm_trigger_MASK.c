
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_emu8k_pcm {int voices; int running; } ;
struct TYPE_2__ {struct snd_emu8k_pcm* private_data; } ;


 int VAR_0 ;


 int FUNC_0 (struct snd_emu8k_pcm*,int) ;
 int FUNC_1 (struct snd_emu8k_pcm*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_emu8k_pcm *VAR_3 = VAR_1->runtime->private_data;
 int VAR_4;

 switch (VAR_2) {
 case 129:
  for (VAR_4 = 0; VAR_4 < VAR_3->voices; VAR_4++)
   FUNC_0(VAR_3, VAR_4);
  VAR_3->running = 1;
  break;
 case 128:
  VAR_3->running = 0;
  for (VAR_4 = 0; VAR_4 < VAR_3->voices; VAR_4++)
   FUNC_1(VAR_3, VAR_4);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
