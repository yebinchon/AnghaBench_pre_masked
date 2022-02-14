
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct type {int dummy; } ;
struct expression {TYPE_1__* language_defn; } ;
typedef enum noside { ____Placeholder_noside } noside ;
struct TYPE_2__ {struct value* (* evaluate_exp ) (struct type*,struct expression*,int*,int) ;} ;


 struct value* FUNC_0 (struct type*,struct expression*,int*,int) ;

__attribute__((used)) static struct value *
FUNC_1 (struct type *VAR_0, struct expression *VAR_1, int *VAR_2,
   enum noside VAR_3)
{
  return (*VAR_1->language_defn->evaluate_exp) (VAR_0, VAR_1, VAR_2, VAR_3);
}
