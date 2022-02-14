
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pcm; struct snd_pcm_runtime* runtime; } ;
struct TYPE_5__ {int channels_max; } ;
struct snd_pcm_runtime {TYPE_2__ hw; int private_free; struct ct_atc_pcm* private_data; } ;
struct ct_atc_pcm {int timer; int interrupt; struct snd_pcm_substream* substream; } ;
struct ct_atc {int timer; int (* spdif_out_passthru ) (struct ct_atc*,int) ;} ;
struct TYPE_4__ {scalar_t__ device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_0 (int ,struct ct_atc_pcm*) ;
 int FUNC_1 (struct ct_atc_pcm*) ;
 struct ct_atc_pcm* FUNC_2 (int,int ) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int,int ) ;
 struct ct_atc* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct ct_atc*,int) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_11)
{
 struct ct_atc *VAR_12 = FUNC_5(VAR_11);
 struct snd_pcm_runtime *VAR_13 = VAR_11->runtime;
 struct ct_atc_pcm *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_2(sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_0;

 VAR_14->substream = VAR_11;
 VAR_14->interrupt = VAR_8;
 VAR_13->private_data = VAR_14;
 VAR_13->private_free = VAR_7;
 if (VAR_3 == VAR_11->pcm->device) {
  VAR_13->hw = VAR_10;
  VAR_12->spdif_out_passthru(VAR_12, 1);
 } else {
  VAR_13->hw = VAR_9;
  if (VAR_1 == VAR_11->pcm->device)
   VAR_13->hw.channels_max = 8;
 }

 VAR_15 = FUNC_3(VAR_13,
         VAR_5);
 if (VAR_15 < 0) {
  FUNC_1(VAR_14);
  return VAR_15;
 }
 VAR_15 = FUNC_4(VAR_13,
        VAR_4,
        1024, VAR_6);
 if (VAR_15 < 0) {
  FUNC_1(VAR_14);
  return VAR_15;
 }

 VAR_14->timer = FUNC_0(VAR_12->timer, VAR_14);
 if (!VAR_14->timer)
  return -VAR_0;

 return 0;
}
