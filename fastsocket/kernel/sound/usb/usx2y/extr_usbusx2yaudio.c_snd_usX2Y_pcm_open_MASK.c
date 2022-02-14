
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usX2Y_substream {struct snd_pcm_substream* pcm_substream; TYPE_1__* usX2Y; } ;
struct snd_pcm_substream {size_t stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_usX2Y_substream* private_data; int hw; } ;
struct TYPE_2__ {int chip_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int,int) ;
 scalar_t__ FUNC_1 (struct snd_pcm_substream*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_4)
{
 struct snd_usX2Y_substream *VAR_5 = ((struct snd_usX2Y_substream **)
      FUNC_1(VAR_4))[VAR_4->stream];
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;

 if (VAR_5->usX2Y->chip_status & VAR_2)
  return -VAR_0;

 VAR_6->hw = VAR_3;
 VAR_6->private_data = VAR_5;
 VAR_5->pcm_substream = VAR_4;
 FUNC_0(VAR_6, VAR_1, 1000, 200000);
 return 0;
}
