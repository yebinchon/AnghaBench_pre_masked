
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_codec {int ac97; } ;
struct TYPE_2__ {int (* reset ) (int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_soc_codec*,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_3)
{
 if (VAR_1.reset) {
  VAR_1.reset(VAR_3->ac97);
  if (FUNC_0(VAR_3, 0) == VAR_2[0])
   return 0;
 }

 return -VAR_0;
}
