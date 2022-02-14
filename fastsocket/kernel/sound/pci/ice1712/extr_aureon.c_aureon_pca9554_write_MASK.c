
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
 unsigned char VAR_5 ;
 unsigned int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;
 int FUNC_2 (struct snd_ice1712*,unsigned int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct snd_ice1712 *VAR_6, unsigned char VAR_7,
     unsigned char VAR_8)
{
 unsigned int VAR_9;
 int VAR_10, VAR_11;
 unsigned char VAR_12 = VAR_5;
 unsigned char VAR_13 = 0;

 VAR_9 = FUNC_0(VAR_6);

 FUNC_1(VAR_6, ~(VAR_2|VAR_1|
      VAR_4|VAR_3|
      VAR_0));
 VAR_9 |= VAR_4;
 VAR_9 |= VAR_0 | VAR_3;

 VAR_9 &= ~VAR_2;
 VAR_9 &= ~VAR_1;
 FUNC_2(VAR_6, VAR_9);
 FUNC_3(50);





 VAR_9 |= VAR_1;
 FUNC_2(VAR_6, VAR_9);
 FUNC_3(50);
 VAR_9 |= VAR_2;
 FUNC_2(VAR_6, VAR_9);
 FUNC_3(100);
 VAR_9 &= ~VAR_2;
 FUNC_2(VAR_6, VAR_9);
 FUNC_3(50);
 VAR_9 &= ~VAR_1;
 FUNC_2(VAR_6, VAR_9);
 FUNC_3(100);




 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  switch (VAR_11) {
  case 0:
   VAR_13 = VAR_12;
   break;
  case 1:
   VAR_13 = VAR_7;
   break;
  case 2:
   VAR_13 = VAR_8;
   break;
  }
  for (VAR_10 = 7; VAR_10 >= 0; VAR_10--) {
   VAR_9 &= ~VAR_1;
   FUNC_2(VAR_6, VAR_9);
   FUNC_3(40);
   if (VAR_13 & (1 << VAR_10))
    VAR_9 |= VAR_2;
   else
    VAR_9 &= ~VAR_2;
   FUNC_2(VAR_6, VAR_9);
   FUNC_3(40);
   VAR_9 |= VAR_1;
   FUNC_2(VAR_6, VAR_9);
   FUNC_3(40);
  }
  VAR_9 &= ~VAR_1;
  FUNC_2(VAR_6, VAR_9);
  FUNC_3(40);
  VAR_9 |= VAR_1;
  FUNC_2(VAR_6, VAR_9);
  FUNC_3(40);
  VAR_9 &= ~VAR_1;
  FUNC_2(VAR_6, VAR_9);
  FUNC_3(40);
 }
 VAR_9 &= ~VAR_1;
 FUNC_2(VAR_6, VAR_9);
 FUNC_3(40);
 VAR_9 &= ~VAR_2;
 FUNC_2(VAR_6, VAR_9);
 FUNC_3(40);
 VAR_9 |= VAR_1;
 FUNC_2(VAR_6, VAR_9);
 FUNC_3(50);
 VAR_9 |= VAR_2;
 FUNC_2(VAR_6, VAR_9);
 FUNC_3(100);
}
