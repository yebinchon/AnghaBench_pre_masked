
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct expression {TYPE_1__* language_defn; } ;
struct TYPE_2__ {struct value* (* evaluate_exp ) (int ,struct expression*,int*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct value* FUNC_0 (int ,struct expression*,int*,int ) ;

__attribute__((used)) static struct value *
FUNC_1 (struct expression *VAR_2, int *VAR_3)
{
  return (*VAR_2->language_defn->evaluate_exp)
    (VAR_1, VAR_2, VAR_3, VAR_0);
}
