
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct snd_soc_codec {unsigned int* reg_cache; int ac97; } ;
struct TYPE_2__ {unsigned int (* read ) (int ,unsigned int) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_5 ;
 TYPE_1__ VAR_6 ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int VAR_7 ;

__attribute__((used)) static unsigned int FUNC_2(struct snd_soc_codec *VAR_8,
 unsigned int VAR_9)
{
 u16 *VAR_10 = VAR_8->reg_cache;

 if (VAR_9 == VAR_2 || VAR_9 == VAR_0 ||
  VAR_9 == VAR_3 || VAR_9 == VAR_4 ||
  VAR_9 == VAR_1)
  return VAR_6.read(VAR_8->ac97, VAR_9);
 else {
  VAR_9 = VAR_9 >> 1;

  if (VAR_9 >= (FUNC_0(VAR_7)))
   return -VAR_5;

  return VAR_10[VAR_9];
 }
}
