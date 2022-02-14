
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct snd_ice1712 *VAR_5, unsigned int VAR_6,
  unsigned int VAR_7, int VAR_8, unsigned char *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;
 unsigned int VAR_13;

 VAR_13 = (FUNC_0(VAR_5) & ~VAR_1) | VAR_0|VAR_4;
 FUNC_1(VAR_5, VAR_13);
 VAR_13 &= ~VAR_6;
 FUNC_1(VAR_5, VAR_13);
 FUNC_2(1);

 for (VAR_11 = VAR_8-1; VAR_11 >= 0; VAR_11--) {
  if (VAR_7 & (1 << VAR_11))
   VAR_13 |= VAR_3;
  else
   VAR_13 &= ~VAR_3;
  FUNC_1(VAR_5, VAR_13);
  FUNC_2(1);

  VAR_13 |= VAR_1;
  FUNC_1(VAR_5, VAR_13);
  FUNC_2(1);

  VAR_13 &= ~VAR_1;
  FUNC_1(VAR_5, VAR_13);
  FUNC_2(1);
 }

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  unsigned char VAR_14 = 0;
  for (VAR_11 = 7; VAR_11 >= 0; VAR_11--) {
   VAR_13 = FUNC_0(VAR_5);
   VAR_14 <<= 1;
   VAR_14 |= (VAR_13 & VAR_2) ? 1 : 0;
   FUNC_2(1);

   VAR_13 |= VAR_1;
   FUNC_1(VAR_5, VAR_13);
   FUNC_2(1);

   VAR_13 &= ~VAR_1;
   FUNC_1(VAR_5, VAR_13);
   FUNC_2(1);
  }
  VAR_9[VAR_12] = VAR_14;
 }

 VAR_13 |= VAR_6;
 FUNC_1(VAR_5, VAR_13);
}
