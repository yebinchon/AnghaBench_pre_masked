
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct TYPE_4__ {struct snd_pcm_substream* substream; int hw_buf; } ;
struct snd_cs46xx {int (* active_ctrl ) (struct snd_cs46xx*,int) ;scalar_t__ accept_valid; TYPE_1__ capt; int pci; } ;
struct TYPE_6__ {int info; } ;
struct TYPE_5__ {TYPE_3__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int *) ;
 struct snd_cs46xx* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_cs46xx*,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_7)
{
 struct snd_cs46xx *VAR_8 = FUNC_3(VAR_7);

 if (FUNC_0(VAR_2, FUNC_1(VAR_8->pci),
    VAR_1, &VAR_8->capt.hw_buf) < 0)
  return -VAR_0;
 VAR_8->capt.substream = VAR_7;
 VAR_7->runtime->hw = VAR_6;

 if (VAR_8->accept_valid)
  VAR_7->runtime->hw.info |= VAR_4;

 VAR_8->active_ctrl(VAR_8, 1);






 return 0;
}
