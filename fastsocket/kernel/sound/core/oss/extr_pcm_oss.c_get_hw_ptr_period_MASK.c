
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int hw_ptr_interrupt; } ;
typedef int snd_pcm_uframes_t ;



__attribute__((used)) static inline
snd_pcm_uframes_t FUNC_0(struct snd_pcm_runtime *VAR_0)
{
 return VAR_0->hw_ptr_interrupt;
}
