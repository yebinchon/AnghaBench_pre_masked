
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct cgraph_varpool_node {int dummy; } ;
struct TYPE_3__ {scalar_t__ finalized; } ;
struct cgraph_node {scalar_t__ analyzed; TYPE_1__ local; struct cgraph_node* next_needed; scalar_t__ reachable; struct cgraph_node* next; int decl; scalar_t__ needed; struct cgraph_edge* callees; } ;
struct cgraph_edge {TYPE_2__* callee; struct cgraph_edge* next_callee; } ;
struct TYPE_4__ {int reachable; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cgraph_node*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 char* FUNC_4 (struct cgraph_node*) ;
 struct cgraph_node* VAR_2 ;
 struct cgraph_node* VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (struct cgraph_node*) ;
 int FUNC_7 (struct cgraph_node*) ;
 int FUNC_8 () ;
 struct cgraph_varpool_node* VAR_4 ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 () ;
 int VAR_6 ;
 int FUNC_13 (scalar_t__,char*,...) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 (struct cgraph_node*,struct cgraph_varpool_node*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

void
FUNC_19 (void)
{
  struct cgraph_node *VAR_10, *VAR_11;


  static struct cgraph_node *VAR_12;
  struct cgraph_node *VAR_13 = VAR_12;
  static struct cgraph_varpool_node *VAR_14;

  if (VAR_5 || VAR_8)
    return;

  FUNC_12 ();

  if (!VAR_6)
    {
      FUNC_5 ();
      FUNC_2 ();
      FUNC_9 ();
      return;
    }

  if (!VAR_7)
    {
      FUNC_13 (VAR_9, "\nAnalyzing compilation unit");
      FUNC_11 (VAR_9);
    }

  FUNC_18 (VAR_0);
  FUNC_16 (VAR_13,
         VAR_14);
  VAR_13 = VAR_2;
  VAR_14 = VAR_4;
  FUNC_8 ();
  if (VAR_1)
    {
      FUNC_13 (VAR_1, "Initial entry points:");
      for (VAR_10 = VAR_2; VAR_10 != VAR_12; VAR_10 = VAR_10->next)
 if (VAR_10->needed && FUNC_0 (VAR_10->decl))
   FUNC_13 (VAR_1, " %s", FUNC_4 (VAR_10));
      FUNC_13 (VAR_1, "\n");
    }





  while (VAR_3)
    {
      struct cgraph_edge *VAR_15;
      tree VAR_16 = VAR_3->decl;

      VAR_10 = VAR_3;
      VAR_3 = VAR_3->next_needed;
      VAR_10->next_needed = ((void*)0);




      if (!FUNC_0 (VAR_16))
 {
   FUNC_7 (VAR_10);
   continue;
 }

      FUNC_14 (!VAR_10->analyzed && VAR_10->reachable);
      FUNC_14 (FUNC_0 (VAR_16));

      FUNC_1 (VAR_10);

      for (VAR_15 = VAR_10->callees; VAR_15; VAR_15 = VAR_15->next_callee)
 if (!VAR_15->callee->reachable)
   FUNC_3 (VAR_15->callee);



      FUNC_16 (VAR_13,
      VAR_14);
      VAR_13 = VAR_2;
      VAR_14 = VAR_4;
      FUNC_8 ();
    }


  if (VAR_1)
    {
      FUNC_13 (VAR_1, "Unit entry points:");
      for (VAR_10 = VAR_2; VAR_10 != VAR_12; VAR_10 = VAR_10->next)
 if (VAR_10->needed && FUNC_0 (VAR_10->decl))
   FUNC_13 (VAR_1, " %s", FUNC_4 (VAR_10));
      FUNC_13 (VAR_1, "\n\nInitial ");
      FUNC_10 (VAR_1);
    }

  if (VAR_1)
    FUNC_13 (VAR_1, "\nReclaiming functions:");

  for (VAR_10 = VAR_2; VAR_10 != VAR_12; VAR_10 = VAR_11)
    {
      tree VAR_17 = VAR_10->decl;
      VAR_11 = VAR_10->next;

      if (VAR_10->local.finalized && !FUNC_0 (VAR_17))
 FUNC_7 (VAR_10);

      if (!VAR_10->reachable && FUNC_0 (VAR_17))
 {
   if (VAR_1)
     FUNC_13 (VAR_1, " %s", FUNC_4 (VAR_10));
   FUNC_6 (VAR_10);
   continue;
 }
      else
 VAR_10->next_needed = ((void*)0);
      FUNC_14 (!VAR_10->local.finalized || FUNC_0 (VAR_17));
      FUNC_14 (VAR_10->analyzed == VAR_10->local.finalized);
    }
  if (VAR_1)
    {
      FUNC_13 (VAR_1, "\n\nReclaimed ");
      FUNC_10 (VAR_1);
    }
  VAR_12 = VAR_2;
  FUNC_15 ();
  FUNC_17 (VAR_0);
}
