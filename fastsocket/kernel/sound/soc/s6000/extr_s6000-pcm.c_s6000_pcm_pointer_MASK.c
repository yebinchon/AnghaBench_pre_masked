
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {unsigned int buffer_size; scalar_t__ dma_addr; struct s6000_runtime_data* private_data; } ;
struct s6000_runtime_data {int lock; } ;
struct s6000_pcm_dma_params {int dma_in; int dma_out; } ;
typedef unsigned int snd_pcm_uframes_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {TYPE_1__* cpu_dai; } ;
struct TYPE_3__ {struct s6000_pcm_dma_params* dma_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_2 (struct snd_pcm_runtime*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_8(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct s6000_pcm_dma_params *VAR_3 = VAR_2->dai->cpu_dai->dma_data;
 struct snd_pcm_runtime *VAR_4 = VAR_1->runtime;
 struct s6000_runtime_data *VAR_5 = VAR_4->private_data;
 unsigned long VAR_6;
 unsigned int VAR_7;
 dma_addr_t VAR_8;

 FUNC_5(&VAR_5->lock, VAR_6);

 if (VAR_1->stream == VAR_0)
  VAR_8 = FUNC_4(FUNC_1(VAR_3->dma_out),
           FUNC_0(VAR_3->dma_out));
 else
  VAR_8 = FUNC_3(FUNC_1(VAR_3->dma_in),
           FUNC_0(VAR_3->dma_in));

 VAR_8 -= VAR_4->dma_addr;

 FUNC_6(&VAR_5->lock, VAR_6);

 VAR_7 = FUNC_2(VAR_4, VAR_8);
 if (FUNC_7(VAR_7 >= VAR_4->buffer_size))
  VAR_7 = 0;

 return VAR_7;
}
