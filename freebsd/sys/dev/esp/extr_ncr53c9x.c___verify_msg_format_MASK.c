
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int
FUNC_3(uint8_t *VAR_0, int VAR_1)
{

 if (VAR_1 == 1 && FUNC_0(VAR_0[0]))
  return (1);
 if (VAR_1 == 2 && FUNC_1(VAR_0[0]))
  return (1);
 if (VAR_1 >= 3 && FUNC_2(VAR_0[0]) &&
     VAR_1 == VAR_0[1] + 2)
  return (1);

 return (0);
}
