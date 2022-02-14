
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reason; int action; int kind; int node_kind; int local_abspath; } ;
typedef TYPE_1__ svn_wc_conflict_description2_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

svn_wc_conflict_description2_t *
FUNC_4(const char *VAR_4,
                                         apr_pool_t *VAR_5)
{
  svn_wc_conflict_description2_t *VAR_6;

  FUNC_0(FUNC_3(VAR_4));

  VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6));
  VAR_6->local_abspath = FUNC_2(VAR_5, VAR_4);
  VAR_6->node_kind = VAR_0;
  VAR_6->kind = VAR_2;
  VAR_6->action = VAR_1;
  VAR_6->reason = VAR_3;
  return VAR_6;
}
