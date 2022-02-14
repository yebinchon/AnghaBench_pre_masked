
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; int * str; } ;
typedef TYPE_1__ svn_token_map_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

int
FUNC_1(const svn_token_map_t *VAR_1,
                     const char *VAR_2)
{
  if (VAR_2 == ((void*)0))
    return VAR_0;

  for (; VAR_1->str != ((void*)0); ++VAR_1)
    if (FUNC_0(VAR_1->str, VAR_2) == 0)
      return VAR_1->val;

  return VAR_0;
}
