
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* path; int reason; int action; int * access; int kind; int node_kind; } ;
typedef TYPE_1__ svn_wc_conflict_description_t ;
typedef int svn_wc_adm_access_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

svn_wc_conflict_description_t *
FUNC_1(const char *VAR_4,
                                        svn_wc_adm_access_t *VAR_5,
                                        apr_pool_t *VAR_6)
{
  svn_wc_conflict_description_t *VAR_7;

  VAR_7 = FUNC_0(VAR_6, sizeof(*VAR_7));
  VAR_7->path = VAR_4;
  VAR_7->node_kind = VAR_0;
  VAR_7->kind = VAR_2;
  VAR_7->access = VAR_5;
  VAR_7->action = VAR_1;
  VAR_7->reason = VAR_3;
  return VAR_7;
}
