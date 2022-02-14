
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usX2Y_substream {struct snd_pcm_substream* pcm_substream; TYPE_1__* usX2Y; } ;
struct snd_pcm_substream {size_t stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_usX2Y_substream* private_data; int hw; } ;
struct TYPE_2__ {int chip_status; scalar_t__* subs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int,int) ;
 scalar_t__ FUNC_1 (struct snd_pcm_substream*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_6)
{
 struct snd_usX2Y_substream *VAR_7 = ((struct snd_usX2Y_substream **)
      FUNC_1(VAR_6))[VAR_6->stream];
 struct snd_pcm_runtime *VAR_8 = VAR_6->runtime;

 if (!(VAR_7->usX2Y->chip_status & VAR_3))
  return -VAR_0;

 VAR_8->hw = VAR_2 == VAR_6->stream ? VAR_4 :
  (VAR_7->usX2Y->subs[3] ? VAR_5 : VAR_4);
 VAR_8->private_data = VAR_7;
 VAR_7->pcm_substream = VAR_6;
 FUNC_0(VAR_8, VAR_1, 1000, 200000);
 return 0;
}
