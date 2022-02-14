
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {TYPE_1__* repository; } ;
typedef TYPE_2__ server_baton_t ;
typedef enum access_type { ____Placeholder_access_type } access_type ;
typedef int apr_pool_t ;
struct TYPE_6__ {scalar_t__ use_sasl; } ;


 int * FUNC_0 (int *,int *,TYPE_2__*,int,int ) ;
 int * FUNC_1 (int *,int *,TYPE_2__*,int,int ) ;

__attribute__((used)) static svn_error_t *FUNC_2(svn_ra_svn_conn_t *VAR_0, apr_pool_t *VAR_1,
                                 server_baton_t *VAR_2, enum access_type VAR_3,
                                 svn_boolean_t VAR_4)
{





  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
