
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; TYPE_3__* runtime; } ;
struct s6000_runtime_data {int lock; } ;
struct s6000_pcm_dma_params {int dma_in; int dma_out; } ;
struct TYPE_6__ {struct s6000_runtime_data* private_data; } ;
struct TYPE_5__ {TYPE_1__* cpu_dai; } ;
struct TYPE_4__ {struct s6000_pcm_dma_params* dma_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_1)
{
 struct s6000_runtime_data *VAR_2 = VAR_1->runtime->private_data;
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct s6000_pcm_dma_params *VAR_4 = VAR_3->dai->cpu_dai->dma_data;
 unsigned long VAR_5;
 u32 VAR_6;

 if (VAR_1->stream == VAR_0)
  VAR_6 = VAR_4->dma_out;
 else
  VAR_6 = VAR_4->dma_in;

 FUNC_3(FUNC_1(VAR_6),
      FUNC_0(VAR_6), 0);

 FUNC_4(&VAR_2->lock, VAR_5);

 FUNC_2(FUNC_1(VAR_6), FUNC_0(VAR_6));

 FUNC_5(&VAR_2->lock, VAR_5);

 return 0;
}
