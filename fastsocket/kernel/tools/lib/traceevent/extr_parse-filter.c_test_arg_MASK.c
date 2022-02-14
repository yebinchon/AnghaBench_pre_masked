
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {struct filter_arg* left; int type; struct filter_arg* right; } ;
struct TYPE_7__ {struct filter_arg* right; struct filter_arg* left; } ;
struct TYPE_6__ {struct filter_arg* right; struct filter_arg* left; } ;
struct TYPE_5__ {int value; } ;
struct filter_arg {int type; TYPE_4__ op; TYPE_3__ num; TYPE_2__ exp; TYPE_1__ boolean; } ;
typedef enum filter_vals { ____Placeholder_filter_vals } filter_vals ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (char*) ;
 int FUNC_1 (struct filter_arg*,struct filter_arg*,struct filter_arg*) ;

enum filter_vals FUNC_2(struct filter_arg *VAR_3, struct filter_arg *VAR_4)
{
 enum filter_vals VAR_5, VAR_6;

 switch (VAR_4->type) {


 case 137:
  return 130 + VAR_4->boolean.value;


 case 132:
 case 131:
 case 135:
  return 129;

 case 136:
  VAR_5 = FUNC_2(VAR_4, VAR_4->exp.left);
  if (VAR_5 != 129)
   return VAR_5;
  VAR_6 = FUNC_2(VAR_4, VAR_4->exp.right);
  if (VAR_6 != 129)
   return VAR_6;
  return 129;

 case 134:
  VAR_5 = FUNC_2(VAR_4, VAR_4->num.left);
  if (VAR_5 != 129)
   return VAR_5;
  VAR_6 = FUNC_2(VAR_4, VAR_4->num.right);
  if (VAR_6 != 129)
   return VAR_6;
  return 129;

 case 133:
  if (VAR_4->op.type != VAR_1) {
   VAR_5 = FUNC_2(VAR_4, VAR_4->op.left);
   switch (VAR_5) {
   case 129:
    break;
   case 128:
    if (VAR_4->op.type == VAR_2)
     return 128;
    VAR_6 = FUNC_2(VAR_4, VAR_4->op.right);
    if (VAR_6 != 129)
     return VAR_6;

    FUNC_1(VAR_3, VAR_4, VAR_4->op.right);
    return 129;

   case 130:
    if (VAR_4->op.type == VAR_0)
     return 130;
    VAR_6 = FUNC_2(VAR_4, VAR_4->op.right);
    if (VAR_6 != 129)
     return VAR_6;

    FUNC_1(VAR_3, VAR_4, VAR_4->op.right);
    return 129;
   }
  }

  VAR_6 = FUNC_2(VAR_4, VAR_4->op.right);
  switch (VAR_6) {
  case 129:
   break;
  case 128:
   if (VAR_4->op.type == VAR_2)
    return 128;
   if (VAR_4->op.type == VAR_1)
    return 130;

   FUNC_1(VAR_3, VAR_4, VAR_4->op.left);
   return 129;

  case 130:
   if (VAR_4->op.type == VAR_0)
    return 130;
   if (VAR_4->op.type == VAR_1)
    return 128;

   FUNC_1(VAR_3, VAR_4, VAR_4->op.left);
   return 129;
  }

  return 129;
 default:
  FUNC_0("bad arg in filter tree");
 }
 return 129;
}
