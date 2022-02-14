
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_codec {int ac97; } ;
struct TYPE_2__ {int (* warm_reset ) (int ) ;int (* reset ) (int ) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (struct snd_soc_codec*,int ) ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_codec *VAR_3, int VAR_4)
{
 if (VAR_4 && VAR_1.warm_reset) {
  VAR_1.warm_reset(VAR_3->ac97);
  if (FUNC_0(VAR_3, 0) == VAR_2[0])
   return 1;
 }

 VAR_1.reset(VAR_3->ac97);
 if (VAR_1.warm_reset)
  VAR_1.warm_reset(VAR_3->ac97);
 if (FUNC_0(VAR_3, 0) != VAR_2[0])
  return -VAR_0;
 return 0;
}
