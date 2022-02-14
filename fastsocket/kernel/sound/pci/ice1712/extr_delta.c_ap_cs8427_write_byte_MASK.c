
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ice1712*,int ,unsigned char) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct snd_ice1712 *VAR_3, unsigned char VAR_4, unsigned char VAR_5)
{
 int VAR_6;

 for (VAR_6 = 7; VAR_6 >= 0; VAR_6--) {
  VAR_5 &= ~(VAR_1|VAR_0);
  if (VAR_4 & (1 << VAR_6))
   VAR_5 |= VAR_1;
  FUNC_0(VAR_3, VAR_2, VAR_5);
  FUNC_1(5);
  VAR_5 |= VAR_0;
  FUNC_0(VAR_3, VAR_2, VAR_5);
  FUNC_1(5);
 }
}
