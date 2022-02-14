
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int periods; scalar_t__ dma_addr; struct davinci_runtime_data* private_data; } ;
struct davinci_runtime_data {int slave_lch; unsigned int period; TYPE_1__* params; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {unsigned int data_type; unsigned short acnt; scalar_t__ dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,scalar_t__,int ,int ) ;
 int FUNC_1 (int,unsigned short,int ) ;
 int FUNC_2 (int,scalar_t__,int ,int ) ;
 int FUNC_3 (int,unsigned short,int ) ;
 int FUNC_4 (int,unsigned short,unsigned int,int,int ,int ) ;
 int FUNC_5 (char*,int,scalar_t__,unsigned int) ;
 unsigned int FUNC_6 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct snd_pcm_substream *VAR_4)
{
 struct davinci_runtime_data *VAR_5 = VAR_4->runtime->private_data;
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 int VAR_7 = VAR_5->slave_lch;
 unsigned int VAR_8;
 unsigned int VAR_9;
 dma_addr_t VAR_10;
 dma_addr_t VAR_11, VAR_12;
 unsigned short VAR_13, VAR_14;
 unsigned int VAR_15;
 unsigned short VAR_16;
 unsigned int VAR_17;

 VAR_8 = FUNC_6(VAR_4);
 VAR_9 = VAR_5->period * VAR_8;
 VAR_10 = VAR_6->dma_addr + VAR_9;

 FUNC_5("davinci_pcm: audio_set_dma_params_play channel = %d "
  "dma_ptr = %x period_size=%x\n", VAR_7, VAR_10, VAR_8);

 VAR_15 = VAR_5->params->data_type;
 VAR_17 = VAR_8 / VAR_15;

 if (VAR_4->stream == VAR_2) {
  VAR_11 = VAR_10;
  VAR_12 = VAR_5->params->dma_addr;
  VAR_13 = VAR_15;
  VAR_14 = 0;
 } else {
  VAR_11 = VAR_5->params->dma_addr;
  VAR_12 = VAR_10;
  VAR_13 = 0;
  VAR_14 = VAR_15;
 }

 VAR_16 = VAR_5->params->acnt;
 FUNC_2(VAR_7, VAR_11, VAR_1, VAR_3);
 FUNC_0(VAR_7, VAR_12, VAR_1, VAR_3);
 FUNC_3(VAR_7, VAR_13, 0);
 FUNC_1(VAR_7, VAR_14, 0);
 FUNC_4(VAR_7, VAR_16, VAR_17, 1, 0, VAR_0);

 VAR_5->period++;
 if (FUNC_7(VAR_5->period >= VAR_6->periods))
  VAR_5->period = 0;
}
