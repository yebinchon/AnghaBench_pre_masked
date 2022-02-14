
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t apr_size_t ;
struct TYPE_4__ {int optch; } ;
typedef TYPE_1__ apr_getopt_option_t ;



const apr_getopt_option_t *
FUNC_0(int VAR_0,
                             const apr_getopt_option_t *VAR_1)
{
  apr_size_t VAR_2;

  for (VAR_2 = 0; VAR_1[VAR_2].optch; VAR_2++)
    if (VAR_1[VAR_2].optch == VAR_0)
      return &(VAR_1[VAR_2]);

  return ((void*)0);
}
