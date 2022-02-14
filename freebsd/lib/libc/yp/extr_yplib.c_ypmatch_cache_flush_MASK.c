
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ypmatch_ent {struct ypmatch_ent* ypc_next; } ;
struct dom_binding {struct ypmatch_ent* cache; } ;


 int FUNC_0 (struct dom_binding*,int *,struct ypmatch_ent*) ;

__attribute__((used)) static void
FUNC_1(struct dom_binding *VAR_0)
{
 struct ypmatch_ent *VAR_1, *VAR_2 = VAR_0->cache;

 while (VAR_2 != ((void*)0)) {
  VAR_1 = VAR_2->ypc_next;
  FUNC_0(VAR_0, ((void*)0), VAR_2);
  VAR_2 = VAR_1;
 }

 return;
}
