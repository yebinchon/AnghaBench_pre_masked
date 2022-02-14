
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct sis7019 {int * ac97; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct snd_pcm_substream*,int ) ;
 struct sis7019* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_1,
     struct snd_pcm_hw_params *VAR_2)
{
 struct sis7019 *VAR_3 = FUNC_5(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_3->ac97[0], VAR_0,
      FUNC_1(VAR_2));
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_4(VAR_1,
     FUNC_0(VAR_2));
 if (VAR_4 < 0)
  goto out;

 VAR_4 = FUNC_2(VAR_1, VAR_2);

out:
 return VAR_4;
}
