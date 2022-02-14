
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {struct s6000_runtime_data* private_data; } ;
struct s6000_runtime_data {int lock; } ;
struct s6000_pcm_dma_params {int rate; int lock; scalar_t__ same_rate; } ;
struct TYPE_4__ {TYPE_1__* cpu_dai; } ;
struct TYPE_3__ {struct s6000_pcm_dma_params* dma_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct s6000_runtime_data* FUNC_0 (int,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_4 (struct snd_pcm_substream*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_7)
{
 struct snd_soc_pcm_runtime *VAR_8 = VAR_7->private_data;
 struct s6000_pcm_dma_params *VAR_9 = VAR_8->dai->cpu_dai->dma_data;
 struct snd_pcm_runtime *VAR_10 = VAR_7->runtime;
 struct s6000_runtime_data *VAR_11;
 int VAR_12;

 FUNC_4(VAR_7, &VAR_6);

 VAR_12 = FUNC_3(VAR_10, 0,
      VAR_4, 16);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_12 = FUNC_3(VAR_10, 0,
      VAR_2, 16);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_12 = FUNC_1(VAR_10,
         VAR_3);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_9->same_rate) {
  int VAR_13;
  FUNC_5(&VAR_9->lock);
  VAR_13 = VAR_9->rate;
  FUNC_7(&VAR_9->lock);
  if (VAR_13 != -1) {
   VAR_12 = FUNC_2(VAR_10,
       VAR_5,
       VAR_13, VAR_13);
   if (VAR_12 < 0)
    return VAR_12;
  }
 }

 VAR_11 = FUNC_0(sizeof(struct s6000_runtime_data), VAR_1);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 FUNC_6(&VAR_11->lock);

 VAR_10->private_data = VAR_11;

 return 0;
}
