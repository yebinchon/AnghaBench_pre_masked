
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgraph_node {int count; struct cgraph_node* prev_clone; struct cgraph_node* next_clone; struct cgraph_edge* callees; int master_clone; int rtl; int global; int local; int analyzed; TYPE_1__* origin; struct cgraph_node* next_nested; int decl; } ;
struct cgraph_edge {int call_stmt; struct cgraph_edge* next_callee; } ;
typedef int gcov_type ;
struct TYPE_2__ {struct cgraph_node* nested; } ;


 int VAR_0 ;
 int FUNC_0 (struct cgraph_edge*,struct cgraph_node*,int ,int,int,int) ;
 struct cgraph_node* FUNC_1 () ;

struct cgraph_node *
FUNC_2 (struct cgraph_node *VAR_1, gcov_type VAR_2, int VAR_3,
     bool VAR_4)
{
  struct cgraph_node *VAR_5 = FUNC_1 ();
  struct cgraph_edge *VAR_6;
  gcov_type VAR_7;

  VAR_5->decl = VAR_1->decl;
  VAR_5->origin = VAR_1->origin;
  if (VAR_5->origin)
    {
      VAR_5->next_nested = VAR_5->origin->nested;
      VAR_5->origin->nested = VAR_5;
    }
  VAR_5->analyzed = VAR_1->analyzed;
  VAR_5->local = VAR_1->local;
  VAR_5->global = VAR_1->global;
  VAR_5->rtl = VAR_1->rtl;
  VAR_5->master_clone = VAR_1->master_clone;
  VAR_5->count = VAR_2;
  if (VAR_1->count)
    VAR_7 = VAR_5->count * VAR_0 / VAR_1->count;
  else
    VAR_7 = 0;
  if (VAR_4)
    {
      VAR_1->count -= VAR_2;
      if (VAR_1->count < 0)
 VAR_1->count = 0;
    }

  for (VAR_6 = VAR_1->callees;VAR_6; VAR_6=VAR_6->next_callee)
    FUNC_0 (VAR_6, VAR_5, VAR_6->call_stmt, VAR_7, VAR_3,
         VAR_4);

  VAR_5->next_clone = VAR_1->next_clone;
  VAR_5->prev_clone = VAR_1;
  VAR_1->next_clone = VAR_5;
  if (VAR_5->next_clone)
    VAR_5->next_clone->prev_clone = VAR_5;

  return VAR_5;
}
