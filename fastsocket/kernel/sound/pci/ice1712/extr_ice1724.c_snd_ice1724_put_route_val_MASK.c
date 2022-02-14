
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;

int FUNC_3(struct snd_ice1712 *VAR_1, unsigned int VAR_2,
        int VAR_3)
{
 unsigned int VAR_4, VAR_5;
 int VAR_6;
 static const unsigned char VAR_7[8] = {
  0,
  2,
  3,
  6,
  7,
 };

 VAR_5 = VAR_7[VAR_2 % 5];
 VAR_2 = VAR_4 = FUNC_1(FUNC_0(VAR_1, VAR_0));
 VAR_2 &= ~(0x07 << VAR_3);
 VAR_2 |= VAR_5 << VAR_3;
 VAR_6 = VAR_2 != VAR_4;
 if (VAR_6)
  FUNC_2(VAR_2, FUNC_0(VAR_1, VAR_0));
 return VAR_6;
}
