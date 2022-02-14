
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_ca0106_pcm* private_data; } ;
struct snd_ca0106_pcm {int channel_id; int running; } ;
struct snd_ca0106 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct snd_ca0106*,int ,int ) ;
 int FUNC_1 (struct snd_ca0106*,int ,int ,int) ;
 struct snd_ca0106* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3,
        int VAR_4)
{
 struct snd_ca0106 *VAR_5 = FUNC_2(VAR_3);
 struct snd_pcm_runtime *VAR_6 = VAR_3->runtime;
 struct snd_ca0106_pcm *VAR_7 = VAR_6->private_data;
 int VAR_8 = VAR_7->channel_id;
 int VAR_9 = 0;

 switch (VAR_4) {
 case 129:
  FUNC_1(VAR_5, VAR_2, 0, FUNC_0(VAR_5, VAR_2, 0) | (0x110000<<VAR_8));
  FUNC_1(VAR_5, VAR_0, 0, FUNC_0(VAR_5, VAR_0, 0)|(0x100<<VAR_8));
  VAR_7->running = 1;
  break;
 case 128:
  FUNC_1(VAR_5, VAR_0, 0, FUNC_0(VAR_5, VAR_0, 0) & ~(0x100<<VAR_8));
  FUNC_1(VAR_5, VAR_2, 0, FUNC_0(VAR_5, VAR_2, 0) & ~(0x110000<<VAR_8));
  VAR_7->running = 0;
  break;
 default:
  VAR_9 = -VAR_1;
  break;
 }
 return VAR_9;
}
