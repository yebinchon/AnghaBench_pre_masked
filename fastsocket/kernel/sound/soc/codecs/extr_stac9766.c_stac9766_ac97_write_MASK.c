
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct snd_soc_codec {unsigned int* reg_cache; int ac97; } ;
struct TYPE_2__ {int (* write ) (int ,unsigned int,unsigned int) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;
 int FUNC_2 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_codec *VAR_5, unsigned int VAR_6,
          unsigned int VAR_7)
{
 u16 *VAR_8 = VAR_5->reg_cache;

 if (VAR_6 > VAR_1) {
  FUNC_3(VAR_5, VAR_0, 0);
  VAR_3.write(VAR_5->ac97, VAR_6, VAR_7);
  FUNC_3(VAR_5, VAR_0, 1);
  return 0;
 }
 if (VAR_6 / 2 >= FUNC_0(VAR_4))
  return -VAR_2;

 VAR_3.write(VAR_5->ac97, VAR_6, VAR_7);
 VAR_8[VAR_6 / 2] = VAR_7;
 return 0;
}
