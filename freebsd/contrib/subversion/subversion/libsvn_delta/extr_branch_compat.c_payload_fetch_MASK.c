
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int rev; int relpath; } ;
typedef TYPE_1__ svn_pathrev_t ;
typedef int svn_error_t ;
struct TYPE_10__ {scalar_t__ kind; int text; int props; } ;
typedef TYPE_2__ svn_element__payload_t ;
struct TYPE_11__ {int fetch_baton; int (* fetch_func ) (scalar_t__*,int *,int *,int **,int ,int ,int ,int *,int *) ;} ;
typedef TYPE_3__ svn_branch__txn_priv_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 TYPE_2__* FUNC_2 (int *,int) ;
 int FUNC_3 (scalar_t__*,int *,int *,int **,int ,int ,int ,int *,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_element__payload_t **VAR_3,
              apr_hash_t **VAR_4,
              svn_branch__txn_priv_t *VAR_5,
              const svn_pathrev_t *VAR_6,
              apr_pool_t *VAR_7,
              apr_pool_t *VAR_8)
{
  svn_element__payload_t *VAR_9
    = FUNC_2(VAR_7, sizeof (*VAR_9));

  FUNC_0(VAR_5->fetch_func(&VAR_9->kind,
                         &VAR_9->props,
                         &VAR_9->text,
                         VAR_4,
                         VAR_5->fetch_baton,
                         VAR_6->relpath, VAR_6->rev,
                         VAR_7, VAR_8));

  FUNC_1(FUNC_4(VAR_9));
  FUNC_1(VAR_9->kind == VAR_1
                 || VAR_9->kind == VAR_2);
  if (VAR_3)
    *VAR_3 = VAR_9;
  return VAR_0;
}
