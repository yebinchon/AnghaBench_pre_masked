
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

int
FUNC_0(unsigned int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6, VAR_7;

 if (VAR_1 < 2)
  return 0;
 for (VAR_7 = 0; ! (VAR_1 & 0x80000000L); VAR_7++)
  VAR_1 <<= 1;
 VAR_5 = (VAR_1 >> 24) & 0x7f;
 VAR_6 = (VAR_1 >> 16) & 0xff;

 VAR_4 = (VAR_0[VAR_5 + 1] * VAR_6 + VAR_0[VAR_5] * (0x100 - VAR_6)) >> 8;
 VAR_4 -= VAR_2;
 VAR_4 = (VAR_4 * VAR_3) >> 16;
 VAR_4 += (24 - VAR_7) * VAR_3;
 return VAR_4;
}
