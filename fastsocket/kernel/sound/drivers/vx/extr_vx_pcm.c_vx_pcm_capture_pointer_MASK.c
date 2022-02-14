
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_pipe {int hw_ptr; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct vx_pipe* private_data; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (struct snd_pcm_runtime*,int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct vx_pipe *VAR_2 = VAR_1->private_data;
 return FUNC_0(VAR_1, VAR_2->hw_ptr);
}
