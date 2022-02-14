
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int apr_hash_t ;


 TYPE_1__* FUNC_0 (int *,char const*) ;

const char *
FUNC_1(const apr_hash_t *VAR_0,
                   const char *VAR_1)
{
  svn_string_t *VAR_2;

  if (!VAR_0)
    return ((void*)0);

  VAR_2 = FUNC_0((apr_hash_t *)VAR_0, VAR_1);

  if (VAR_2)
    return VAR_2->data;

  return ((void*)0);
}
