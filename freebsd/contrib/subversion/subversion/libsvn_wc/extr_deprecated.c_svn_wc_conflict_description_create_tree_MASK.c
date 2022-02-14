
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc_operation_t ;
typedef int svn_wc_conflict_version_t ;
struct TYPE_4__ {char const* path; int * src_right_version; int * src_left_version; int operation; int * access; int kind; int node_kind; } ;
typedef TYPE_1__ svn_wc_conflict_description_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_node_kind_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;

svn_wc_conflict_description_t *
FUNC_1(
                            const char *VAR_1,
                            svn_wc_adm_access_t *VAR_2,
                            svn_node_kind_t VAR_3,
                            svn_wc_operation_t VAR_4,
                            svn_wc_conflict_version_t *VAR_5,
                            svn_wc_conflict_version_t *VAR_6,
                            apr_pool_t *VAR_7)
{
  svn_wc_conflict_description_t *VAR_8;

  VAR_8 = FUNC_0(VAR_7, sizeof(*VAR_8));
  VAR_8->path = VAR_1;
  VAR_8->node_kind = VAR_3;
  VAR_8->kind = VAR_0;
  VAR_8->access = VAR_2;
  VAR_8->operation = VAR_4;
  VAR_8->src_left_version = VAR_5;
  VAR_8->src_right_version = VAR_6;
  return VAR_8;
}
