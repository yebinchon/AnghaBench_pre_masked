
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* path; char const* property_name; int * access; int kind; int node_kind; } ;
typedef TYPE_1__ svn_wc_conflict_description_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_node_kind_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;

svn_wc_conflict_description_t *
FUNC_1(const char *VAR_1,
                                        svn_wc_adm_access_t *VAR_2,
                                        svn_node_kind_t VAR_3,
                                        const char *VAR_4,
                                        apr_pool_t *VAR_5)
{
  svn_wc_conflict_description_t *VAR_6;

  VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6));
  VAR_6->path = VAR_1;
  VAR_6->node_kind = VAR_3;
  VAR_6->kind = VAR_0;
  VAR_6->access = VAR_2;
  VAR_6->property_name = VAR_4;
  return VAR_6;
}
