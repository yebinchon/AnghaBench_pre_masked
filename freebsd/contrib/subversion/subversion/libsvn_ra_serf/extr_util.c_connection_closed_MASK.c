
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * ssl_context; TYPE_1__* session; } ;
typedef TYPE_2__ svn_ra_serf__connection_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {scalar_t__ using_ssl; } ;


 int * VAR_0 ;
 int * FUNC_0 (scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_ra_serf__connection_t *VAR_1,
                  apr_status_t VAR_2,
                  apr_pool_t *VAR_3)
{
  if (VAR_2)
    {
      return FUNC_0(VAR_2, ((void*)0));
    }

  if (VAR_1->session->using_ssl)
    VAR_1->ssl_context = ((void*)0);

  return VAR_0;
}
