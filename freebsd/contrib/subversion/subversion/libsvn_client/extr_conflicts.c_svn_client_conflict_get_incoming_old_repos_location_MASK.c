
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_client_conflict_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {TYPE_1__* src_left_version; } ;
struct TYPE_3__ {char* path_in_repos; int node_kind; int peg_rev; } ;


 int VAR_0 ;
 int * VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;
 int VAR_2 ;

svn_error_t *
FUNC_1(
  const char **VAR_3,
  svn_revnum_t *VAR_4,
  svn_node_kind_t *VAR_5,
  svn_client_conflict_t *VAR_6,
  apr_pool_t *VAR_7,
  apr_pool_t *VAR_8)
{
  if (VAR_3)
    {
      if (FUNC_0(VAR_6)->src_left_version)
        *VAR_3 =
          FUNC_0(VAR_6)->src_left_version->path_in_repos;
      else
        *VAR_3 = ((void*)0);
    }

  if (VAR_4)
    {
      if (FUNC_0(VAR_6)->src_left_version)
        *VAR_4 =
          FUNC_0(VAR_6)->src_left_version->peg_rev;
      else
        *VAR_4 = VAR_0;
    }

  if (VAR_5)
    {
      if (FUNC_0(VAR_6)->src_left_version)
        *VAR_5 =
          FUNC_0(VAR_6)->src_left_version->node_kind;
      else
        *VAR_5 = VAR_2;
    }

  return VAR_1;
}
