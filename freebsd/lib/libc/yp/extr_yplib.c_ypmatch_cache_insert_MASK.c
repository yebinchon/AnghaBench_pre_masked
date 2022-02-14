
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int valdat_len; int valdat_val; } ;
typedef TYPE_3__ valdat ;
typedef scalar_t__ time_t ;
struct TYPE_8__ {int valdat_len; struct ypmatch_ent* valdat_val; } ;
struct TYPE_7__ {int keydat_len; struct ypmatch_ent* keydat_val; } ;
struct ypmatch_ent {struct ypmatch_ent* ypc_next; TYPE_2__ ypc_val; TYPE_1__ ypc_key; scalar_t__ ypc_expire_t; struct ypmatch_ent* ypc_map; } ;
struct dom_binding {scalar_t__ ypmatch_cachecnt; struct ypmatch_ent* cache; } ;
struct TYPE_10__ {int keydat_len; int keydat_val; } ;
typedef TYPE_4__ keydat ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct ypmatch_ent*,int) ;
 int FUNC_1 (struct ypmatch_ent*) ;
 void* FUNC_2 (int) ;
 struct ypmatch_ent* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct dom_binding*) ;

__attribute__((used)) static void
FUNC_6(struct dom_binding *VAR_2, char *VAR_3, keydat *VAR_4,
    valdat *VAR_5)
{
 struct ypmatch_ent *VAR_6;


 if (VAR_2->ypmatch_cachecnt)
  FUNC_5(VAR_2);





 if (VAR_2->ypmatch_cachecnt >= VAR_1) {
  struct ypmatch_ent *VAR_7 = ((void*)0), *VAR_8 = VAR_2->cache;
  time_t VAR_9 = 0;

  VAR_9 = ~VAR_9;

  while (VAR_8 != ((void*)0)) {
   if (VAR_8->ypc_expire_t < VAR_9) {
    VAR_9 = VAR_8->ypc_expire_t;
    VAR_7 = VAR_8;
   }
   VAR_8 = VAR_8->ypc_next;
  }

  if (VAR_7 == ((void*)0))
   return;
  VAR_7->ypc_expire_t = 0;
  FUNC_5(VAR_2);
 }

 VAR_6 = FUNC_2(sizeof(struct ypmatch_ent));
 if (VAR_6 == ((void*)0))
  return;

 VAR_6->ypc_map = FUNC_3(VAR_3);
 if (VAR_6->ypc_map == ((void*)0)) {
  FUNC_1(VAR_6);
  return;
 }
 VAR_6->ypc_key.keydat_val = FUNC_2(VAR_4->keydat_len);
 if (VAR_6->ypc_key.keydat_val == ((void*)0)) {
  FUNC_1(VAR_6->ypc_map);
  FUNC_1(VAR_6);
  return;
 }
 VAR_6->ypc_val.valdat_val = FUNC_2(VAR_5->valdat_len);
 if (VAR_6->ypc_val.valdat_val == ((void*)0)) {
  FUNC_1(VAR_6->ypc_val.valdat_val);
  FUNC_1(VAR_6->ypc_map);
  FUNC_1(VAR_6);
  return;
 }

 VAR_6->ypc_expire_t = FUNC_4(((void*)0)) + VAR_0;
 VAR_6->ypc_key.keydat_len = VAR_4->keydat_len;
 VAR_6->ypc_val.valdat_len = VAR_5->valdat_len;
 FUNC_0(VAR_4->keydat_val, VAR_6->ypc_key.keydat_val, VAR_4->keydat_len);
 FUNC_0(VAR_5->valdat_val, VAR_6->ypc_val.valdat_val, VAR_5->valdat_len);

 VAR_6->ypc_next = VAR_2->cache;
 VAR_2->cache = VAR_6;

 VAR_2->ypmatch_cachecnt++;

 return;
}
