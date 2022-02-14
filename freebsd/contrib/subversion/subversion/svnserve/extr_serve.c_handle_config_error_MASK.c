
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int server_baton_t ;
typedef scalar_t__ apr_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (scalar_t__,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_error_t *VAR_2,
                    server_baton_t *VAR_3)
{
  if ( VAR_2
      && ( VAR_2->apr_err == VAR_1
          || VAR_2->apr_err == VAR_0))
    {
      apr_status_t VAR_4 = VAR_2->apr_err;
      FUNC_0(VAR_2, VAR_3);




      FUNC_1(VAR_2);
      return FUNC_2(VAR_4, ((void*)0), ((void*)0));
    }

  return VAR_2;
}
