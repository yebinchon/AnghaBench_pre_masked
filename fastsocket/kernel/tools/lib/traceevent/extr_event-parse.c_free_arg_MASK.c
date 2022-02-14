
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {struct print_arg* args; } ;
struct TYPE_20__ {struct print_arg* right; struct print_arg* left; struct print_arg* op; } ;
struct TYPE_19__ {struct print_arg* index; } ;
struct TYPE_18__ {struct print_arg* string; } ;
struct TYPE_17__ {struct print_arg* item; struct print_arg* type; } ;
struct TYPE_16__ {struct print_arg* size; struct print_arg* field; } ;
struct TYPE_15__ {int symbols; struct print_arg* field; } ;
struct TYPE_14__ {int flags; struct print_arg* delim; struct print_arg* field; } ;
struct TYPE_13__ {struct print_arg* name; } ;
struct TYPE_12__ {struct print_arg* atom; } ;
struct print_arg {int type; struct print_arg* next; TYPE_10__ func; TYPE_9__ op; TYPE_8__ dynarray; TYPE_7__ string; TYPE_6__ typecast; TYPE_5__ hex; TYPE_4__ symbol; TYPE_3__ flags; TYPE_2__ field; TYPE_1__ atom; } ;
 int FUNC_0 (struct print_arg*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct print_arg *VAR_0)
{
 struct print_arg *VAR_1;

 if (!VAR_0)
  return;

 switch (VAR_0->type) {
 case 139:
  FUNC_0(VAR_0->atom.atom);
  break;
 case 136:
  FUNC_0(VAR_0->field.name);
  break;
 case 135:
  FUNC_2(VAR_0->flags.field);
  FUNC_0(VAR_0->flags.delim);
  FUNC_1(VAR_0->flags.flags);
  break;
 case 129:
  FUNC_2(VAR_0->symbol.field);
  FUNC_1(VAR_0->symbol.symbols);
  break;
 case 133:
  FUNC_2(VAR_0->hex.field);
  FUNC_2(VAR_0->hex.size);
  break;
 case 128:
  FUNC_0(VAR_0->typecast.type);
  FUNC_2(VAR_0->typecast.item);
  break;
 case 130:
 case 138:
  FUNC_0(VAR_0->string.string);
  break;
 case 137:
  FUNC_0(VAR_0->dynarray.index);
  break;
 case 131:
  FUNC_0(VAR_0->op.op);
  FUNC_2(VAR_0->op.left);
  FUNC_2(VAR_0->op.right);
  break;
 case 134:
  while (VAR_0->func.args) {
   VAR_1 = VAR_0->func.args;
   VAR_0->func.args = VAR_1->next;
   FUNC_2(VAR_1);
  }
  break;

 case 132:
 default:
  break;
 }

 FUNC_0(VAR_0);
}
