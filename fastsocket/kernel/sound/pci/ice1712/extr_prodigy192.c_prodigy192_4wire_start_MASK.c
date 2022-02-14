
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;
 int FUNC_2 (struct snd_ice1712*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static unsigned int FUNC_4(struct snd_ice1712 *VAR_2)
{
 unsigned int VAR_3;

 FUNC_2(VAR_2);
 VAR_3 = FUNC_0(VAR_2);

 VAR_3 |= VAR_0;
 VAR_3 &= ~VAR_1;
 FUNC_1(VAR_2, VAR_3);
 FUNC_3(1);
 return VAR_3;
}
