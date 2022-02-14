
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
typedef TYPE_1__ svn_mutex__t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 (scalar_t__,int ) ;

svn_error_t *
FUNC_4(svn_mutex__t **VAR_2,
                svn_boolean_t VAR_3,
                apr_pool_t *VAR_4)
{


  *VAR_2 = ((void*)0);

  if (VAR_3)
    {
      svn_mutex__t *VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5));
      *VAR_2 = VAR_5;
    }

  return VAR_1;
}
