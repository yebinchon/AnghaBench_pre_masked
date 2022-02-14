
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int rev; int relpath; } ;
typedef TYPE_2__ svn_pathrev_t ;
typedef int svn_error_t ;
struct TYPE_13__ {int pool; int text; int props; int kind; } ;
typedef TYPE_3__ svn_element__payload_t ;
struct TYPE_14__ {int fetch_baton; int (* fetch_func ) (int *,int *,int *,int *,int ,int ,int ,int ,int *) ;TYPE_1__* txn; } ;
typedef TYPE_4__ svn_branch__txn_priv_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {int repos; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int * VAR_0 ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int ,int *) ;
 int FUNC_4 (int *,int *,int *,int *,int ,int ,int ,int ,int *) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_element__payload_t *VAR_1,
                svn_branch__txn_priv_t *VAR_2,
                apr_pool_t *VAR_3)
{
  svn_pathrev_t VAR_4;

  FUNC_2(FUNC_5(VAR_1));

  if (! FUNC_0(VAR_1))
    return VAR_0;

  FUNC_1(FUNC_3(&VAR_4, VAR_1,
                                      VAR_2->txn->repos,
                                      VAR_3));

  FUNC_1(VAR_2->fetch_func(&VAR_1->kind,
                         &VAR_1->props,
                         &VAR_1->text,
                         ((void*)0),
                         VAR_2->fetch_baton,
                         VAR_4.relpath, VAR_4.rev,
                         VAR_1->pool, VAR_3));

  FUNC_2(FUNC_5(VAR_1));
  FUNC_2(! FUNC_0(VAR_1));
  return VAR_0;
}
