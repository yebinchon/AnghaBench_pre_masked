
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct constraint_node {struct constraint_expr* expr; void* permissions; struct constraint_node* next; } ;
struct constraint_expr {int expr_type; int attr; int names; void* op; struct constraint_expr* next; } ;
typedef int __le32 ;




 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,void*) ;
 void* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,void*,int) ;

__attribute__((used)) static int FUNC_4(struct constraint_node **VAR_5, int VAR_6,
       int VAR_7, void *VAR_8)
{
 struct constraint_node *VAR_9, *VAR_10;
 struct constraint_expr *VAR_11, *VAR_12;
 __le32 VAR_13[3];
 u32 VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_10 = ((void*)0);
 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_4);
  if (!VAR_9)
   return -VAR_3;

  if (VAR_10)
   VAR_10->next = VAR_9;
  else
   *VAR_5 = VAR_9;

  VAR_15 = FUNC_3(VAR_13, VAR_8, (sizeof(u32) * 2));
  if (VAR_15 < 0)
   return VAR_15;
  VAR_9->permissions = FUNC_2(VAR_13[0]);
  VAR_14 = FUNC_2(VAR_13[1]);
  VAR_12 = ((void*)0);
  VAR_18 = -1;
  for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
   VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_4);
   if (!VAR_11)
    return -VAR_3;

   if (VAR_12)
    VAR_12->next = VAR_11;
   else
    VAR_9->expr = VAR_11;

   VAR_15 = FUNC_3(VAR_13, VAR_8, (sizeof(u32) * 3));
   if (VAR_15 < 0)
    return VAR_15;
   VAR_11->expr_type = FUNC_2(VAR_13[0]);
   VAR_11->attr = FUNC_2(VAR_13[1]);
   VAR_11->op = FUNC_2(VAR_13[2]);

   switch (VAR_11->expr_type) {
   case 129:
    if (VAR_18 < 0)
     return -VAR_2;
    break;
   case 132:
   case 128:
    if (VAR_18 < 1)
     return -VAR_2;
    VAR_18--;
    break;
   case 131:
    if (VAR_18 == (VAR_0 - 1))
     return -VAR_2;
    VAR_18++;
    break;
   case 130:
    if (!VAR_7 && (VAR_11->attr & VAR_1))
     return -VAR_2;
    if (VAR_18 == (VAR_0 - 1))
     return -VAR_2;
    VAR_18++;
    if (FUNC_0(&VAR_11->names, VAR_8))
     return -VAR_2;
    break;
   default:
    return -VAR_2;
   }
   VAR_12 = VAR_11;
  }
  if (VAR_18 != 0)
   return -VAR_2;
  VAR_10 = VAR_9;
 }

 return 0;
}
