
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_1(uint8_t *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;
 if (VAR_1 == 0)
  VAR_1 = 1;
 VAR_2 = 383385600;
 VAR_3 = VAR_2 / VAR_1;
 if (VAR_3 == 0)
  VAR_3 = 1;
 VAR_4 = 0;
 while (VAR_3 >= 512) {
  if (VAR_4 < 7) {
   VAR_3 >>= 2;
   VAR_4++;
  } else {

   VAR_3 = 511;
   break;
  }
 }

 VAR_0[3] = 0x80;
 VAR_0[2] = 0;
 VAR_0[1] = VAR_4 << 1 | VAR_3 >> 8;
 VAR_0[0] = VAR_3 & 0xff;


 VAR_1 = (VAR_2 / VAR_3) >> (VAR_4 << 1);
 FUNC_0("real baud rate will be %u\n", VAR_1);

 return VAR_1;
}
