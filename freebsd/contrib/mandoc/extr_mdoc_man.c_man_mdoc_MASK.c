
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct roff_node {scalar_t__ type; char* string; struct roff_node* next; } ;
struct roff_meta {char* title; char* msec; char* date; char* os; char* vol; TYPE_1__* first; } ;
struct TYPE_4__ {int size; char* head; char* tail; } ;
struct TYPE_3__ {struct roff_node* child; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 char* FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct roff_meta const*,struct roff_node*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char) ;

void
FUNC_4(void *VAR_5, const struct roff_meta *VAR_6)
{
 struct roff_node *VAR_7;

 FUNC_2(".\\\" Automatically generated from an mdoc input file."
     "  Do not edit.\n");
 for (VAR_7 = VAR_6->first->child; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
  if (VAR_7->type != VAR_2)
   break;
  FUNC_2(".\\\"%s\n", VAR_7->string);
 }

 FUNC_2(".TH \"%s\" \"%s\" \"%s\" \"%s\" \"%s\"\n",
     VAR_6->title, (VAR_6->msec == ((void*)0) ? "" : VAR_6->msec),
     VAR_6->date, VAR_6->os, VAR_6->vol);


 FUNC_2(".nh\n.if n .ad l");

 VAR_4 = VAR_1 | VAR_0;
 if (0 == VAR_3.size) {
  VAR_3.size = 8;
  VAR_3.head = VAR_3.tail = FUNC_0(8);
  *VAR_3.tail = 'R';
 }
 for (; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
  FUNC_1(VAR_6, VAR_7);
 FUNC_3('\n');
}
