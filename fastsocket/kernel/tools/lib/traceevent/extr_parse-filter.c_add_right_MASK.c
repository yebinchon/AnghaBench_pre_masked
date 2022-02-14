
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int type; struct filter_arg* right; struct filter_arg* left; } ;
struct TYPE_15__ {int type; TYPE_6__* field; int * buffer; int val; int reg; } ;
struct TYPE_13__ {TYPE_6__* field; } ;
struct TYPE_12__ {int value; } ;
struct TYPE_11__ {int type; char* str; } ;
struct TYPE_10__ {struct filter_arg* right; } ;
struct TYPE_9__ {struct filter_arg* right; } ;
struct filter_arg {int type; TYPE_8__ num; TYPE_7__ str; TYPE_5__ field; TYPE_4__ boolean; TYPE_3__ value; TYPE_2__ op; TYPE_1__ exp; } ;
struct TYPE_14__ {size_t size; } ;


 int VAR_0 ;




 int const VAR_1 ;



 int VAR_2 ;

 int VAR_3 ;


 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct filter_arg*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (struct filter_arg*,int ,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (char**,char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct filter_arg *VAR_7, struct filter_arg *VAR_8,
       char **VAR_9)
{
 struct filter_arg *VAR_10;
 char *VAR_11;
 int VAR_12;
 int VAR_13;

 switch (VAR_7->type) {
 case 139:
  if (VAR_7->exp.right)
   goto out_fail;
  VAR_7->exp.right = VAR_8;
  break;

 case 136:
  if (VAR_7->op.right)
   goto out_fail;
  VAR_7->op.right = VAR_8;
  break;

 case 137:
  if (VAR_7->op.right)
   goto out_fail;



  switch (VAR_8->type) {
  case 135:
  case 138:
   break;
  default:
   FUNC_5(VAR_9,
       "Illegal rvalue");
   return -1;
  }





  switch (VAR_8->value.type) {
  case 134:





   if (FUNC_7(VAR_8->value.str) == 1 &&
       VAR_7->num.type != 130 &&
       VAR_7->num.type != 131) {
    VAR_8->value.type = 129;
    goto do_int;
   }

  case 128:


   VAR_12 = VAR_7->num.type;
   VAR_10 = VAR_7->num.left;
   VAR_11 = VAR_8->value.str;


   FUNC_3(VAR_7, 0, sizeof(*VAR_7));





   if (VAR_10->type == VAR_0) {
    FUNC_1(VAR_10);
    FUNC_1(VAR_8);
    VAR_7->type = VAR_0;
    VAR_7->boolean.value = VAR_4;
    break;
   }


   if (VAR_10->type != 138) {
    FUNC_5(VAR_9,
        "Illegal lvalue for string comparison");
    return -1;
   }


   switch (VAR_12) {
   case 133:
    VAR_12 = VAR_2;
    break;
   case 132:
    VAR_12 = VAR_3;
    break;

   case 130:
   case 131:
    VAR_13 = FUNC_4(&VAR_7->str.reg, VAR_11, VAR_5|VAR_6);
    if (VAR_13) {
     FUNC_5(VAR_9,
         "RegEx '%s' did not compute",
         VAR_11);
     return -1;
    }
    break;
   default:
    FUNC_5(VAR_9,
        "Illegal comparison for string");
    return -1;
   }

   VAR_7->type = VAR_1;
   VAR_7->str.type = VAR_12;
   VAR_7->str.field = VAR_10->field.field;
   VAR_7->str.val = FUNC_6(VAR_11);
   if (!VAR_7->str.val)
    FUNC_0("malloc string");



   VAR_7->str.buffer = FUNC_2(VAR_7->str.field->size + 1);

   VAR_7->str.buffer[VAR_7->str.field->size] = 0;


   FUNC_1(VAR_8);
   FUNC_1(VAR_10);

   break;

  case 129:

 do_int:
   switch (VAR_7->num.type) {
   case 130:
   case 131:
    FUNC_5(VAR_9,
        "Op not allowed with integers");
    return -1;

   default:
    break;
   }


   VAR_7->num.right = VAR_8;
   break;
  default:
   goto out_fail;
  }
  break;
 default:
  goto out_fail;
 }

 return 0;

 out_fail:
 FUNC_5(VAR_9,
     "Syntax error");
 return -1;
}
