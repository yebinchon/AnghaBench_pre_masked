
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct mx1_mx2_runtime_data* private_data; } ;
struct mx1_mx2_runtime_data {int dummy; } ;


 int FUNC_0 (struct mx1_mx2_runtime_data*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct mx1_mx2_runtime_data *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2);

 return 0;
}
