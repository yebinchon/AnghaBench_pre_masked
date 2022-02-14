
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int dac_i2s_format; int (* set_dac_params ) (struct oxygen*,struct snd_pcm_hw_params*) ;} ;
struct oxygen {int mutex; TYPE_1__ model; int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct oxygen*,int ,struct snd_pcm_hw_params*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (struct oxygen*) ;
 int FUNC_9 (struct oxygen*) ;
 int FUNC_10 (struct oxygen*,int ,int,int) ;
 int FUNC_11 (struct oxygen*,int ,int,int ) ;
 struct oxygen* FUNC_12 (struct snd_pcm_substream*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct oxygen*,struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_16(struct snd_pcm_substream *VAR_11,
        struct snd_pcm_hw_params *VAR_12)
{
 struct oxygen *VAR_13 = FUNC_12(VAR_11);
 int VAR_14;

 VAR_14 = FUNC_4(VAR_11, VAR_12);
 if (VAR_14 < 0)
  return VAR_14;

 FUNC_1(&VAR_13->mutex);
 FUNC_13(&VAR_13->reg_lock);
 FUNC_11(VAR_13, VAR_7,
        FUNC_6(VAR_12),
        VAR_8);
 FUNC_11(VAR_13, VAR_9,
        FUNC_3(VAR_12) << VAR_6,
        VAR_5);
 FUNC_10(VAR_13, VAR_3,
         FUNC_7(VAR_12) |
         VAR_13->model.dac_i2s_format |
         FUNC_0(VAR_13, VAR_10, VAR_12) |
         FUNC_5(VAR_12),
         VAR_4 |
         VAR_1 |
         VAR_2 |
         VAR_0);
 FUNC_9(VAR_13);
 FUNC_14(&VAR_13->reg_lock);

 VAR_13->model.set_dac_params(VAR_13, VAR_12);
 FUNC_8(VAR_13);
 FUNC_2(&VAR_13->mutex);
 return 0;
}
