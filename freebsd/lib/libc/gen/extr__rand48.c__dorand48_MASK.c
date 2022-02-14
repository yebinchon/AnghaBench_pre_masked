
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned short* VAR_1 ;

void
FUNC_0(unsigned short VAR_2[3])
{
 unsigned long VAR_3;
 unsigned short VAR_4[2];

 VAR_3 = (unsigned long) VAR_1[0] * (unsigned long) VAR_2[0] +
  (unsigned long) VAR_0;
 VAR_4[0] = (unsigned short) VAR_3;
 VAR_3 >>= sizeof(unsigned short) * 8;
 VAR_3 += (unsigned long) VAR_1[0] * (unsigned long) VAR_2[1] +
  (unsigned long) VAR_1[1] * (unsigned long) VAR_2[0];
 VAR_4[1] = (unsigned short) VAR_3;
 VAR_3 >>= sizeof(unsigned short) * 8;
 VAR_3 += VAR_1[0] * VAR_2[2] + VAR_1[1] * VAR_2[1] + VAR_1[2] * VAR_2[0];
 VAR_2[0] = VAR_4[0];
 VAR_2[1] = VAR_4[1];
 VAR_2[2] = (unsigned short) VAR_3;
}
