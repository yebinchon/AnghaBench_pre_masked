
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct mx1_mx2_runtime_data* private_data; } ;
struct mx1_mx2_runtime_data {scalar_t__ periods; scalar_t__ period; } ;



__attribute__((used)) static int
FUNC_0(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct mx1_mx2_runtime_data *VAR_2 = VAR_1->private_data;

 VAR_2->period = 0;
 VAR_2->periods = 0;

 return 0;
}
