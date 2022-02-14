
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sha384_state {int dummy; } ;


 scalar_t__ FUNC_0 (struct sha384_state*,int *) ;
 int FUNC_1 (struct sha384_state*) ;
 scalar_t__ FUNC_2 (struct sha384_state*,int const*,size_t const) ;

int FUNC_3(size_t VAR_0, const u8 *VAR_1[], const size_t *VAR_2,
    u8 *VAR_3)
{
 struct sha384_state VAR_4;
 size_t VAR_5;

 FUNC_1(&VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (FUNC_2(&VAR_4, VAR_1[VAR_5], VAR_2[VAR_5]))
   return -1;
 if (FUNC_0(&VAR_4, VAR_3))
  return -1;
 return 0;
}
