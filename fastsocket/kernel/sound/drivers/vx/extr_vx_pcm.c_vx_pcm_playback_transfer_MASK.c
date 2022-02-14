
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vx_pipe {int prepared; } ;
struct TYPE_2__ {int size; } ;
struct vx_core {int chip_status; TYPE_1__ ibl; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vx_core*,struct snd_pcm_runtime*,struct vx_pipe*,int ) ;

__attribute__((used)) static void FUNC_1(struct vx_core *VAR_1,
         struct snd_pcm_substream *VAR_2,
         struct vx_pipe *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 struct snd_pcm_runtime *VAR_7 = VAR_2->runtime;

 if (! VAR_3->prepared || (VAR_1->chip_status & VAR_0))
  return;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if ((VAR_6 = FUNC_0(VAR_1, VAR_7, VAR_3,
         VAR_1->ibl.size)) < 0)
   return;
 }
}
