
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct snd_soc_codec {unsigned int* reg_cache; int ac97; } ;
struct TYPE_2__ {int (* write ) (int ,unsigned int,unsigned int) ;} ;


 unsigned int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_2, unsigned int VAR_3,
 unsigned int VAR_4)
{
 u16 *VAR_5 = VAR_2->reg_cache;

 if (VAR_3 < 0x7c)
  VAR_0.write(VAR_2->ac97, VAR_3, VAR_4);
 VAR_3 = VAR_3 >> 1;
 if (VAR_3 < (FUNC_0(VAR_1)))
  VAR_5[VAR_3] = VAR_4;

 return 0;
}
