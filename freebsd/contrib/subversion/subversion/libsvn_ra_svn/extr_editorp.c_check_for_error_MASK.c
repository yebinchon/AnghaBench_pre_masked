
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {TYPE_1__* conn; } ;
typedef TYPE_2__ ra_svn_edit_baton_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {scalar_t__ may_check_for_error; } ;


 int * VAR_0 ;
 int * FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(ra_svn_edit_baton_t *VAR_1, apr_pool_t *VAR_2)
{
  return VAR_1->conn->may_check_for_error
    ? FUNC_0(VAR_1, VAR_2)
    : VAR_0;
}
