
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned char VAR_1, unsigned int VAR_2)
{
 switch (VAR_1 & 0xe0) {
 case 129:
 case 128:
  VAR_2 >>= 1;
  break;
 case 130:
  return VAR_2 >> 2;
 }
 if (VAR_1 & VAR_0)
  VAR_2 >>= 1;
 return VAR_2;
}
