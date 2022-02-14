
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int rate_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; int private_free; struct ct_atc_pcm* private_data; } ;
struct ct_atc_pcm {int timer; int interrupt; struct snd_pcm_substream* substream; scalar_t__ started; } ;
struct ct_atc {int rsr; int msr; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 (int ,struct ct_atc_pcm*) ;
 int FUNC_1 (struct ct_atc_pcm*) ;
 struct ct_atc_pcm* FUNC_2 (int,int ) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int,int ) ;
 struct ct_atc* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_8)
{
 struct ct_atc *VAR_9 = FUNC_5(VAR_8);
 struct snd_pcm_runtime *VAR_10 = VAR_8->runtime;
 struct ct_atc_pcm *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->started = 0;
 VAR_11->substream = VAR_8;
 VAR_11->interrupt = VAR_6;
 VAR_10->private_data = VAR_11;
 VAR_10->private_free = VAR_5;
 VAR_10->hw = VAR_7;
 VAR_10->hw.rate_max = VAR_9->rsr * VAR_9->msr;

 VAR_12 = FUNC_3(VAR_10,
         VAR_3);
 if (VAR_12 < 0) {
  FUNC_1(VAR_11);
  return VAR_12;
 }
 VAR_12 = FUNC_4(VAR_10,
        VAR_2,
        1024, VAR_4);
 if (VAR_12 < 0) {
  FUNC_1(VAR_11);
  return VAR_12;
 }

 VAR_11->timer = FUNC_0(VAR_9->timer, VAR_11);
 if (!VAR_11->timer)
  return -VAR_0;

 return 0;
}
