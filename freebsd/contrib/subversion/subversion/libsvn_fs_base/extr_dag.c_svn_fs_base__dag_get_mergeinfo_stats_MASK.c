
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {int mergeinfo_count; int has_mergeinfo; } ;
typedef TYPE_1__ node_revision_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__**,int *,int const*,int *,int *) ;

svn_error_t *
FUNC_4(svn_boolean_t *VAR_1,
                                     apr_int64_t *VAR_2,
                                     dag_node_t *VAR_3,
                                     trail_t *VAR_4,
                                     apr_pool_t *VAR_5)
{
  node_revision_t *VAR_6;
  svn_fs_t *VAR_7 = FUNC_1(VAR_3);
  const svn_fs_id_t *VAR_8 = FUNC_2(VAR_3);

  FUNC_0(FUNC_3(&VAR_6, VAR_7, VAR_8, VAR_4, VAR_5));
  if (VAR_1)
    *VAR_1 = VAR_6->has_mergeinfo;
  if (VAR_2)
    *VAR_2 = VAR_6->mergeinfo_count;
  return VAR_0;
}
