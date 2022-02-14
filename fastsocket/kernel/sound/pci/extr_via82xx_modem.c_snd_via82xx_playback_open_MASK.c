
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viadev {int dummy; } ;
struct via82xx_modem {size_t playback_devno; struct viadev* devs; } ;
struct snd_pcm_substream {size_t number; } ;


 struct via82xx_modem* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct via82xx_modem*,struct viadev*,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct via82xx_modem *VAR_1 = FUNC_0(VAR_0);
 struct viadev *VAR_2 = &VAR_1->devs[VAR_1->playback_devno + VAR_0->number];

 return FUNC_1(VAR_1, VAR_2, VAR_0);
}
