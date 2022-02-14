
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; int private_free; struct emu10k1x_pcm* private_data; } ;
struct emu10k1x_pcm {struct snd_pcm_substream* substream; struct emu10k1x* emu; } ;
struct emu10k1x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct emu10k1x_pcm* FUNC_0 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ,int) ;
 struct emu10k1x* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_6)
{
 struct emu10k1x *VAR_7 = FUNC_3(VAR_6);
 struct emu10k1x_pcm *VAR_8;
 struct snd_pcm_runtime *VAR_9 = VAR_6->runtime;
 int VAR_10;

 if ((VAR_10 = FUNC_1(VAR_9, VAR_2)) < 0)
                return VAR_10;
 if ((VAR_10 = FUNC_2(VAR_9, 0, VAR_3, 64)) < 0)
                return VAR_10;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_8->emu = VAR_7;
 VAR_8->substream = VAR_6;

 VAR_9->private_data = VAR_8;
 VAR_9->private_free = VAR_5;

 VAR_9->hw = VAR_4;

 return 0;
}
