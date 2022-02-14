
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viadev {int dummy; } ;
struct via82xx_modem {int ac97; int pci; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {struct viadev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct viadev*,struct snd_pcm_substream*,int ,int ,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct snd_pcm_substream*,int ) ;
 struct via82xx_modem* FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_2,
     struct snd_pcm_hw_params *VAR_3)
{
 struct via82xx_modem *VAR_4 = FUNC_7(VAR_2);
 struct viadev *VAR_5 = VAR_2->runtime->private_data;
 int VAR_6;

 VAR_6 = FUNC_6(VAR_2, FUNC_1(VAR_3));
 if (VAR_6 < 0)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_4->pci,
         FUNC_3(VAR_3),
         FUNC_2(VAR_3));
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_5(VAR_4->ac97, VAR_1, FUNC_4(VAR_3));
 FUNC_5(VAR_4->ac97, VAR_0, 0);

 return 0;
}
