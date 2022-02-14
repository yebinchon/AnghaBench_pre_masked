
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct menu {TYPE_1__* prompt; struct menu* parent; } ;
typedef enum prop_type { ____Placeholder_prop_type } prop_type ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 struct menu VAR_1 ;

struct menu *FUNC_0(struct menu *VAR_2)
{
 enum prop_type VAR_3;

 for (; VAR_2 != &VAR_1; VAR_2 = VAR_2->parent) {
  VAR_3 = VAR_2->prompt ? VAR_2->prompt->type : 0;
  if (VAR_3 == VAR_0)
   break;
 }
 return VAR_2;
}
