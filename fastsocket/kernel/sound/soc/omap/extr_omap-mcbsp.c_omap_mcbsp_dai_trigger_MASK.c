
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int private_data; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct omap_mcbsp_data {int active; int bus_id; } ;
struct TYPE_2__ {struct snd_soc_dai* cpu_dai; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;






 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 struct omap_mcbsp_data* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2, int VAR_3,
      struct snd_soc_dai *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_2->private_data;
 struct snd_soc_dai *VAR_6 = VAR_5->dai->cpu_dai;
 struct omap_mcbsp_data *VAR_7 = FUNC_2(VAR_6->private_data);
 int VAR_8 = 0, VAR_9 = (VAR_2->stream == VAR_1);

 switch (VAR_3) {
 case 130:
 case 131:
 case 132:
  VAR_7->active++;
  FUNC_0(VAR_7->bus_id, VAR_9, !VAR_9);
  break;

 case 129:
 case 128:
 case 133:
  FUNC_1(VAR_7->bus_id, VAR_9, !VAR_9);
  VAR_7->active--;
  break;
 default:
  VAR_8 = -VAR_0;
 }

 return VAR_8;
}
