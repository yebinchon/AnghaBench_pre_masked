
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(unsigned VAR_1)
{
 uint32_t VAR_2, VAR_3;

 if (FUNC_0(VAR_0))
  return (0);
 VAR_2 = 0;
 for (;;) {
  if (FUNC_2(1))
   return (1);
  VAR_3 = *(uint32_t *)FUNC_1(0x46c);
  if (!VAR_2)
   VAR_2 = VAR_3;
  if ((uint32_t)(VAR_3 - VAR_2) >= VAR_1)
   return (0);
 }
}
