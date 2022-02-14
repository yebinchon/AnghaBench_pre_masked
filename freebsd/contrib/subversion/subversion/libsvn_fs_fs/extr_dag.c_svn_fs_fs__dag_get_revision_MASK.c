
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int * id; int * fresh_root_predecessor_id; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int const*) ;

svn_error_t *
FUNC_1(svn_revnum_t *VAR_1,
                            dag_node_t *VAR_2,
                            apr_pool_t *VAR_3)
{



  const svn_fs_id_t *VAR_4 = VAR_2->fresh_root_predecessor_id
    ? VAR_2->fresh_root_predecessor_id : VAR_2->id;


  *VAR_1 = FUNC_0(VAR_4);

  return VAR_0;
}
