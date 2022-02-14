
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct ypmatch_ent {scalar_t__ ypc_expire_t; struct ypmatch_ent* ypc_next; } ;
struct dom_binding {struct ypmatch_ent* cache; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct dom_binding*,struct ypmatch_ent*,struct ypmatch_ent*) ;

__attribute__((used)) static void
FUNC_2(struct dom_binding *VAR_0)
{
 struct ypmatch_ent *VAR_1 = VAR_0->cache;
 struct ypmatch_ent *VAR_2, *VAR_3 = ((void*)0);
 time_t VAR_4;

 FUNC_0(&VAR_4);

 while (VAR_1 != ((void*)0)) {
  if (VAR_4 >= VAR_1->ypc_expire_t) {
   VAR_2 = VAR_1->ypc_next;
   FUNC_1(VAR_0, VAR_3, VAR_1);
   VAR_1 = VAR_2;
  } else {
   VAR_3 = VAR_1;
   VAR_1 = VAR_1->ypc_next;
  }
 }

 return;
}
