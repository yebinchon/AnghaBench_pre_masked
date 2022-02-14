
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int active; int private_data; } ;
struct snd_pcm_substream {scalar_t__ stream; int runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct omap_mcbsp_data {int bus_id; } ;
struct TYPE_2__ {struct snd_soc_dai* cpu_dai; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int,int) ;
 struct omap_mcbsp_data* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_5,
      struct snd_soc_dai *VAR_6)
{
 struct snd_soc_pcm_runtime *VAR_7 = VAR_5->private_data;
 struct snd_soc_dai *VAR_8 = VAR_7->dai->cpu_dai;
 struct omap_mcbsp_data *VAR_9 = FUNC_6(VAR_8->private_data);
 int VAR_10 = VAR_9->bus_id;
 int VAR_11 = 0;

 if (!VAR_8->active)
  VAR_11 = FUNC_4(VAR_10);

 if (FUNC_0()) {
  int VAR_12 = FUNC_1(VAR_10);
  int VAR_13;







  if (VAR_10 == 1)
   FUNC_5(VAR_5->runtime,
     VAR_1,
     4096, VAR_4);

  if (VAR_5->stream == VAR_3)
   VAR_13 = FUNC_3(VAR_10);
  else
   VAR_13 = FUNC_2(VAR_10);

  VAR_13++;
  VAR_13 <<= 1;

  if (VAR_12 == VAR_0)
   FUNC_5(VAR_5->runtime,
      VAR_2,
      32, VAR_13);
 }

 return VAR_11;
}
