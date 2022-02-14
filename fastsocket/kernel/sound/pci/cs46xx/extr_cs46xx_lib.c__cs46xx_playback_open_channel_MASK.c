
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int info; } ;
struct snd_pcm_runtime {TYPE_1__ hw; int private_free; struct snd_cs46xx_pcm* private_data; } ;
struct snd_cs46xx_pcm {int pcm_channel_id; int * pcm_channel; struct snd_pcm_substream* substream; int hw_buf; } ;
struct snd_cs46xx {int (* active_ctrl ) (struct snd_cs46xx*,int) ;scalar_t__ accept_valid; struct snd_cs46xx_pcm* playback_pcm; int spos_mutex; int pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_cs46xx_pcm*) ;
 struct snd_cs46xx_pcm* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 scalar_t__ FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_pcm_runtime*,int ,int ,int *) ;
 struct snd_cs46xx* FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (struct snd_cs46xx*,int) ;

__attribute__((used)) static int FUNC_9 (struct snd_pcm_substream *VAR_9,int VAR_10)
{
 struct snd_cs46xx *VAR_11 = FUNC_7(VAR_9);
 struct snd_cs46xx_pcm * VAR_12;
 struct snd_pcm_runtime *VAR_13 = VAR_9->runtime;

 VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_1);
 if (VAR_12 == ((void*)0))
  return -VAR_0;
 if (FUNC_4(VAR_3, FUNC_5(VAR_11->pci),
    VAR_2, &VAR_12->hw_buf) < 0) {
  FUNC_0(VAR_12);
  return -VAR_0;
 }

 VAR_13->hw = VAR_8;
 VAR_13->private_data = VAR_12;
 VAR_13->private_free = VAR_7;

 VAR_12->substream = VAR_9;
 VAR_11->playback_pcm = VAR_12;


 if (VAR_11->accept_valid)
  VAR_9->runtime->hw.info |= VAR_5;
 VAR_11->active_ctrl(VAR_11, 1);

 return 0;
}
