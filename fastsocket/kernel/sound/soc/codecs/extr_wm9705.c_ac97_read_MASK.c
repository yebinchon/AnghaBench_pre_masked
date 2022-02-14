
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct snd_soc_codec {unsigned int* reg_cache; int ac97; } ;
struct TYPE_2__ {unsigned int (* read ) (int ,unsigned int) ;} ;





 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 TYPE_1__ VAR_1 ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_2(struct snd_soc_codec *VAR_3, unsigned int VAR_4)
{
 u16 *VAR_5 = VAR_3->reg_cache;

 switch (VAR_4) {
 case 130:
 case 129:
 case 128:
  return VAR_1.read(VAR_3->ac97, VAR_4);
 default:
  VAR_4 = VAR_4 >> 1;

  if (VAR_4 >= (FUNC_0(VAR_2)))
   return -VAR_0;

  return VAR_5[VAR_4];
 }
}
