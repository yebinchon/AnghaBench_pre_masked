
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int runtime; } ;
struct azx_pcm {struct azx* chip; } ;
struct azx_dev {int dummy; } ;
struct azx {int dummy; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (struct azx*,struct azx_dev*,int) ;
 int FUNC_1 (int ,int ) ;
 struct azx_dev* FUNC_2 (struct snd_pcm_substream*) ;
 struct azx_pcm* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct azx_pcm *VAR_1 = FUNC_3(VAR_0);
 struct azx *VAR_2 = VAR_1->chip;
 struct azx_dev *VAR_3 = FUNC_2(VAR_0);
 return FUNC_1(VAR_0->runtime,
          FUNC_0(VAR_2, VAR_3, 0));
}
