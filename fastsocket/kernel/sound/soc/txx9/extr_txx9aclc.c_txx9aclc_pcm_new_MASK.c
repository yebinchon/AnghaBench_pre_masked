
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm {int dummy; } ;
struct snd_card {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_card *VAR_1, struct snd_soc_dai *VAR_2,
       struct snd_pcm *VAR_3)
{
 return FUNC_0(VAR_3, VAR_0,
  VAR_1->dev, 64 * 1024, 4 * 1024 * 1024);
}
