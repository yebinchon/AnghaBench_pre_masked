
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

svn_error_t *
FUNC_3(svn_error_t *VAR_2)
{
  if (VAR_2
      && (VAR_2->apr_err == VAR_1 ||
          VAR_2->apr_err == VAR_0))
    {


      VAR_2 = FUNC_1
        (VAR_2, FUNC_0("Use --force to override this restriction (local modifications "
         "may be lost)"));
    }

  return FUNC_2(VAR_2);
}
