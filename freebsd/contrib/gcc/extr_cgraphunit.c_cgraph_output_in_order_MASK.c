
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgraph_varpool_node {int order; struct cgraph_varpool_node* next_needed; } ;
struct TYPE_2__ {struct cgraph_asm_node* a; struct cgraph_varpool_node* v; struct cgraph_node* f; } ;
struct cgraph_order_sort {int kind; TYPE_1__ u; } ;
struct cgraph_node {int order; scalar_t__ output; struct cgraph_node* next; } ;
struct cgraph_asm_node {int order; int asm_str; struct cgraph_asm_node* next; } ;






 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 struct cgraph_asm_node* VAR_0 ;
 int FUNC_2 (struct cgraph_node*) ;
 struct cgraph_node* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (struct cgraph_varpool_node*) ;
 struct cgraph_varpool_node* VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (struct cgraph_order_sort*,int ,size_t) ;

__attribute__((used)) static void
FUNC_8 (void)
{
  int VAR_4;
  size_t VAR_5;
  struct cgraph_order_sort *VAR_6;
  int VAR_7;
  struct cgraph_node *VAR_8;
  struct cgraph_varpool_node *VAR_9;
  struct cgraph_asm_node *VAR_10;

  VAR_4 = VAR_2;
  VAR_5 = VAR_4 * sizeof (struct cgraph_order_sort);
  VAR_6 = (struct cgraph_order_sort *) FUNC_0 (VAR_5);
  FUNC_7 (VAR_6, 0, VAR_5);

  FUNC_3 ();

  for (VAR_8 = VAR_1; VAR_8; VAR_8 = VAR_8->next)
    {
      if (VAR_8->output)
 {
   VAR_7 = VAR_8->order;
   FUNC_5 (VAR_6[VAR_7].kind == 129);
   VAR_6[VAR_7].kind = 130;
   VAR_6[VAR_7].u.f = VAR_8;
 }
    }

  for (VAR_9 = VAR_3; VAR_9; VAR_9 = VAR_9->next_needed)
    {
      VAR_7 = VAR_9->order;
      FUNC_5 (VAR_6[VAR_7].kind == 129);
      VAR_6[VAR_7].kind = 128;
      VAR_6[VAR_7].u.v = VAR_9;
    }

  for (VAR_10 = VAR_0; VAR_10; VAR_10 = VAR_10->next)
    {
      VAR_7 = VAR_10->order;
      FUNC_5 (VAR_6[VAR_7].kind == 129);
      VAR_6[VAR_7].kind = 131;
      VAR_6[VAR_7].u.a = VAR_10;
    }

  for (VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7)
    {
      switch (VAR_6[VAR_7].kind)
 {
 case 130:
   VAR_6[VAR_7].u.f->output = 0;
   FUNC_2 (VAR_6[VAR_7].u.f);
   break;

 case 128:
   FUNC_4 (VAR_6[VAR_7].u.v);
   break;

 case 131:
   FUNC_1 (VAR_6[VAR_7].u.a->asm_str);
   break;

 case 129:
   break;

 default:
   FUNC_6 ();
 }
    }

  VAR_0 = ((void*)0);
}
