
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct aaci_runtime* private_data; } ;
struct aaci_runtime {scalar_t__ start; scalar_t__ ptr; } ;
typedef scalar_t__ ssize_t ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (struct snd_pcm_runtime*,scalar_t__) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct aaci_runtime *VAR_2 = VAR_1->private_data;
 ssize_t VAR_3 = VAR_2->ptr - VAR_2->start;

 return FUNC_0(VAR_1, VAR_3);
}
