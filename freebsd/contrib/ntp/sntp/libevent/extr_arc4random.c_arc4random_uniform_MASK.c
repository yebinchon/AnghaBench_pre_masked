
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int ARC4RANDOM_UINT32 ;


 unsigned int FUNC_0 () ;

unsigned int
FUNC_1(unsigned int VAR_0)
{
 ARC4RANDOM_UINT32 VAR_1, VAR_2;

 if (VAR_0 < 2)
  return 0;





 if (VAR_0 > 0x80000000)
  VAR_2 = 1 + ~VAR_0;
 else {

  VAR_2 = ((0xffffffff - (VAR_0 * 2)) + 1) % VAR_0;
 }
 for (;;) {
  VAR_1 = FUNC_0();
  if (VAR_1 >= VAR_2)
   break;
 }

 return VAR_1 % VAR_0;
}
