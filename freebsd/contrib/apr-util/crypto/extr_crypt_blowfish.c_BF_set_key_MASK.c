
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* P; } ;
typedef int BF_word_signed ;
typedef int BF_word ;
typedef int* BF_key ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_0(const char *VAR_2, BF_key VAR_3, BF_key VAR_4,
    unsigned char VAR_5)
{
 const char *VAR_6 = VAR_2;
 unsigned int VAR_7, VAR_8, VAR_9;
 BF_word VAR_10, VAR_11, VAR_12, VAR_13[2];
 VAR_7 = (unsigned int)VAR_5 & 1;
 VAR_10 = ((BF_word)VAR_5 & 2) << 15;

 VAR_11 = VAR_12 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_0 + 2; VAR_8++) {
  VAR_13[0] = VAR_13[1] = 0;
  for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
   VAR_13[0] <<= 8;
   VAR_13[0] |= (unsigned char)*VAR_6;
   VAR_13[1] <<= 8;
   VAR_13[1] |= (BF_word_signed)(signed char)*VAR_6;






   if (VAR_9)
    VAR_11 |= VAR_13[1] & 0x80;
   if (!*VAR_6)
    VAR_6 = VAR_2;
   else
    VAR_6++;
  }
  VAR_12 |= VAR_13[0] ^ VAR_13[1];

  VAR_3[VAR_8] = VAR_13[VAR_7];
  VAR_4[VAR_8] = VAR_1.P[VAR_8] ^ VAR_13[VAR_7];
 }
 VAR_12 |= VAR_12 >> 16;
 VAR_12 &= 0xffff;
 VAR_12 += 0xffff;
 VAR_11 <<= 9;
 VAR_11 &= ~VAR_12 & VAR_10;
 VAR_4[0] ^= VAR_11;
}
