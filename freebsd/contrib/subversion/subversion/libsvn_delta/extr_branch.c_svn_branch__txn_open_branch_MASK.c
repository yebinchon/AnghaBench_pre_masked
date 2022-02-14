
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_branch__txn_t ;
typedef int svn_branch__state_t ;
typedef int svn_branch__rev_bid_eid_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* open_branch ) (TYPE_2__*,int **,char const*,int,int *,int *,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_2__*,int **,char const*,int,int *,int *,int *) ;

svn_error_t *
FUNC_2(svn_branch__txn_t *VAR_1,
                            svn_branch__state_t **VAR_2,
                            const char *VAR_3,
                            int VAR_4,
                            svn_branch__rev_bid_eid_t *VAR_5,
                            apr_pool_t *VAR_6,
                            apr_pool_t *VAR_7)
{
  FUNC_0(VAR_1->vtable->open_branch(VAR_1,
                                   VAR_2,
                                   VAR_3,
                                   VAR_4, VAR_5, VAR_6,
                                   VAR_7));
  return VAR_0;
}
