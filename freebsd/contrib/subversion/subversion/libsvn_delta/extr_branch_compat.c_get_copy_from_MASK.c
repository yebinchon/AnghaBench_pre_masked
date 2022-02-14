
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int rev; int * relpath; } ;
typedef TYPE_3__ svn_pathrev_t ;
typedef int svn_error_t ;
struct TYPE_11__ {scalar_t__ branch_id; } ;
struct TYPE_14__ {TYPE_1__ branch_ref; } ;
typedef TYPE_4__ svn_element__payload_t ;
struct TYPE_15__ {TYPE_2__* txn; } ;
typedef TYPE_5__ svn_branch__txn_priv_t ;
typedef int apr_pool_t ;
struct TYPE_12__ {int repos; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_pathrev_t *VAR_2,
              svn_element__payload_t *VAR_3,
              svn_branch__txn_priv_t *VAR_4,
              apr_pool_t *VAR_5)
{
  if (VAR_3->branch_ref.branch_id)
    {
      FUNC_0(FUNC_1(VAR_2, VAR_3,
                                          VAR_4->txn->repos,
                                          VAR_5));
    }
  else
    {
      VAR_2->relpath = ((void*)0);
      VAR_2->rev = VAR_0;
    }

  return VAR_1;
}
