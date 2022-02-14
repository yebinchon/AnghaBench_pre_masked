
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


struct trace_seq {int dummy; } ;
struct TYPE_16__ {char* op; struct print_arg* right; struct print_arg* left; } ;
struct TYPE_15__ {char* type; struct print_arg* item; } ;
struct TYPE_14__ {char* string; } ;
struct TYPE_13__ {struct print_arg* size; struct print_arg* field; } ;
struct TYPE_12__ {int symbols; struct print_arg* field; } ;
struct TYPE_11__ {char* delim; int flags; struct print_arg* field; } ;
struct TYPE_10__ {char* name; } ;
struct TYPE_9__ {char* atom; } ;
struct print_arg {int type; struct print_arg* next; TYPE_8__ op; TYPE_7__ typecast; TYPE_6__ string; TYPE_5__ hex; TYPE_4__ symbol; TYPE_3__ flags; TYPE_2__ field; TYPE_1__ atom; } ;
 int FUNC_0 (struct trace_seq*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct trace_seq*) ;
 int FUNC_4 (struct trace_seq*) ;
 int FUNC_5 (struct trace_seq*) ;

__attribute__((used)) static void FUNC_6(struct print_arg *VAR_0)
{
 int VAR_1 = 1;
 struct trace_seq VAR_2;

 switch (VAR_0->type) {
 case 132:
  FUNC_1("null");
  break;
 case 137:
  FUNC_1("%s", VAR_0->atom.atom);
  break;
 case 135:
  FUNC_1("REC->%s", VAR_0->field.name);
  break;
 case 134:
  FUNC_1("__print_flags(");
  FUNC_6(VAR_0->flags.field);
  FUNC_1(", %s, ", VAR_0->flags.delim);
  FUNC_5(&VAR_2);
  FUNC_0(&VAR_2, VAR_0->flags.flags);
  FUNC_4(&VAR_2);
  FUNC_3(&VAR_2);
  FUNC_1(")");
  break;
 case 129:
  FUNC_1("__print_symbolic(");
  FUNC_6(VAR_0->symbol.field);
  FUNC_1(", ");
  FUNC_5(&VAR_2);
  FUNC_0(&VAR_2, VAR_0->symbol.symbols);
  FUNC_4(&VAR_2);
  FUNC_3(&VAR_2);
  FUNC_1(")");
  break;
 case 133:
  FUNC_1("__print_hex(");
  FUNC_6(VAR_0->hex.field);
  FUNC_1(", ");
  FUNC_6(VAR_0->hex.size);
  FUNC_1(")");
  break;
 case 130:
 case 136:
  FUNC_1("__get_str(%s)", VAR_0->string.string);
  break;
 case 128:
  FUNC_1("(%s)", VAR_0->typecast.type);
  FUNC_6(VAR_0->typecast.item);
  break;
 case 131:
  if (FUNC_2(VAR_0->op.op, ":") == 0)
   VAR_1 = 0;
  if (VAR_1)
   FUNC_1("(");
  FUNC_6(VAR_0->op.left);
  FUNC_1(" %s ", VAR_0->op.op);
  FUNC_6(VAR_0->op.right);
  if (VAR_1)
   FUNC_1(")");
  break;
 default:

  return;
 }
 if (VAR_0->next) {
  FUNC_1("\n");
  FUNC_6(VAR_0->next);
 }
}
