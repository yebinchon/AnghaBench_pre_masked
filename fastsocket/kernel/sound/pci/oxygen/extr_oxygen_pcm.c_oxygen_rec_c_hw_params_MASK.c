
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct oxygen {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct oxygen*,int ,int,int ) ;
 struct oxygen* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_3,
      struct snd_pcm_hw_params *VAR_4)
{
 struct oxygen *VAR_5 = FUNC_3(VAR_3);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_4(&VAR_5->reg_lock);
 FUNC_2(VAR_5, VAR_0,
        FUNC_0(VAR_4) << VAR_2,
        VAR_1);
 FUNC_5(&VAR_5->reg_lock);
 return 0;
}
