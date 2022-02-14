
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ymfpci_pcm {scalar_t__ output_rear; } ;
struct snd_ymfpci {scalar_t__ rear_opened; int reg_lock; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct snd_ymfpci_pcm* private_data; } ;


 struct snd_ymfpci* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_ymfpci*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0)
{
 struct snd_ymfpci *VAR_1 = FUNC_0(VAR_0);
 struct snd_ymfpci_pcm *VAR_2 = VAR_0->runtime->private_data;

 FUNC_2(&VAR_1->reg_lock);
 if (VAR_2->output_rear && VAR_1->rear_opened > 0) {
  VAR_1->rear_opened--;
  FUNC_4(VAR_1);
 }
 FUNC_3(&VAR_1->reg_lock);
 return FUNC_1(VAR_0);
}
