
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm {int running; int first_ptr; int type; int capture_bs_reg; int capture_ipr; int capture_inte; int capture_bs_val; int capture_cr_val; int capture_cr_val2; } ;
struct snd_emu10k1 {int reg_lock; int audigy; scalar_t__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;




 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct snd_emu10k1*,int ) ;
 int FUNC_2 (struct snd_emu10k1*,int ) ;
 int FUNC_3 (struct snd_emu10k1*,int ,int ,int ) ;
 struct snd_emu10k1* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_6,
           int VAR_7)
{
 struct snd_emu10k1 *VAR_8 = FUNC_4(VAR_6);
 struct snd_pcm_runtime *VAR_9 = VAR_6->runtime;
 struct snd_emu10k1_pcm *VAR_10 = VAR_9->private_data;
 int VAR_11 = 0;

 FUNC_6(&VAR_8->reg_lock);
 switch (VAR_7) {
 case 130:
 case 131:

  FUNC_0(VAR_10->capture_ipr, VAR_8->port + VAR_5);
  FUNC_2(VAR_8, VAR_10->capture_inte);




  switch (VAR_10->type) {
  case 133:
   FUNC_3(VAR_8, VAR_0, 0, VAR_10->capture_cr_val);
   break;
  case 132:
   if (VAR_8->audigy) {
    FUNC_3(VAR_8, VAR_1, 0, VAR_10->capture_cr_val);
    FUNC_3(VAR_8, VAR_2, 0, VAR_10->capture_cr_val2);
    FUNC_5("cr_val=0x%x, cr_val2=0x%x\n", VAR_10->capture_cr_val, VAR_10->capture_cr_val2);
   } else
    FUNC_3(VAR_8, VAR_4, 0, VAR_10->capture_cr_val);
   break;
  default:
   break;
  }
  FUNC_3(VAR_8, VAR_10->capture_bs_reg, 0, VAR_10->capture_bs_val);
  VAR_10->running = 1;
  VAR_10->first_ptr = 1;
  break;
 case 129:
 case 128:
  VAR_10->running = 0;
  FUNC_1(VAR_8, VAR_10->capture_inte);
  FUNC_0(VAR_10->capture_ipr, VAR_8->port + VAR_5);
  FUNC_3(VAR_8, VAR_10->capture_bs_reg, 0, 0);
  switch (VAR_10->type) {
  case 133:
   FUNC_3(VAR_8, VAR_0, 0, 0);
   break;
  case 132:
   if (VAR_8->audigy) {
    FUNC_3(VAR_8, VAR_1, 0, 0);
    FUNC_3(VAR_8, VAR_2, 0, 0);
   } else
    FUNC_3(VAR_8, VAR_4, 0, 0);
   break;
  default:
   break;
  }
  break;
 default:
  VAR_11 = -VAR_3;
 }
 FUNC_7(&VAR_8->reg_lock);
 return VAR_11;
}
