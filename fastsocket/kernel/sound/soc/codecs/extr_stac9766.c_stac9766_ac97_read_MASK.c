
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
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (struct snd_soc_codec*,unsigned int,int) ;
 int VAR_8 ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 unsigned int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_4(struct snd_soc_codec *VAR_9,
           unsigned int VAR_10)
{
 u16 VAR_11 = 0, *VAR_12 = VAR_9->reg_cache;

 if (VAR_10 > VAR_3) {
  FUNC_1(VAR_9, VAR_1, 0);
  VAR_11 = VAR_7.read(VAR_9->ac97, VAR_10 - VAR_3);
  FUNC_1(VAR_9, VAR_1, 1);
  return VAR_11;
 }
 if (VAR_10 / 2 >= FUNC_0(VAR_8))
  return -VAR_6;

 if (VAR_10 == VAR_2 || VAR_10 == VAR_0 ||
  VAR_10 == VAR_1 || VAR_10 == VAR_4 ||
  VAR_10 == VAR_5) {

  VAR_11 = VAR_7.read(VAR_9->ac97, VAR_10);
  return VAR_11;
 }
 return VAR_12[VAR_10 / 2];
}
