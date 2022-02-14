
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ parameters; scalar_t__ slave_parameters; } ;
typedef TYPE_1__ svn_auth_baton_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char const*,void const*) ;

void
FUNC_1(svn_auth_baton_t *VAR_1,
                       const char *VAR_2,
                       const void *VAR_3)
{
  if (VAR_1)
    {
      if (VAR_1->slave_parameters)
        {
          if (!VAR_3)
            VAR_3 = &VAR_0;

          FUNC_0(VAR_1->slave_parameters, VAR_2, VAR_3);
        }
      else
        FUNC_0(VAR_1->parameters, VAR_2, VAR_3);
    }
}
