
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct role_datum {int dominates; } ;
struct mls_level {int dummy; } ;
struct TYPE_3__ {struct mls_level* level; } ;
struct context {int type; int role; int user; TYPE_1__ range; } ;
struct constraint_expr {int expr_type; int attr; int names; int op; struct constraint_expr* next; } ;
struct TYPE_4__ {struct role_datum** role_val_to_struct; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;





 int VAR_1 ;


 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mls_level*,struct mls_level*) ;
 int FUNC_4 (struct mls_level*,struct mls_level*) ;
 int FUNC_5 (struct mls_level*,struct mls_level*) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static int FUNC_6(struct context *VAR_4,
    struct context *VAR_5,
    struct context *VAR_6,
    struct constraint_expr *VAR_7)
{
 u32 VAR_8, VAR_9;
 struct context *VAR_10;
 struct role_datum *VAR_11, *VAR_12;
 struct mls_level *VAR_13, *VAR_14;
 struct constraint_expr *VAR_15;
 int VAR_16[VAR_0];
 int VAR_17 = -1;

 for (VAR_15 = VAR_7; VAR_15; VAR_15 = VAR_15->next) {
  switch (VAR_15->expr_type) {
  case 132:
   FUNC_1(VAR_17 < 0);
   VAR_16[VAR_17] = !VAR_16[VAR_17];
   break;
  case 146:
   FUNC_1(VAR_17 < 1);
   VAR_17--;
   VAR_16[VAR_17] &= VAR_16[VAR_17+1];
   break;
  case 131:
   FUNC_1(VAR_17 < 1);
   VAR_17--;
   VAR_16[VAR_17] |= VAR_16[VAR_17+1];
   break;
  case 145:
   if (VAR_17 == (VAR_0-1))
    return 0;
   switch (VAR_15->attr) {
   case 128:
    VAR_8 = VAR_4->user;
    VAR_9 = VAR_5->user;
    break;
   case 129:
    VAR_8 = VAR_4->type;
    VAR_9 = VAR_5->type;
    break;
   case 130:
    VAR_8 = VAR_4->role;
    VAR_9 = VAR_5->role;
    VAR_11 = VAR_3.role_val_to_struct[VAR_8 - 1];
    VAR_12 = VAR_3.role_val_to_struct[VAR_9 - 1];
    switch (VAR_15->op) {
    case 144:
     VAR_16[++VAR_17] = FUNC_2(&VAR_11->dominates,
          VAR_9 - 1);
     continue;
    case 143:
     VAR_16[++VAR_17] = FUNC_2(&VAR_12->dominates,
          VAR_8 - 1);
     continue;
    case 139:
     VAR_16[++VAR_17] = (!FUNC_2(&VAR_11->dominates,
            VAR_9 - 1) &&
         !FUNC_2(&VAR_12->dominates,
            VAR_8 - 1));
     continue;
    default:
     break;
    }
    break;
   case 136:
    VAR_13 = &(VAR_4->range.level[0]);
    VAR_14 = &(VAR_5->range.level[0]);
    goto mls_ops;
   case 137:
    VAR_13 = &(VAR_4->range.level[0]);
    VAR_14 = &(VAR_5->range.level[1]);
    goto mls_ops;
   case 140:
    VAR_13 = &(VAR_4->range.level[1]);
    VAR_14 = &(VAR_5->range.level[0]);
    goto mls_ops;
   case 141:
    VAR_13 = &(VAR_4->range.level[1]);
    VAR_14 = &(VAR_5->range.level[1]);
    goto mls_ops;
   case 138:
    VAR_13 = &(VAR_4->range.level[0]);
    VAR_14 = &(VAR_4->range.level[1]);
    goto mls_ops;
   case 135:
    VAR_13 = &(VAR_5->range.level[0]);
    VAR_14 = &(VAR_5->range.level[1]);
    goto mls_ops;
mls_ops:
   switch (VAR_15->op) {
   case 142:
    VAR_16[++VAR_17] = FUNC_4(VAR_13, VAR_14);
    continue;
   case 133:
    VAR_16[++VAR_17] = !FUNC_4(VAR_13, VAR_14);
    continue;
   case 144:
    VAR_16[++VAR_17] = FUNC_3(VAR_13, VAR_14);
    continue;
   case 143:
    VAR_16[++VAR_17] = FUNC_3(VAR_14, VAR_13);
    continue;
   case 139:
    VAR_16[++VAR_17] = FUNC_5(VAR_14, VAR_13);
    continue;
   default:
    FUNC_0();
    return 0;
   }
   break;
   default:
    FUNC_0();
    return 0;
   }

   switch (VAR_15->op) {
   case 142:
    VAR_16[++VAR_17] = (VAR_8 == VAR_9);
    break;
   case 133:
    VAR_16[++VAR_17] = (VAR_8 != VAR_9);
    break;
   default:
    FUNC_0();
    return 0;
   }
   break;
  case 134:
   if (VAR_17 == (VAR_0-1))
    return 0;
   VAR_10 = VAR_4;
   if (VAR_15->attr & VAR_1)
    VAR_10 = VAR_5;
   else if (VAR_15->attr & VAR_2) {
    VAR_10 = VAR_6;
    if (!VAR_10) {
     FUNC_0();
     return 0;
    }
   }
   if (VAR_15->attr & 128)
    VAR_8 = VAR_10->user;
   else if (VAR_15->attr & 130)
    VAR_8 = VAR_10->role;
   else if (VAR_15->attr & 129)
    VAR_8 = VAR_10->type;
   else {
    FUNC_0();
    return 0;
   }

   switch (VAR_15->op) {
   case 142:
    VAR_16[++VAR_17] = FUNC_2(&VAR_15->names, VAR_8 - 1);
    break;
   case 133:
    VAR_16[++VAR_17] = !FUNC_2(&VAR_15->names, VAR_8 - 1);
    break;
   default:
    FUNC_0();
    return 0;
   }
   break;
  default:
   FUNC_0();
   return 0;
  }
 }

 FUNC_1(VAR_17 != 0);
 return VAR_16[0];
}
