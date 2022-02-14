
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct edmacc_param {int dummy; } ;
struct davinci_runtime_data {int master_lch; int slave_lch; scalar_t__ period; } ;
struct TYPE_2__ {struct davinci_runtime_data* private_data; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int ,struct edmacc_param*) ;
 int FUNC_2 (int ,struct edmacc_param*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct davinci_runtime_data *VAR_1 = VAR_0->runtime->private_data;
 struct edmacc_param VAR_2;

 VAR_1->period = 0;
 FUNC_0(VAR_0);


 FUNC_1(VAR_1->slave_lch, &VAR_2);
 FUNC_2(VAR_1->master_lch, &VAR_2);
 FUNC_0(VAR_0);

 return 0;
}
