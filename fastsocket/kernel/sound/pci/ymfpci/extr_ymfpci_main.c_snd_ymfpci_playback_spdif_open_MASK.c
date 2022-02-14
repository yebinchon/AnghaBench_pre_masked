
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ymfpci_pcm {int output_rear; int swap_rear; scalar_t__ output_front; } ;
struct snd_ymfpci {int spdif_pcm_bits; int spdif_bits; TYPE_2__* spdif_pcm_ctl; int card; int reg_lock; int spdif_opened; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_ymfpci_pcm* private_data; } ;
struct TYPE_4__ {int id; TYPE_1__* vd; } ;
struct TYPE_3__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int *) ;
 struct snd_ymfpci* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_ymfpci*,int ) ;
 int FUNC_4 (struct snd_ymfpci*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct snd_ymfpci*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_5)
{
 struct snd_ymfpci *VAR_6 = FUNC_1(VAR_5);
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 struct snd_ymfpci_pcm *VAR_8;
 int VAR_9;

 if ((VAR_9 = FUNC_2(VAR_5)) < 0)
  return VAR_9;
 VAR_8 = VAR_7->private_data;
 VAR_8->output_front = 0;
 VAR_8->output_rear = 1;
 VAR_8->swap_rear = 1;
 FUNC_5(&VAR_6->reg_lock);
 FUNC_4(VAR_6, VAR_3,
     FUNC_3(VAR_6, VAR_3) | 2);
 FUNC_7(VAR_6);
 VAR_6->spdif_pcm_bits = VAR_6->spdif_bits;
 FUNC_4(VAR_6, VAR_4, VAR_6->spdif_pcm_bits);
 VAR_6->spdif_opened++;
 FUNC_6(&VAR_6->reg_lock);

 VAR_6->spdif_pcm_ctl->vd[0].access &= ~VAR_0;
 FUNC_0(VAR_6->card, VAR_2 |
         VAR_1, &VAR_6->spdif_pcm_ctl->id);
 return 0;
}
