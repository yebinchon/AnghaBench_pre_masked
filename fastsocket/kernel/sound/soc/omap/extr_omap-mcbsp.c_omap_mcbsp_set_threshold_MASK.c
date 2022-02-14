
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int private_data; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct omap_mcbsp_data {int bus_id; } ;
struct TYPE_2__ {struct snd_soc_dai* cpu_dai; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 struct omap_mcbsp_data* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct snd_pcm_substream *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_2->private_data;
 struct snd_soc_dai *VAR_4 = VAR_3->dai->cpu_dai;
 struct omap_mcbsp_data *VAR_5 = FUNC_4(VAR_4->private_data);
 int VAR_6 = FUNC_0(VAR_5->bus_id);
 int VAR_7;


 if (VAR_6 == VAR_0)
  VAR_7 = FUNC_3(VAR_2) >> 1;
 else
  VAR_7 = 1;


 if (VAR_2->stream == VAR_1)
  FUNC_2(VAR_5->bus_id, VAR_7 - 1);
 else
  FUNC_1(VAR_5->bus_id, VAR_7 - 1);
}
