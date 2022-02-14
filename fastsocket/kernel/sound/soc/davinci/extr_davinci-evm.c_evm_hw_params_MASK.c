
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct snd_soc_dai*,int ) ;
 int FUNC_6 (struct snd_soc_dai*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_3,
    struct snd_pcm_hw_params *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_3->private_data;
 struct snd_soc_dai *VAR_6 = VAR_5->dai->codec_dai;
 struct snd_soc_dai *VAR_7 = VAR_5->dai->cpu_dai;
 int VAR_8 = 0;
 unsigned VAR_9;


 if (FUNC_2() || FUNC_3())
  VAR_9 = 27000000;





 else if (FUNC_4())
  VAR_9 = 12288000;

 else if (FUNC_0() ||
    FUNC_1())
  VAR_9 = 24576000;

 else
  return -VAR_1;


 VAR_8 = FUNC_5(VAR_6, VAR_0);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = FUNC_5(VAR_7, VAR_0);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = FUNC_6(VAR_6, 0, VAR_9, VAR_2);
 if (VAR_8 < 0)
  return VAR_8;

 return 0;
}
