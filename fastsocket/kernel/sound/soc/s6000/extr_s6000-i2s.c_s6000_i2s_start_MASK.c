
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct s6000_i2s_dev {int channel_out; int channel_in; } ;
struct TYPE_4__ {TYPE_1__* cpu_dai; } ;
struct TYPE_3__ {struct s6000_i2s_dev* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct s6000_i2s_dev*,int) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct s6000_i2s_dev *VAR_3 = VAR_2->dai->cpu_dai->private_data;
 int VAR_4;

 VAR_4 = (VAR_1->stream == VAR_0) ?
   VAR_3->channel_out : VAR_3->channel_in;

 FUNC_0(VAR_3, VAR_4);
}
