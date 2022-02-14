
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc_operation_t ;
typedef int svn_wc_conflict_version_t ;
struct TYPE_4__ {void* src_right_version; void* src_left_version; int operation; int kind; int node_kind; int local_abspath; } ;
typedef TYPE_1__ svn_wc_conflict_description2_t ;
typedef int svn_node_kind_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*) ;
 int VAR_0 ;
 void* FUNC_4 (int const*,int *) ;

svn_wc_conflict_description2_t *
FUNC_5(
  const char *VAR_1,
  svn_node_kind_t VAR_2,
  svn_wc_operation_t VAR_3,
  const svn_wc_conflict_version_t *VAR_4,
  const svn_wc_conflict_version_t *VAR_5,
  apr_pool_t *VAR_6)
{
  svn_wc_conflict_description2_t *VAR_7;

  FUNC_0(FUNC_3(VAR_1));

  VAR_7 = FUNC_1(VAR_6, sizeof(*VAR_7));
  VAR_7->local_abspath = FUNC_2(VAR_6, VAR_1);
  VAR_7->node_kind = VAR_2;
  VAR_7->kind = VAR_0;
  VAR_7->operation = VAR_3;
  VAR_7->src_left_version = FUNC_4(VAR_4,
                                                           VAR_6);
  VAR_7->src_right_version = FUNC_4(VAR_5,
                                                            VAR_6);
  return VAR_7;
}
