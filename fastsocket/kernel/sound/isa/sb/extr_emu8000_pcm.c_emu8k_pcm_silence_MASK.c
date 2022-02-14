
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_emu8k_pcm {int voices; scalar_t__* loop_start; struct snd_emu8000* emu; } ;
struct snd_emu8000 {int dummy; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
struct TYPE_2__ {struct snd_emu8k_pcm* private_data; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct snd_emu8000*,scalar_t__) ;
 int FUNC_2 (struct snd_emu8000*,scalar_t__) ;
 int FUNC_3 (struct snd_emu8000*,int ) ;
 int FUNC_4 (struct snd_emu8000*,int ) ;
 int FUNC_5 (struct snd_emu8000*,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_0,
        int VAR_1,
        snd_pcm_uframes_t VAR_2,
        snd_pcm_uframes_t VAR_3)
{
 struct snd_emu8k_pcm *VAR_4 = VAR_0->runtime->private_data;
 struct snd_emu8000 *VAR_5 = VAR_4->emu;

 FUNC_5(VAR_5, 1);
 FUNC_1(VAR_5, VAR_4->loop_start[0] + VAR_2);
 if (VAR_4->voices > 1)
  FUNC_2(VAR_5, VAR_4->loop_start[1] + VAR_2);
 while (VAR_3-- > 0) {
  FUNC_0();
  FUNC_3(VAR_5, 0);
  if (VAR_4->voices > 1) {
   FUNC_0();
   FUNC_4(VAR_5, 0);
  }
 }
 return 0;
}
