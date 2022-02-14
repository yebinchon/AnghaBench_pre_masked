
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state_pool; } ;
typedef TYPE_1__ svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,int ) ;
 int VAR_2 ;
 int * FUNC_1 (scalar_t__,int *) ;

svn_error_t *
FUNC_2(svn_sqlite__db_t *VAR_3)
{
  apr_status_t VAR_4 = FUNC_0(VAR_3->state_pool, VAR_3, VAR_2);

  if (VAR_4 == VAR_0)
    return VAR_1;

  return FUNC_1(VAR_4, ((void*)0));
}
