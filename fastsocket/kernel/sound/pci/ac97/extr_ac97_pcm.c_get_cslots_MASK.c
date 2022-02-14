
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ac97*) ;

__attribute__((used)) static unsigned short FUNC_1(struct snd_ac97 *VAR_3)
{
 unsigned short VAR_4;

 if (!FUNC_0(VAR_3))
  return 0;
 VAR_4 = (1<<VAR_1)|(1<<VAR_2);
 VAR_4 |= (1<<VAR_0);
 return VAR_4;
}
