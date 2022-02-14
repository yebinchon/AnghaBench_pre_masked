
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {struct snd_soc_dai* cpu_dai; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct snd_soc_dai*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2,
       struct snd_pcm_hw_params *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct snd_soc_dai *VAR_5 = VAR_4->dai->cpu_dai;
 int VAR_6;
 int VAR_7 = 0;


 VAR_6 = FUNC_0(VAR_3);



 if (VAR_6 != 44100) {
  FUNC_1("warning: only 44.1 kHz is supported without SFFSDR FPGA module\n");
  return -VAR_1;
 }



 VAR_7 = FUNC_3(VAR_5, VAR_0);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_1("sffsdr_hw_params: rate = %d Hz\n", VAR_6);


 return 0;



}
