
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int * capture_pipes; int * playback_pipes; int ** pcm; } ;
struct snd_pcm {size_t device; struct vx_core* private_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm *VAR_0)
{
 struct vx_core *VAR_1 = VAR_0->private_data;
 VAR_1->pcm[VAR_0->device] = ((void*)0);
 FUNC_0(VAR_1->playback_pipes);
 VAR_1->playback_pipes = ((void*)0);
 FUNC_0(VAR_1->capture_pipes);
 VAR_1->capture_pipes = ((void*)0);
}
