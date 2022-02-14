
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct oxygen {int mutex; int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*,int ,int ) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct oxygen*) ;
 int FUNC_7 (struct oxygen*,int ,int,int ) ;
 int FUNC_8 (struct oxygen*,int ,int,int ) ;
 struct oxygen* FUNC_9 (struct snd_pcm_substream*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct snd_pcm_substream *VAR_7,
      struct snd_pcm_hw_params *VAR_8)
{
 struct oxygen *VAR_9 = FUNC_9(VAR_7);
 int VAR_10;

 VAR_10 = FUNC_4(VAR_7, VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_0(&VAR_9->mutex);
 FUNC_10(&VAR_9->reg_lock);
 FUNC_2(VAR_9, VAR_1,
       VAR_4);
 FUNC_8(VAR_9, VAR_0,
        FUNC_3(VAR_8) << VAR_3,
        VAR_2);
 FUNC_7(VAR_9, VAR_1,
         FUNC_5(VAR_8) << VAR_6,
         VAR_5);
 FUNC_6(VAR_9);
 FUNC_11(&VAR_9->reg_lock);
 FUNC_1(&VAR_9->mutex);
 return 0;
}
