
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct expr* expr; } ;
struct TYPE_3__ {struct expr* expr; } ;
struct expr {int type; TYPE_2__ right; TYPE_1__ left; } ;
typedef enum expr_type { ____Placeholder_expr_type } expr_type ;



 int VAR_0 ;

 struct expr* VAR_1 ;
 struct expr* VAR_2 ;
 int FUNC_0 (int ,struct expr*) ;
 struct expr* FUNC_1 (int *) ;
 struct expr* FUNC_2 (struct expr*) ;
 struct expr* FUNC_3 (struct expr**,struct expr**) ;
 struct expr* FUNC_4 (struct expr**,struct expr**) ;
 int FUNC_5 (struct expr*) ;
 int FUNC_6 (struct expr*) ;
 int FUNC_7 (struct expr*) ;
 struct expr* FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_9(enum expr_type VAR_6, struct expr **VAR_7, struct expr **VAR_8)
{


 struct expr *VAR_9, *VAR_10, *VAR_11;

 if ((*VAR_7)->type == VAR_6) {
  FUNC_9(VAR_6, &(*VAR_7)->left.expr, &(*VAR_8));
  FUNC_9(VAR_6, &(*VAR_7)->right.expr, &(*VAR_8));
  return;
 }
 if ((*VAR_8)->type == VAR_6) {
  FUNC_9(VAR_6, &(*VAR_7), &(*VAR_8)->left.expr);
  FUNC_9(VAR_6, &(*VAR_7), &(*VAR_8)->right.expr);
 }
 if ((*VAR_7) == (*VAR_8))
  return;

 switch ((*VAR_7)->type) {
 case 128:
  FUNC_9((*VAR_7)->type, &(*VAR_7), &(*VAR_7));

  VAR_10 = FUNC_8(FUNC_0(VAR_0, FUNC_2((*VAR_7))));
  VAR_11 = FUNC_2((*VAR_8));
  VAR_9 = FUNC_3(&VAR_10, &VAR_11);
  if (FUNC_7(VAR_10)) {
   FUNC_5((*VAR_7));
   (*VAR_7) = FUNC_1(&VAR_3);
   VAR_5++;
  }
  FUNC_5(VAR_11);
  FUNC_5(VAR_10);
  FUNC_5(VAR_9);
  break;
 case 129:
  FUNC_9((*VAR_7)->type, &(*VAR_7), &(*VAR_7));

  VAR_10 = FUNC_8(FUNC_0(VAR_0, FUNC_2((*VAR_7))));
  VAR_11 = FUNC_2((*VAR_8));
  VAR_9 = FUNC_4(&VAR_10, &VAR_11);
  if (FUNC_6(VAR_10)) {
   FUNC_5((*VAR_7));
   (*VAR_7) = FUNC_1(&VAR_4);
   VAR_5++;
  }
  FUNC_5(VAR_11);
  FUNC_5(VAR_10);
  FUNC_5(VAR_9);
  break;
 default:
  ;
 }


}
