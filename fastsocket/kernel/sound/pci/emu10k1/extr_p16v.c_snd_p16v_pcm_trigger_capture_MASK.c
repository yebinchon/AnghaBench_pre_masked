
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm {int running; } ;
struct snd_emu10k1 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct snd_emu10k1*,int ,int ) ;
 int FUNC_1 (struct snd_emu10k1*,int ,int ,int) ;
 int FUNC_2 (struct snd_emu10k1*,int) ;
 int FUNC_3 (struct snd_emu10k1*,int) ;
 struct snd_emu10k1* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4,
                                   int VAR_5)
{
 struct snd_emu10k1 *VAR_6 = FUNC_4(VAR_4);
 struct snd_pcm_runtime *VAR_7 = VAR_4->runtime;
 struct snd_emu10k1_pcm *VAR_8 = VAR_7->private_data;
 int VAR_9 = 0;
 int VAR_10 = 0;
 u32 VAR_11 = VAR_3 | VAR_2;

 switch (VAR_5) {
 case 129:
  FUNC_3(VAR_6, VAR_11);
  FUNC_1(VAR_6, VAR_0, 0, FUNC_0(VAR_6, VAR_0, 0)|(0x100<<VAR_9));
  VAR_8->running = 1;
  break;
 case 128:
  FUNC_1(VAR_6, VAR_0, 0, FUNC_0(VAR_6, VAR_0, 0) & ~(0x100<<VAR_9));
  FUNC_2(VAR_6, VAR_11);

  VAR_8->running = 0;
  break;
 default:
  VAR_10 = -VAR_1;
  break;
 }
 return VAR_10;
}
