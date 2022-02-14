
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_pathrev_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int branch_id; } ;
struct TYPE_4__ {TYPE_2__ branch_ref; } ;
typedef TYPE_1__ svn_element__payload_t ;
typedef int svn_branch__repos_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int *,TYPE_2__,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_pathrev_t *VAR_1,
                            svn_element__payload_t *VAR_2,
                            svn_branch__repos_t *VAR_3,
                            apr_pool_t *VAR_4)
{
  FUNC_1(VAR_2->branch_ref.branch_id );

  FUNC_0(FUNC_2(VAR_1,
                                          VAR_2->branch_ref, VAR_3,
                                          VAR_4, VAR_4));
  return VAR_0;
}
