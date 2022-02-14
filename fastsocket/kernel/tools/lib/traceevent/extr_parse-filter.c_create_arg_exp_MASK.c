
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct filter_arg {TYPE_1__ op; int type; } ;
typedef enum filter_exp_type { ____Placeholder_filter_exp_type } filter_exp_type ;


 int VAR_0 ;
 struct filter_arg* FUNC_0 () ;

__attribute__((used)) static struct filter_arg *
FUNC_1(enum filter_exp_type VAR_1)
{
 struct filter_arg *VAR_2;

 VAR_2 = FUNC_0();
 VAR_2->type = VAR_0;
 VAR_2->op.type = VAR_1;

 return VAR_2;
}
