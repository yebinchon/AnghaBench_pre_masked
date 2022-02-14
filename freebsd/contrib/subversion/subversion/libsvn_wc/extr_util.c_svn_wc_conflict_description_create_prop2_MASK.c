
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* property_name; int kind; int node_kind; void* local_abspath; } ;
typedef TYPE_1__ svn_wc_conflict_description2_t ;
typedef int svn_node_kind_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*) ;
 int VAR_0 ;

svn_wc_conflict_description2_t *
FUNC_4(const char *VAR_1,
                                         svn_node_kind_t VAR_2,
                                         const char *VAR_3,
                                         apr_pool_t *VAR_4)
{
  svn_wc_conflict_description2_t *VAR_5;

  FUNC_0(FUNC_3(VAR_1));

  VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5));
  VAR_5->local_abspath = FUNC_2(VAR_4, VAR_1);
  VAR_5->node_kind = VAR_2;
  VAR_5->kind = VAR_0;
  VAR_5->property_name = FUNC_2(VAR_4, VAR_3);
  return VAR_5;
}
