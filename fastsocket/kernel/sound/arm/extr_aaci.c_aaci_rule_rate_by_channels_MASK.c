
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int var; struct aaci* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int max; } ;
struct aaci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_1 (struct aaci*,int ) ;
 struct snd_interval* FUNC_2 (struct snd_pcm_hw_params*,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct snd_interval*,int ,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_4(struct snd_pcm_hw_params *VAR_7, struct snd_pcm_hw_rule *VAR_8)
{
 struct aaci *VAR_9 = VAR_8->private;
 unsigned int VAR_10 = VAR_5|VAR_4;
 struct snd_interval *VAR_11 = FUNC_2(VAR_7, VAR_3);

 switch (VAR_11->max) {
 case 6:
  VAR_10 &= FUNC_1(VAR_9, VAR_1);
 case 4:
  VAR_10 &= FUNC_1(VAR_9, VAR_2);
 case 2:
  VAR_10 &= FUNC_1(VAR_9, VAR_0);
 }

 return FUNC_3(FUNC_2(VAR_7, VAR_8->var),
     FUNC_0(VAR_6), VAR_6,
     VAR_10);
}
