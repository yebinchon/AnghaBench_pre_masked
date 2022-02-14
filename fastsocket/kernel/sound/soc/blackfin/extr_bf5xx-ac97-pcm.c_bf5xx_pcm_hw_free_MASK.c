
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sport_device {scalar_t__ rx_dma_buf; scalar_t__ tx_dma_buf; scalar_t__ once; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int buffer_size; scalar_t__ dma_area; struct sport_device* private_data; } ;
struct ac97_frame {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 FUNC_1(VAR_1);
 return 0;
}
