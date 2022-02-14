
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pmac {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pmac*,unsigned int,int) ;

__attribute__((used)) static void
FUNC_1(struct snd_pmac *VAR_1, unsigned int VAR_2,
          long *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 if (VAR_3[0] < 0 || VAR_3[0] > 100 ||
     VAR_3[1] < 0 || VAR_3[1] > 100)
  return;
 VAR_6 = VAR_3[0] ? VAR_3[0] + VAR_0 : 0;
 VAR_7 = VAR_3[1] ? VAR_3[1] + VAR_0 : 0;

 VAR_5 = VAR_6 + (VAR_7 << VAR_4);
 if (VAR_4 == 8)
  VAR_5 |= VAR_5 << 16;

 FUNC_0(VAR_1, VAR_2, VAR_5);
}
