
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_2 (int) ;

int
FUNC_3(unsigned int VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5;

 if (FUNC_0(VAR_0))
  return (0);
 VAR_2 *= VAR_1;
 VAR_3 = 0;
 for (;;) {







  VAR_5 = FUNC_2(1);
  if (VAR_5 != 0 && VAR_5 != 0x0100)
   return (1);
  if (VAR_2 > 0) {
   VAR_4 = *(uint32_t *)FUNC_1(0x46c);
   if (!VAR_3)
    VAR_3 = VAR_4;
   if (VAR_4 < VAR_3 || VAR_4 >= VAR_3 + VAR_2)
    return (0);
  }
 }

}
