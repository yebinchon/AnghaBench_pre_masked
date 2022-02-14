
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* str; int val; } ;
typedef TYPE_1__ svn_token_map_t ;
typedef size_t apr_size_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*,size_t) ;

int
FUNC_1(const svn_token_map_t *VAR_1,
                    const char *VAR_2,
                    apr_size_t VAR_3)
{
  for (; VAR_1->str != ((void*)0); ++VAR_1)
    if (FUNC_0(VAR_1->str, VAR_2, VAR_3) == 0 && VAR_1->str[VAR_3] == '\0')
      return VAR_1->val;

  return VAR_0;
}
