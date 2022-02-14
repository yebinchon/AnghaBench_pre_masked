
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int active; int private_data; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct omap_mcbsp_data {scalar_t__ configured; int bus_id; } ;
struct TYPE_2__ {struct snd_soc_dai* cpu_dai; } ;


 int FUNC_0 (int ) ;
 struct omap_mcbsp_data* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0,
        struct snd_soc_dai *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_0->private_data;
 struct snd_soc_dai *VAR_3 = VAR_2->dai->cpu_dai;
 struct omap_mcbsp_data *VAR_4 = FUNC_1(VAR_3->private_data);

 if (!VAR_3->active) {
  FUNC_0(VAR_4->bus_id);
  VAR_4->configured = 0;
 }
}
