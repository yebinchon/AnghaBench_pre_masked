
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_3__* ops; } ;
struct TYPE_4__ {int hw_data; int hw_io; } ;
struct TYPE_5__ {TYPE_1__ pcm_indirect; int buffer_dma; } ;
struct snd_hal2 {TYPE_2__ dac; } ;
struct TYPE_6__ {int (* ack ) (struct snd_pcm_substream*) ;} ;


 int VAR_0 ;


 int FUNC_0 (struct snd_hal2*) ;
 int FUNC_1 (struct snd_hal2*) ;
 struct snd_hal2* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_hal2 *VAR_3 = FUNC_2(VAR_1);

 switch (VAR_2) {
 case 129:
  VAR_3->dac.pcm_indirect.hw_io = VAR_3->dac.buffer_dma;
  VAR_3->dac.pcm_indirect.hw_data = 0;
  VAR_1->ops->ack(VAR_1);
  FUNC_0(VAR_3);
  break;
 case 128:
  FUNC_1(VAR_3);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
