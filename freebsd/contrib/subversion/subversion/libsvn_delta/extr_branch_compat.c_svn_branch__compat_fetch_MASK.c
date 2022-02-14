
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_pathrev_t ;
typedef int svn_error_t ;
struct TYPE_13__ {scalar_t__ rev; scalar_t__ eid; } ;
struct TYPE_12__ {TYPE_2__ branch_ref; } ;
typedef TYPE_1__ svn_element__payload_t ;
typedef TYPE_2__ svn_element__branch_ref_t ;
struct TYPE_14__ {int repos; } ;
typedef TYPE_3__ svn_branch__txn_t ;
struct TYPE_15__ {void* fetch_baton; int fetch_func; TYPE_3__* txn; } ;
typedef TYPE_4__ svn_branch__txn_priv_t ;
typedef int svn_branch__compat_fetch_func_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__**,int *,TYPE_4__*,int *,int *,int *) ;
 int FUNC_3 (int *,TYPE_2__,int ,int *,int *) ;
 TYPE_1__* FUNC_4 (int ,int *) ;

svn_error_t *
FUNC_5(svn_element__payload_t **VAR_1,
                         svn_branch__txn_t *VAR_2,
                         svn_element__branch_ref_t VAR_3,
                         svn_branch__compat_fetch_func_t VAR_4,
                         void *VAR_5,
                         apr_pool_t *VAR_6,
                         apr_pool_t *VAR_7)
{
  svn_branch__txn_priv_t VAR_8;
  svn_pathrev_t VAR_9;


  if (VAR_3.rev == 0 && VAR_3.eid == 0)
    {
      *VAR_1 = FUNC_4(FUNC_1(VAR_6),
                                                   VAR_6);
      return VAR_0;
    }

  VAR_8.txn = VAR_2;
  VAR_8.fetch_func = VAR_4;
  VAR_8.fetch_baton = VAR_5;

  FUNC_0(FUNC_3(&VAR_9,
                                          VAR_3, VAR_2->repos,
                                          VAR_7, VAR_7));

  FUNC_0(FUNC_2(VAR_1, ((void*)0),
                        &VAR_8, &VAR_9, VAR_6, VAR_7));
  (*VAR_1)->branch_ref = VAR_3;
  return VAR_0;
}
