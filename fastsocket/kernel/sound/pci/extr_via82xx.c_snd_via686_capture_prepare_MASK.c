
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viadev {int dummy; } ;
struct via82xx {int ac97; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; struct viadev* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct via82xx* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct via82xx*,struct viadev*,struct snd_pcm_runtime*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct via82xx *VAR_2 = FUNC_1(VAR_1);
 struct viadev *VAR_3 = VAR_1->runtime->private_data;
 struct snd_pcm_runtime *VAR_4 = VAR_1->runtime;

 FUNC_0(VAR_2->ac97, VAR_0, VAR_4->rate);
 FUNC_2(VAR_2, VAR_3, VAR_4);
 return 0;
}
