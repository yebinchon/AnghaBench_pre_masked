
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_node_kind_t ;
typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
struct TYPE_5__ {scalar_t__ kind; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (TYPE_1__*,char const*,int const*,int ,int const*,int *) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;

svn_error_t *
FUNC_4(dag_node_t *VAR_3,
                         const char *VAR_4,
                         const svn_fs_id_t *VAR_5,
                         svn_node_kind_t VAR_6,
                         const svn_fs_fs__id_part_t *VAR_7,
                         apr_pool_t *VAR_8)
{

  if (VAR_3->kind != VAR_2)
    return FUNC_2
      (VAR_0, ((void*)0),
       FUNC_0("Attempted to set entry in non-directory node"));


  if (! FUNC_3(VAR_3))
    return FUNC_2
      (VAR_1, ((void*)0),
       FUNC_0("Attempted to set entry in immutable node"));

  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
