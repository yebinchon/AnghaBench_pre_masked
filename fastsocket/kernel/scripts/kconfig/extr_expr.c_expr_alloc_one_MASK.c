
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct expr* expr; } ;
struct expr {int type; TYPE_1__ left; } ;
typedef enum expr_type { ____Placeholder_expr_type } expr_type ;


 struct expr* FUNC_0 (int) ;
 int FUNC_1 (struct expr*,int ,int) ;

struct expr *FUNC_2(enum expr_type VAR_0, struct expr *VAR_1)
{
 struct expr *VAR_2 = FUNC_0(sizeof(*VAR_2));
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->type = VAR_0;
 VAR_2->left.expr = VAR_1;
 return VAR_2;
}
