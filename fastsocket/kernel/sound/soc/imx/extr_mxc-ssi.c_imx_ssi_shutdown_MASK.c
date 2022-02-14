
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {scalar_t__ id; int active; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_2__ {struct snd_soc_dai* cpu_dai; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_9,
   struct snd_soc_dai *VAR_10)
{
 struct snd_soc_pcm_runtime *VAR_11 = VAR_9->private_data;
 struct snd_soc_dai *VAR_12 = VAR_11->dai->cpu_dai;


 if (!VAR_12->active) {

  if (VAR_12->id == VAR_0 ||
   VAR_12->id == VAR_1) {

   if (--VAR_6[VAR_2] > 1)
    return;

   VAR_3 = 0;
   FUNC_0(VAR_7);
  } else {
   if (--VAR_6[VAR_4])
    return;
   VAR_5 = 0;
   FUNC_0(VAR_8);
  }
 }
}
