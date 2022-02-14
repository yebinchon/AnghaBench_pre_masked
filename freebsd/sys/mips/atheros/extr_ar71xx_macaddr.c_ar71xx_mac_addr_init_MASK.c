
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



int
FUNC_0(unsigned char *VAR_0, const unsigned char *VAR_1,
    int VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (-1);



 VAR_4 = (((uint32_t) VAR_1[3]) << 16)
     + (((uint32_t) VAR_1[4]) << 8)
     + ((uint32_t) VAR_1[5]);


 VAR_4 += VAR_2;

 VAR_0[0] = VAR_1[0];
 VAR_0[1] = VAR_1[1];
 VAR_0[2] = VAR_1[2];
 VAR_0[3] = (VAR_4 >> 16) & 0xff;
 VAR_0[4] = (VAR_4 >> 8) & 0xff;
 VAR_0[5] = VAR_4 & 0xff;

 if (VAR_3)
  VAR_0[0] |= 0x02;


 return (0);
}
