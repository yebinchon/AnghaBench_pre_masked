
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int relpath; int rev; } ;
typedef TYPE_1__ svn_pathrev_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int eid; int branch_id; int rev; } ;
typedef TYPE_2__ svn_element__branch_ref_t ;
typedef int svn_branch__repos_t ;
struct TYPE_9__ {int eid; int branch; int rev; } ;
typedef TYPE_3__ svn_branch__el_rev_id_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (TYPE_3__**,int *,int ,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_pathrev_t *VAR_1,
                                svn_element__branch_ref_t VAR_2,
                                svn_branch__repos_t *VAR_3,
                                apr_pool_t *VAR_4,
                                apr_pool_t *VAR_5)
{
  svn_branch__el_rev_id_t *VAR_6;

  FUNC_0(FUNC_2(&VAR_6,
                                              VAR_3,
                                              VAR_2.rev,
                                              VAR_2.branch_id,
                                              VAR_2.eid,
                                              VAR_5, VAR_5));

  VAR_1->rev = VAR_6->rev;
  VAR_1->relpath
    = FUNC_1(VAR_6->branch, VAR_6->eid,
                                       VAR_4);

  return VAR_0;
}
