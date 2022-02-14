
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* expr; } ;
struct symbol {scalar_t__ type; int flags; TYPE_3__ rev_dep; struct property* prop; } ;
struct TYPE_8__ {struct expr* expr; } ;
struct property {scalar_t__ type; TYPE_4__ visible; int text; struct expr* expr; struct menu* menu; struct property* next; } ;
struct menu {struct property* prompt; struct menu* list; struct menu* next; struct menu* parent; struct symbol* sym; struct expr* dep; } ;
struct TYPE_6__ {struct symbol* sym; } ;
struct TYPE_5__ {struct expr* expr; } ;
struct expr {TYPE_2__ right; TYPE_1__ left; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct menu* VAR_11 ;
 void* FUNC_0 (struct expr*,struct expr*) ;
 struct expr* FUNC_1 (int ,struct symbol*,int *) ;
 struct expr* FUNC_2 (int ,int *) ;
 void* FUNC_3 (void*,void*) ;
 struct expr* FUNC_4 (struct symbol*) ;
 int FUNC_5 (struct expr*,struct symbol*) ;
 struct expr* FUNC_6 (struct expr*) ;
 scalar_t__ FUNC_7 (struct expr*,struct symbol*) ;
 struct expr* FUNC_8 (struct expr*) ;
 int FUNC_9 (struct expr**,struct expr**) ;
 int FUNC_10 (struct expr*) ;
 int FUNC_11 (struct expr*) ;
 struct expr* FUNC_12 (struct expr*) ;
 struct expr* FUNC_13 (struct expr*,int ,int *) ;
 struct expr* FUNC_14 (struct expr*) ;
 int FUNC_15 (int ,struct symbol*,int *) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (struct menu*,char*) ;
 struct symbol* FUNC_18 (struct property*) ;
 int FUNC_19 (struct property*,char*) ;
 int FUNC_20 (struct symbol*) ;
 struct property* FUNC_21 (struct symbol*) ;
 scalar_t__ FUNC_22 (struct symbol*) ;
 int FUNC_23 (struct symbol*) ;
 int FUNC_24 (struct symbol*) ;
 struct symbol VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_25(struct menu *VAR_15)
{
 struct menu *VAR_16, *VAR_17;
 struct symbol *VAR_18;
 struct property *VAR_19;
 struct expr *VAR_20, *VAR_21, *VAR_22, *VAR_23, **VAR_24;

