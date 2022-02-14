
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccdata {scalar_t__ cookie; struct cc_funcs const* funcs; int free_sigs; int def_sigs; int sigs; int orphaned_conns; int port_list; int user_list; } ;
struct cc_funcs {int dummy; } ;


 struct ccdata* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct ccdata *
FUNC_3(const struct cc_funcs *VAR_0)
{
 struct ccdata *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  return (((void*)0));

 FUNC_1(&VAR_1->user_list);
 FUNC_2(&VAR_1->port_list);
 FUNC_1(&VAR_1->orphaned_conns);
 FUNC_2(&VAR_1->sigs);
 FUNC_2(&VAR_1->def_sigs);
 FUNC_2(&VAR_1->free_sigs);
 VAR_1->funcs = VAR_0;
 VAR_1->cookie = 0;

 return (VAR_1);
}
