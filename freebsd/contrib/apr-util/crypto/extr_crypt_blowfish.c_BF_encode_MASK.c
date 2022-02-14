
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BF_word ;


 void** VAR_0 ;

__attribute__((used)) static void FUNC_0(char *VAR_1, const BF_word *VAR_2, int VAR_3)
{
 const unsigned char *VAR_4 = (const unsigned char *)VAR_2;
 const unsigned char *VAR_5 = VAR_4 + VAR_3;
 unsigned char *VAR_6 = (unsigned char *)VAR_1;
 unsigned int VAR_7, VAR_8;

 do {
  VAR_7 = *VAR_4++;
  *VAR_6++ = VAR_0[VAR_7 >> 2];
  VAR_7 = (VAR_7 & 0x03) << 4;
  if (VAR_4 >= VAR_5) {
   *VAR_6++ = VAR_0[VAR_7];
   break;
  }

  VAR_8 = *VAR_4++;
  VAR_7 |= VAR_8 >> 4;
  *VAR_6++ = VAR_0[VAR_7];
  VAR_7 = (VAR_8 & 0x0f) << 2;
  if (VAR_4 >= VAR_5) {
   *VAR_6++ = VAR_0[VAR_7];
   break;
  }

  VAR_8 = *VAR_4++;
  VAR_7 |= VAR_8 >> 6;
  *VAR_6++ = VAR_0[VAR_7];
  *VAR_6++ = VAR_0[VAR_8 & 0x3f];
 } while (VAR_4 < VAR_5);
}
