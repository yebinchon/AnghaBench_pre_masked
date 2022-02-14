
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_hw_rule {int var; struct aaci* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct aaci {TYPE_3__* ac97_bus; } ;
struct TYPE_6__ {TYPE_2__* pcms; } ;
struct TYPE_5__ {TYPE_1__* r; } ;
struct TYPE_4__ {unsigned int slots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_3(struct snd_pcm_hw_params *VAR_3, struct snd_pcm_hw_rule *VAR_4)
{
 struct aaci *VAR_5 = VAR_4->private;
 unsigned int VAR_6 = 1 << 0, VAR_7;




 VAR_7 = VAR_5->ac97_bus->pcms[0].r[0].slots;
 if (VAR_7 & (1 << VAR_1)) {
  VAR_6 |= 1 << 1;
  if (VAR_7 & (1 << VAR_0))
   VAR_6 |= 1 << 2;
 }

 return FUNC_2(FUNC_1(VAR_3, VAR_4->var),
     FUNC_0(VAR_2), VAR_2,
     VAR_6);
}
