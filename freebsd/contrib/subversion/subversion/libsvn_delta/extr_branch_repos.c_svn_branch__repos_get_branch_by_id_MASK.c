
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_branch__txn_t ;
typedef int svn_branch__state_t ;
struct TYPE_6__ {TYPE_1__* rev_roots; } ;
typedef TYPE_2__ svn_branch__repos_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {scalar_t__ nelts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (TYPE_2__ const*,scalar_t__) ;
 int * FUNC_2 (int *,char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,char const*,...) ;

svn_error_t *
FUNC_4(svn_branch__state_t **VAR_3,
                                   const svn_branch__repos_t *VAR_4,
                                   svn_revnum_t VAR_5,
                                   const char *VAR_6,
                                   apr_pool_t *VAR_7)
{
  svn_branch__txn_t *VAR_8;

  if (VAR_5 < 0 || VAR_5 >= VAR_4->rev_roots->nelts)
    return FUNC_3(VAR_1, ((void*)0),
                             FUNC_0("No such revision %ld"), VAR_5);

  VAR_8 = FUNC_1(VAR_4, VAR_5);
  *VAR_3 = FUNC_2(VAR_8, VAR_6,
                                               VAR_7);
  if (! *VAR_3)
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_0("Branch %s not found in r%ld"),
                             VAR_6, VAR_5);
  return VAR_2;
}
