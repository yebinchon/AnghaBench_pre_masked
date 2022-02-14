
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct ypmatch_ent* valdat_val; } ;
struct TYPE_3__ {struct ypmatch_ent* keydat_val; } ;
struct ypmatch_ent {TYPE_2__ ypc_val; TYPE_1__ ypc_key; struct ypmatch_ent* ypc_map; int ypc_next; } ;
struct dom_binding {int ypmatch_cachecnt; int cache; } ;


 int FUNC_0 (struct ypmatch_ent*) ;

__attribute__((used)) static void
FUNC_1(struct dom_binding *VAR_0, struct ypmatch_ent *VAR_1,
    struct ypmatch_ent *VAR_2)
{
 if (VAR_1 == ((void*)0))
  VAR_0->cache = VAR_2->ypc_next;
 else
  VAR_1->ypc_next = VAR_2->ypc_next;

 FUNC_0(VAR_2->ypc_map);
 FUNC_0(VAR_2->ypc_key.keydat_val);
 FUNC_0(VAR_2->ypc_val.valdat_val);
 FUNC_0(VAR_2);

 VAR_0->ypmatch_cachecnt--;

 return;
}
