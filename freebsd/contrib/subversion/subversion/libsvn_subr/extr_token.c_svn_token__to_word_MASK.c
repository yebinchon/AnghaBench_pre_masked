
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* str; int val; } ;
typedef TYPE_1__ svn_token_map_t ;


 int FUNC_0 () ;

const char *
FUNC_1(const svn_token_map_t *VAR_0,
                   int VAR_1)
{
  for (; VAR_0->str != ((void*)0); ++VAR_0)
    if (VAR_0->val == VAR_1)
      return VAR_0->str;


  FUNC_0();
}
