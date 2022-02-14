
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_pipe {int transferred; scalar_t__ running; } ;
struct vx_core {int chip_status; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct vx_core*,struct snd_pcm_runtime*,struct vx_pipe*) ;

__attribute__((used)) static void FUNC_2(struct vx_core *VAR_1,
       struct snd_pcm_substream *VAR_2,
       struct vx_pipe *VAR_3)
{
 int VAR_4;
 struct snd_pcm_runtime *VAR_5 = VAR_2->runtime;

 if (VAR_3->running && ! (VAR_1->chip_status & VAR_0)) {
  if ((VAR_4 = FUNC_1(VAR_1, VAR_5, VAR_3)) < 0)
   return;
  if (VAR_3->transferred >= (int)VAR_5->period_size) {
   VAR_3->transferred %= VAR_5->period_size;
   FUNC_0(VAR_2);
  }
 }
}
