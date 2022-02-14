
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct filter_arg* left; } ;
struct TYPE_6__ {struct filter_arg* left; } ;
struct TYPE_5__ {struct filter_arg* left; } ;
struct filter_arg {int type; TYPE_1__ num; TYPE_3__ op; TYPE_2__ exp; } ;


 int const VAR_0 ;

 int const VAR_1 ;


 struct filter_arg* FUNC_0 (struct filter_arg*,struct filter_arg*) ;

__attribute__((used)) static int FUNC_1(struct filter_arg *VAR_2, struct filter_arg *VAR_3)
{
 switch (VAR_2->type) {
 case 130:
  if (VAR_3->type == 128)
   VAR_3 = FUNC_0(VAR_3, VAR_2);
  VAR_2->exp.left = VAR_3;
  break;

 case 128:
  VAR_2->op.left = VAR_3;
  break;
 case 129:
  if (VAR_3->type == 128)
   VAR_3 = FUNC_0(VAR_3, VAR_2);


  if (VAR_3->type != VAR_1 &&
      VAR_3->type != VAR_0)
   return -1;
  VAR_2->num.left = VAR_3;
  break;
 default:
  return -1;
 }
 return 0;
}