 VAR_18 = VAR_15->sym;
 if (VAR_15->list) {
  if (VAR_18 && FUNC_22(VAR_18)) {
   if (VAR_18->type == VAR_10) {

    VAR_11 = VAR_15;
    for (VAR_16 = VAR_15->list; VAR_16; VAR_16 = VAR_16->next) {
     if (VAR_16->sym && VAR_16->sym->type != VAR_10) {
      FUNC_16(VAR_16->sym->type);
      break;
     }
    }
   }

   for (VAR_16 = VAR_15->list; VAR_16; VAR_16 = VAR_16->next) {
    VAR_11 = VAR_16;
    if (VAR_16->sym && VAR_16->sym->type == VAR_10)
     FUNC_16(VAR_18->type);
   }
   VAR_20 = FUNC_4(VAR_18);
  } else if (VAR_15->prompt)
   VAR_20 = VAR_15->prompt->visible.expr;
  else
   VAR_20 = VAR_15->dep;

  for (VAR_16 = VAR_15->list; VAR_16; VAR_16 = VAR_16->next) {
   VAR_21 = FUNC_14(VAR_16->dep);
   VAR_21 = FUNC_0(FUNC_6(VAR_20), VAR_21);
   VAR_21 = FUNC_8(VAR_21);
   VAR_16->dep = VAR_21;
   if (VAR_16->sym)
    VAR_19 = VAR_16->sym->prop;
   else
    VAR_19 = VAR_16->prompt;
   for (; VAR_19; VAR_19 = VAR_19->next) {
    if (VAR_19->menu != VAR_16)
     continue;
    VAR_22 = FUNC_14(VAR_19->visible.expr);
    VAR_22 = FUNC_0(FUNC_6(VAR_21), VAR_22);
    VAR_22 = FUNC_8(VAR_22);
    if (VAR_16->sym && VAR_16->sym->type != VAR_9)
     VAR_22 = FUNC_12(VAR_22);
    VAR_19->visible.expr = VAR_22;
    if (VAR_19->type == VAR_6) {
     struct symbol *VAR_25 = FUNC_18(VAR_19);
     VAR_25->rev_dep.expr = FUNC_3(VAR_25->rev_dep.expr,
       FUNC_0(FUNC_4(VAR_16->sym), FUNC_6(VAR_22)));
    }
   }
  }
  for (VAR_16 = VAR_15->list; VAR_16; VAR_16 = VAR_16->next)
   FUNC_25(VAR_16);
 } else if (VAR_18) {
  VAR_21 = VAR_15->prompt ? VAR_15->prompt->visible.expr : ((void*)0);
  VAR_21 = FUNC_13(VAR_21, VAR_2, &VAR_13);
  VAR_21 = FUNC_8(FUNC_14(VAR_21));
  VAR_17 = ((void*)0);
  for (VAR_16 = VAR_15->next; VAR_16; VAR_16 = VAR_16->next) {
   VAR_22 = VAR_16->prompt ? VAR_16->prompt->visible.expr : VAR_16->dep;
   if (!FUNC_5(VAR_22, VAR_18))
    break;
   if (FUNC_7(VAR_22, VAR_18))
    goto next;
   VAR_22 = FUNC_13(VAR_22, VAR_2, &VAR_13);
   VAR_22 = FUNC_8(FUNC_14(VAR_22));
   VAR_23 = FUNC_6(VAR_21);
   FUNC_9(&VAR_22, &VAR_23);
   FUNC_10(VAR_22);
   if (!FUNC_11(VAR_23)) {
    FUNC_10(VAR_23);
    break;
   }
   FUNC_10(VAR_23);
  next:
   FUNC_25(VAR_16);
   VAR_16->parent = VAR_15;
   VAR_17 = VAR_16;
  }
  if (VAR_17) {
   VAR_15->list = VAR_15->next;
   VAR_15->next = VAR_17->next;
   VAR_17->next = ((void*)0);
  }
 }
 for (VAR_16 = VAR_15->list; VAR_16; VAR_16 = VAR_16->next) {
  if (VAR_18 && FUNC_22(VAR_18) &&
      VAR_16->sym && !FUNC_23(VAR_16->sym)) {
   VAR_11 = VAR_16;
   VAR_16->sym->flags |= VAR_7;
   if (!VAR_16->prompt)
    FUNC_17(VAR_16, "choice value must have a prompt");
   for (VAR_19 = VAR_16->sym->prop; VAR_19; VAR_19 = VAR_19->next) {
    if (VAR_19->type == VAR_4)
     FUNC_19(VAR_19, "defaults for choice "
        "values not supported");
    if (VAR_19->menu == VAR_16)
     continue;
    if (VAR_19->type == VAR_5 &&
        VAR_19->menu->parent->sym != VAR_18)
     FUNC_19(VAR_19, "choice value used outside its choice group");
   }






   if (VAR_18->type == VAR_9 && VAR_16->sym->type != VAR_9) {
    VAR_21 = FUNC_1(VAR_0, VAR_18, &VAR_14);
    VAR_16->dep = FUNC_0(VAR_21, VAR_16->dep);
    for (VAR_19 = VAR_16->sym->prop; VAR_19; VAR_19 = VAR_19->next) {
     if (VAR_19->menu != VAR_16)
      continue;
     VAR_19->visible.expr = FUNC_0(FUNC_6(VAR_21),
             VAR_19->visible.expr);
    }
   }
   FUNC_15(VAR_3, VAR_18, ((void*)0));
   VAR_19 = FUNC_21(VAR_18);
   for (VAR_24 = &VAR_19->expr; *VAR_24; VAR_24 = &(*VAR_24)->left.expr)
    ;
   *VAR_24 = FUNC_2(VAR_1, ((void*)0));
   (*VAR_24)->right.sym = VAR_16->sym;
  }
  if (VAR_16->list && (!VAR_16->prompt || !VAR_16->prompt->text)) {
   for (VAR_17 = VAR_16->list; ; VAR_17 = VAR_17->next) {
    VAR_17->parent = VAR_15;
    if (!VAR_17->next)
     break;
   }
   VAR_17->next = VAR_16->next;
   VAR_16->next = VAR_16->list;
   VAR_16->list = ((void*)0);
  }
 }

 if (VAR_18 && !(VAR_18->flags & VAR_8)) {
  if (VAR_18->type == VAR_10)
   FUNC_17(VAR_15, "config symbol defined without type");

  if (FUNC_22(VAR_18) && !VAR_15->prompt)
   FUNC_17(VAR_15, "choice must have a prompt");


  FUNC_20(VAR_18);
  VAR_18->flags |= VAR_8;
 }

 if (VAR_18 && !FUNC_24(VAR_18) && VAR_15->prompt) {
  VAR_18->rev_dep.expr = FUNC_3(VAR_18->rev_dep.expr,
    FUNC_0(VAR_15->prompt->visible.expr,
     FUNC_4(&VAR_12)));
 }
}
