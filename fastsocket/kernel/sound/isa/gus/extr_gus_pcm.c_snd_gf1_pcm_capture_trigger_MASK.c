
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int pcm_rcntrl_reg; } ;
struct snd_gus_card {int reg_lock; TYPE_1__ gf1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_gus_card*,int ) ;
 int FUNC_1 (struct snd_gus_card*,int ,int) ;
 struct snd_gus_card* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4,
           int VAR_5)
{
 struct snd_gus_card *VAR_6 = FUNC_2(VAR_4);
 int VAR_7;

 if (VAR_5 == VAR_2) {
  VAR_7 = VAR_6->gf1.pcm_rcntrl_reg;
 } else if (VAR_5 == VAR_3) {
  VAR_7 = 0;
 } else {
  return -VAR_0;
 }

 FUNC_3(&VAR_6->reg_lock);
 FUNC_1(VAR_6, VAR_1, VAR_7);
 FUNC_0(VAR_6, VAR_1);
 FUNC_4(&VAR_6->reg_lock);
 return 0;
}
