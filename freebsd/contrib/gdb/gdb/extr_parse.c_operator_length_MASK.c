
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct expression {TYPE_2__* language_defn; } ;
struct TYPE_4__ {TYPE_1__* la_exp_desc; } ;
struct TYPE_3__ {int (* operator_length ) (struct expression*,int,int*,int*) ;} ;


 int FUNC_0 (struct expression*,int,int*,int*) ;

void
FUNC_1 (struct expression *VAR_0, int VAR_1, int *VAR_2, int *VAR_3)
{
  VAR_0->language_defn->la_exp_desc->operator_length (VAR_0, VAR_1,
           VAR_2, VAR_3);
}
