
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct policydb {int dummy; } ;
struct constraint_node {int permissions; struct constraint_expr* expr; struct constraint_node* next; } ;
struct constraint_expr {int expr_type; int attr; int op; int names; struct constraint_expr* next; } ;
typedef int __le32 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,int,int,void*) ;

__attribute__((used)) static int FUNC_3(struct policydb *VAR_0, struct constraint_node *VAR_1,
        void *VAR_2)
{
 struct constraint_node *VAR_3;
 struct constraint_expr *VAR_4;
 __le32 VAR_5[3];
 u32 VAR_6;
 int VAR_7;

 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next) {
  VAR_6 = 0;
  for (VAR_4 = VAR_3->expr; VAR_4; VAR_4 = VAR_4->next)
   VAR_6++;
  VAR_5[0] = FUNC_0(VAR_3->permissions);
  VAR_5[1] = FUNC_0(VAR_6);
  VAR_7 = FUNC_2(VAR_5, sizeof(u32), 2, VAR_2);
  if (VAR_7)
   return VAR_7;
  for (VAR_4 = VAR_3->expr; VAR_4; VAR_4 = VAR_4->next) {
   VAR_5[0] = FUNC_0(VAR_4->expr_type);
   VAR_5[1] = FUNC_0(VAR_4->attr);
   VAR_5[2] = FUNC_0(VAR_4->op);
   VAR_7 = FUNC_2(VAR_5, sizeof(u32), 3, VAR_2);
   if (VAR_7)
    return VAR_7;

   switch (VAR_4->expr_type) {
   case 128:
    VAR_7 = FUNC_1(&VAR_4->names, VAR_2);
    if (VAR_7)
     return VAR_7;
    break;
   default:
    break;
   }
  }
 }

 return 0;
}
