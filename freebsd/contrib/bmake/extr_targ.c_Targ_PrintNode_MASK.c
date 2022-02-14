
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int cohort_num; int flags; int type; scalar_t__ made; int unmade; scalar_t__ mtime; int cohorts; int commands; int children; int order_succ; int order_pred; int parents; int iParents; } ;
typedef TYPE_1__ GNode ;


 int FUNC_0 (int ,int (*) (void*,void*),int*) ;
 int FUNC_1 (int ) ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (void*,void*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (void*,void*) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,char*,...) ;
 char* FUNC_8 (scalar_t__) ;
 TYPE_1__* VAR_7 ;

int
FUNC_9(void *VAR_8, void *VAR_9)
{
    GNode *VAR_10 = (GNode *)VAR_8;
    int VAR_11 = VAR_9 ? *(int *)VAR_9 : 0;

    FUNC_7(VAR_6, "# %s%d, flags %x, type %x, made %ld\n",
     VAR_10->name, VAR_10->cohort_num, VAR_10->flags, VAR_10->type, VAR_10->made);
    if (VAR_10->flags == 0)
 return 0;

    if (!FUNC_2(VAR_10->type)) {
 FUNC_7(VAR_6, "#\n");
 if (VAR_10 == VAR_7) {
     FUNC_7(VAR_6, "# *** MAIN TARGET ***\n");
 }
 if (VAR_11 >= 2) {
     if (VAR_10->unmade) {
  FUNC_7(VAR_6, "# %d unmade children\n", VAR_10->unmade);
     } else {
  FUNC_7(VAR_6, "# No unmade children\n");
     }
     if (! (VAR_10->type & (VAR_1|VAR_3|VAR_4|VAR_0))) {
  if (VAR_10->mtime != 0) {
      FUNC_7(VAR_6, "# last modified %s: %s\n",
         FUNC_4(VAR_10->mtime),
         FUNC_8(VAR_10->made));
  } else if (VAR_10->made != VAR_5) {
      FUNC_7(VAR_6, "# non-existent (maybe): %s\n",
         FUNC_8(VAR_10->made));
  } else {
      FUNC_7(VAR_6, "# unmade\n");
  }
     }
     if (!FUNC_1 (VAR_10->iParents)) {
  FUNC_7(VAR_6, "# implicit parents: ");
  FUNC_0(VAR_10->iParents, FUNC_3, ((void*)0));
  FUNC_7(VAR_6, "\n");
     }
 } else {
     if (VAR_10->unmade)
  FUNC_7(VAR_6, "# %d unmade children\n", VAR_10->unmade);
 }
 if (!FUNC_1 (VAR_10->parents)) {
     FUNC_7(VAR_6, "# parents: ");
     FUNC_0(VAR_10->parents, FUNC_3, ((void*)0));
     FUNC_7(VAR_6, "\n");
 }
 if (!FUNC_1 (VAR_10->order_pred)) {
     FUNC_7(VAR_6, "# order_pred: ");
     FUNC_0(VAR_10->order_pred, FUNC_3, ((void*)0));
     FUNC_7(VAR_6, "\n");
 }
 if (!FUNC_1 (VAR_10->order_succ)) {
     FUNC_7(VAR_6, "# order_succ: ");
     FUNC_0(VAR_10->order_succ, FUNC_3, ((void*)0));
     FUNC_7(VAR_6, "\n");
 }

 FUNC_7(VAR_6, "%-16s", VAR_10->name);
 switch (VAR_10->type & VAR_2) {
     case 130:
  FUNC_7(VAR_6, ": "); break;
     case 128:
  FUNC_7(VAR_6, "! "); break;
     case 129:
  FUNC_7(VAR_6, ":: "); break;
 }
 FUNC_6(VAR_10->type);
 FUNC_0(VAR_10->children, FUNC_3, ((void*)0));
 FUNC_7(VAR_6, "\n");
 FUNC_0(VAR_10->commands, FUNC_5, ((void*)0));
 FUNC_7(VAR_6, "\n\n");
 if (VAR_10->type & 129) {
     FUNC_0(VAR_10->cohorts, FUNC_9, &VAR_11);
 }
    }
    return (0);
}
