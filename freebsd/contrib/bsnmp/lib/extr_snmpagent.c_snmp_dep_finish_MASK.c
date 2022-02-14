
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_context {int * dep; } ;
struct depend {int (* func ) (struct snmp_context*,int *,int ) ;int dep; } ;
struct context {int dlist; } ;


 int VAR_0 ;
 struct depend* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct depend*,int ) ;
 int FUNC_2 (struct depend*) ;
 int VAR_1 ;
 int FUNC_3 (struct snmp_context*,int *,int ) ;

void
FUNC_4(struct snmp_context *VAR_2)
{
 struct context *VAR_3 = (struct context *)VAR_2;
 struct depend *VAR_4;

 while ((VAR_4 = FUNC_0(&VAR_3->dlist)) != ((void*)0)) {
  VAR_2->dep = &VAR_4->dep;
  (void)VAR_4->func(VAR_2, VAR_2->dep, VAR_0);
  FUNC_1(&VAR_3->dlist, VAR_4, VAR_1);
  FUNC_2(VAR_4);
 }
}
