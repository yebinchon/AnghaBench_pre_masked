
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;
struct snd_ac97 {struct snd_ice1712* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,int ) ;
 int FUNC_3 (unsigned short,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_ac97 *VAR_8,
           unsigned short VAR_9,
           unsigned short VAR_10)
{
 struct snd_ice1712 *VAR_11 = VAR_8->private_data;
 int VAR_12;
 unsigned char VAR_13 = 0;

 for (VAR_12 = 0; VAR_12 < 0x10000; VAR_12++) {
  VAR_13 = FUNC_1(FUNC_0(VAR_11, VAR_0));
  if (VAR_13 & (VAR_7 | VAR_5))
   continue;
  if (!(VAR_13 & VAR_6))
   continue;
  break;
 }
 FUNC_2(VAR_9, FUNC_0(VAR_11, VAR_2));
 FUNC_3(VAR_10, FUNC_0(VAR_11, VAR_1));
 VAR_13 &= ~(VAR_4 | VAR_3);
 FUNC_2(VAR_13 | VAR_7, FUNC_0(VAR_11, VAR_0));
 for (VAR_12 = 0; VAR_12 < 0x10000; VAR_12++)
  if ((FUNC_1(FUNC_0(VAR_11, VAR_0)) & VAR_7) == 0)
   break;
}
