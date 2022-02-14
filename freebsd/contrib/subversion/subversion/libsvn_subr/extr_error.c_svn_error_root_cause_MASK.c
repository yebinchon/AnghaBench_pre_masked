
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* child; } ;
typedef TYPE_1__ svn_error_t ;



svn_error_t *
FUNC_0(svn_error_t *VAR_0)
{
  while (VAR_0)
    {



      if (VAR_0->child )
        VAR_0 = VAR_0->child;
      else
        break;
    }

  return VAR_0;
}
