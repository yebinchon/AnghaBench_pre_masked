
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct davinci_runtime_data* private_data; } ;
struct davinci_runtime_data {int master_lch; int slave_lch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct davinci_runtime_data*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct davinci_runtime_data *VAR_2 = VAR_1->private_data;

 FUNC_2(VAR_2->slave_lch);

 FUNC_1(VAR_2->slave_lch);
 FUNC_0(VAR_2->master_lch);

 FUNC_3(VAR_2);

 return 0;
}
