
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {char* text; union node* next; } ;
struct TYPE_14__ {union node* next; } ;
struct TYPE_13__ {union node* redirect; union node* args; } ;
struct TYPE_24__ {union node* com; } ;
struct TYPE_23__ {TYPE_7__* expr; } ;
struct TYPE_20__ {char* var; } ;
struct TYPE_19__ {union node* ch2; union node* ch1; } ;
struct TYPE_18__ {union node* ifpart; union node* test; } ;
struct TYPE_17__ {union node* n; } ;
struct TYPE_16__ {struct nodelist* cmdlist; } ;
union node {int type; TYPE_12__ narg; TYPE_11__ nfile; TYPE_10__ ncmd; TYPE_9__ nnot; TYPE_8__ ncase; TYPE_5__ nfor; TYPE_4__ nbinary; TYPE_3__ nif; TYPE_2__ nredir; TYPE_1__ npipe; } ;
struct nodelist {struct nodelist* next; union node* n; } ;
struct TYPE_21__ {char* text; } ;
struct TYPE_22__ {TYPE_6__ narg; } ;
 int FUNC_0 (char*) ;
 int FUNC_1 (union node*) ;
 int FUNC_2 (union node*,char*,int) ;

__attribute__((used)) static void
FUNC_3(union node *VAR_0)
{
 union node *VAR_1;
 struct nodelist *VAR_2;

 if (VAR_0 == ((void*)0))
  return;
 switch (VAR_0->type) {
 case 134:
  FUNC_3(VAR_0->nbinary.ch1);
  FUNC_0("; ");
  FUNC_3(VAR_0->nbinary.ch2);
  break;
 case 152:
  FUNC_3(VAR_0->nbinary.ch1);
  FUNC_0(" && ");
  FUNC_3(VAR_0->nbinary.ch2);
  break;
 case 137:
  FUNC_3(VAR_0->nbinary.ch1);
  FUNC_0(" || ");
  FUNC_3(VAR_0->nbinary.ch2);
  break;
 case 136:
  for (VAR_2 = VAR_0->npipe.cmdlist ; VAR_2 ; VAR_2 = VAR_2->next) {
   FUNC_3(VAR_2->n);
   if (VAR_2->next)
    FUNC_0(" | ");
  }
  break;
 case 133:
  FUNC_0("(");
  FUNC_3(VAR_0->nredir.n);
  FUNC_0(")");
  break;
 case 135:
 case 149:
  FUNC_3(VAR_0->nredir.n);
  break;
 case 139:
  FUNC_0("if ");
  FUNC_3(VAR_0->nif.test);
  FUNC_0("; then ");
  FUNC_3(VAR_0->nif.ifpart);
  FUNC_0("...");
  break;
 case 129:
  FUNC_0("while ");
  FUNC_3(VAR_0->nbinary.ch1);
  FUNC_1(VAR_0->nbinary.ch2);
  break;
 case 130:
  FUNC_0("until ");
  FUNC_3(VAR_0->nbinary.ch1);
  FUNC_1(VAR_0->nbinary.ch2);
  break;
 case 144:
  FUNC_0("for ");
  FUNC_0(VAR_0->nfor.var);
  FUNC_0(" in ...");
  break;
 case 148:
  FUNC_0("case ");
  FUNC_0(VAR_0->ncase.expr->narg.text);
  FUNC_0(" in ...");
  break;
 case 145:
  FUNC_0(VAR_0->narg.text);
  FUNC_0("() ...");
  break;
 case 138:
  FUNC_0("! ");
  FUNC_3(VAR_0->nnot.com);
  break;
 case 146:
  for (VAR_1 = VAR_0->ncmd.args ; VAR_1 ; VAR_1 = VAR_1->narg.next) {
   FUNC_3(VAR_1);
   if (VAR_1->narg.next)
    FUNC_0(" ");
  }
  for (VAR_1 = VAR_0->ncmd.redirect ; VAR_1 ; VAR_1 = VAR_1->nfile.next) {
   FUNC_0(" ");
   FUNC_3(VAR_1);
  }
  break;
 case 150:
  FUNC_0(VAR_0->narg.text);
  break;
 case 132:
  FUNC_2(VAR_0, ">", 1);
  break;
 case 151:
  FUNC_2(VAR_0, ">>", 1);
  break;
 case 131:
  FUNC_2(VAR_0, ">&", 1);
  break;
 case 147:
  FUNC_2(VAR_0, ">|", 1);
  break;
 case 143:
  FUNC_2(VAR_0, "<", 0);
  break;
 case 141:
  FUNC_2(VAR_0, "<>", 0);
  break;
 case 142:
  FUNC_2(VAR_0, "<&", 0);
  break;
 case 140:
 case 128:
  FUNC_0("<<...");
  break;
 default:
  FUNC_0("???");
  break;
 }
}
