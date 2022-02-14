
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int adc_i2s_format; int (* set_adc_params ) (struct oxygen*,struct snd_pcm_hw_params*) ;} ;
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
 int FUNC_0 (struct oxygen*,int ,struct snd_pcm_hw_params*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct oxygen*,int ,int,int) ;
 int FUNC_8 (struct oxygen*,int ,int,int ) ;
 struct oxygen* FUNC_9 (struct snd_pcm_substream*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct oxygen*,struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_9,
      struct snd_pcm_hw_params *VAR_10)
{
 struct oxygen *VAR_11 = FUNC_9(VAR_9);
 int VAR_12;

 VAR_12 = FUNC_4(VAR_9, VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_10(&VAR_11->reg_lock);
 FUNC_8(VAR_11, VAR_5,
        FUNC_3(VAR_10) << VAR_7,
        VAR_6);
 FUNC_7(VAR_11, VAR_0,
         FUNC_6(VAR_10) |
         VAR_11->model.adc_i2s_format |
         FUNC_0(VAR_11, VAR_8, VAR_10) |
         FUNC_5(VAR_10),
         VAR_4 |
         VAR_2 |
         VAR_3 |
         VAR_1);
 FUNC_11(&VAR_11->reg_lock);

 FUNC_1(&VAR_11->mutex);
 VAR_11->model.set_adc_params(VAR_11, VAR_10);
 FUNC_2(&VAR_11->mutex);
 return 0;
}
