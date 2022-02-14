
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Buffer ;


 int FUNC_0 (int *,char const) ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_1)
{
    static const char VAR_2[16] = "0123456789abcdef";
    Buffer VAR_3;
    size_t VAR_4, VAR_5;
    unsigned char *VAR_6 = (unsigned char *)VAR_1;
    unsigned int VAR_7, VAR_8, VAR_9, VAR_10;

    VAR_7 = 0x971e137bU;
    VAR_9 = 0x95543787U;
    VAR_10 = 0x2ad7eb25U;
    VAR_5 = FUNC_3(VAR_1);

    for (VAR_4 = VAR_5; VAR_4; ) {
 VAR_8 = 0;
 switch (VAR_4) {
 default:
     VAR_8 = (VAR_6[3] << 24) | (VAR_6[2] << 16) | (VAR_6[1] << 8) | VAR_6[0];
     VAR_4 -= 4;
     VAR_6 += 4;
     break;
 case 3:
     VAR_8 |= (VAR_6[2] << 16);
 case 2:
     VAR_8 |= (VAR_6[1] << 8);
 case 1:
     VAR_8 |= VAR_6[0];
     VAR_4 = 0;
 }
 VAR_9 = VAR_9 * 5 + 0x7b7d159cU;
 VAR_10 = VAR_10 * 5 + 0x6bce6396U;
 VAR_8 *= VAR_9;
 VAR_8 = (VAR_8 << 11) ^ (VAR_8 >> 21);
 VAR_8 *= VAR_10;
 VAR_7 = (VAR_7 << 13) ^ (VAR_7 >> 19);
 VAR_7 = VAR_7 * 5 + 0x52dce729U;
 VAR_7 ^= VAR_8;
   }
   VAR_7 ^= VAR_5;
   VAR_7 *= 0x85ebca6b;
   VAR_7 ^= VAR_7 >> 13;
   VAR_7 *= 0xc2b2ae35;
   VAR_7 ^= VAR_7 >> 16;

   FUNC_2(&VAR_3, 0);
   for (VAR_4 = 0; VAR_4 < 8; ++VAR_4) {
       FUNC_0(&VAR_3, VAR_2[VAR_7 & 15]);
       VAR_7 >>= 4;
   }

   return FUNC_1(&VAR_3, VAR_0);
}
