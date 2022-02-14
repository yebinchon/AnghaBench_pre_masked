
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int periods; int dma_addr; struct omap_runtime_data* private_data; } ;
struct omap_runtime_data {int dma_ch; struct omap_pcm_dma_data* dma_data; } ;
struct omap_pcm_dma_data {int port_addr; int sync_mode; int dma_req; } ;
struct omap_dma_channel_params {int elem_count; int frame_count; void* src_port; int dst_start; int src_start; int src_or_dst_synch; void* dst_amode; void* src_amode; void* dst_port; int sync_mode; int trigger; int data_type; } ;
typedef int dma_params ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct omap_dma_channel_params*,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct omap_dma_channel_params*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_11)
{
 struct snd_pcm_runtime *VAR_12 = VAR_11->runtime;
 struct omap_runtime_data *VAR_13 = VAR_12->private_data;
 struct omap_pcm_dma_data *VAR_14 = VAR_13->dma_data;
 struct omap_dma_channel_params VAR_15;



 if (!VAR_13->dma_data)
  return 0;

 FUNC_2(&VAR_15, 0, sizeof(VAR_15));




 VAR_15.data_type = VAR_4;
 VAR_15.trigger = VAR_14->dma_req;
 VAR_15.sync_mode = VAR_14->sync_mode;
 if (VAR_11->stream == VAR_10) {
  VAR_15.src_amode = VAR_1;
  VAR_15.dst_amode = VAR_0;
  VAR_15.src_or_dst_synch = VAR_5;
  VAR_15.src_start = VAR_12->dma_addr;
  VAR_15.dst_start = VAR_14->port_addr;
  VAR_15.dst_port = VAR_8;
 } else {
  VAR_15.src_amode = VAR_0;
  VAR_15.dst_amode = VAR_1;
  VAR_15.src_or_dst_synch = VAR_9;
  VAR_15.src_start = VAR_14->port_addr;
  VAR_15.dst_start = VAR_12->dma_addr;
  VAR_15.src_port = VAR_8;
 }






 VAR_15.elem_count = FUNC_7(VAR_11) / 2;
 VAR_15.frame_count = VAR_12->periods;
 FUNC_5(VAR_13->dma_ch, &VAR_15);

 if ((FUNC_1()) &&
   (VAR_11->stream == VAR_10))
  FUNC_3(VAR_13->dma_ch, VAR_6 |
         VAR_7 | VAR_2);
 else
  FUNC_3(VAR_13->dma_ch, VAR_6);

 if (!(FUNC_0())) {
  FUNC_6(VAR_13->dma_ch,
      VAR_3);
  FUNC_4(VAR_13->dma_ch,
      VAR_3);
 }

 return 0;
}
