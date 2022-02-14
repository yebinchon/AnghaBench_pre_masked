
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int i2c; int cs8427; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_ice1712 *VAR_1, int VAR_2)
{
 unsigned char VAR_3[2] = { 0x80 | 4, 0 };
 unsigned char VAR_4, VAR_5;
 int VAR_6 = 0;

 FUNC_0(VAR_1->i2c);
 if (FUNC_2(VAR_1->cs8427, VAR_3, 1) != 1) {
  FUNC_3(VAR_1->i2c);
  return -VAR_0;
 }
 if (FUNC_1(VAR_1->cs8427, &VAR_4, 1) != 1) {
  FUNC_3(VAR_1->i2c);
  return -VAR_0;
 }
 VAR_5 = VAR_4 & 0xf0;
 if (VAR_2)
  VAR_5 |= 0x01;
 else
  VAR_5 |= 0x04;
 if (VAR_4 != VAR_5) {
  VAR_3[1] = VAR_5;
  if (FUNC_2(VAR_1->cs8427, VAR_3, 2) != 2) {
   VAR_6 = -VAR_0;
  } else {
   VAR_6++;
  }
 }
 FUNC_3(VAR_1->i2c);
 return VAR_6;
}
