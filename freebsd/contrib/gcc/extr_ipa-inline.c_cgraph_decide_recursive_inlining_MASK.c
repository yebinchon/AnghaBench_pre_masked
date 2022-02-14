
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int insns; struct cgraph_node* inlined_to; } ;
struct cgraph_node {scalar_t__ decl; int count; int needed; TYPE_2__ global; struct cgraph_node* next; TYPE_1__* callers; struct cgraph_edge* callees; } ;
struct cgraph_edge {int count; struct cgraph_node* callee; struct cgraph_node* caller; int inline_failed; struct cgraph_edge* next_callee; } ;
typedef int fibheap_t ;
struct TYPE_3__ {struct cgraph_node* caller; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cgraph_edge*,int,int) ;
 struct cgraph_node* FUNC_3 (struct cgraph_node*,int,int,int) ;
 int FUNC_4 (int,struct cgraph_node*,struct cgraph_node*) ;
 int FUNC_5 (struct cgraph_edge*,int) ;
 int FUNC_6 (struct cgraph_edge*) ;
 char* FUNC_7 (struct cgraph_node*) ;
 struct cgraph_node* VAR_5 ;
 int FUNC_8 (struct cgraph_edge*,struct cgraph_node*) ;
 int FUNC_9 (struct cgraph_node*) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 struct cgraph_edge* FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (scalar_t__,char*,...) ;
 int FUNC_15 (struct cgraph_node*,struct cgraph_node*,int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static bool
FUNC_16 (struct cgraph_node *VAR_8)
{
  int VAR_9 = FUNC_1 (VAR_1);
  int VAR_10 = FUNC_1 (VAR_3);
  int VAR_11 = FUNC_1 (VAR_4);
  fibheap_t VAR_12;
  struct cgraph_edge *VAR_13;
  struct cgraph_node *VAR_14, *VAR_15;
  int VAR_16 = 0;
  int VAR_17 = 0;

  if (FUNC_0 (VAR_8->decl))
    {
      VAR_9 = FUNC_1 (VAR_0);
      VAR_10 = FUNC_1 (VAR_2);
    }


  if (!VAR_10
      || FUNC_4 (1, VAR_8, VAR_8) >= VAR_9)
    return 0;
  VAR_12 = FUNC_13 ();
  FUNC_15 (VAR_8, VAR_8, VAR_12);
  if (FUNC_11 (VAR_12))
    {
      FUNC_10 (VAR_12);
      return 0;
    }

  if (VAR_6)
    FUNC_14 (VAR_6,
      "  Performing recursive inlining on %s\n",
      FUNC_7 (VAR_8));


  VAR_14 = FUNC_3 (VAR_8, VAR_8->count, 1, 0);
  VAR_14->needed = 1;
  for (VAR_13 = VAR_14->callees; VAR_13; VAR_13 = VAR_13->next_callee)
    if (!VAR_13->inline_failed)
      FUNC_2 (VAR_13, 1, 0);


  while (!FUNC_11 (VAR_12)
  && (FUNC_4 (1, VAR_8, VAR_14)
      <= VAR_9))
    {
      struct cgraph_edge *VAR_18 = FUNC_12 (VAR_12);
      struct cgraph_node *VAR_19;

      VAR_16 = 1;
      for (VAR_19 = VAR_18->caller;
    VAR_19->global.inlined_to; VAR_19 = VAR_19->callers->caller)
 if (VAR_8->decl == VAR_18->callee->decl)
   VAR_16++;
      if (VAR_16 > VAR_10)
 {
          if (VAR_6)
     FUNC_14 (VAR_6,
       "   maxmal depth reached\n");
   continue;
 }

      if (VAR_7)
 {
          if (!FUNC_6 (VAR_18))
     {
       if (VAR_6)
  FUNC_14 (VAR_6, "   Not inlining cold call\n");
       continue;
     }
          if (VAR_18->count * 100 / VAR_8->count < VAR_11)
     {
       if (VAR_6)
  FUNC_14 (VAR_6,
    "   Probability of edge is too small\n");
       continue;
     }
 }

      if (VAR_6)
 {
   FUNC_14 (VAR_6,
     "   Inlining call of depth %i", VAR_16);
   if (VAR_8->count)
     {
       FUNC_14 (VAR_6, " called approx. %.2f times per call",
         (double)VAR_18->count / VAR_8->count);
     }
   FUNC_14 (VAR_6, "\n");
 }
      FUNC_8 (VAR_18, VAR_14);
      FUNC_5 (VAR_18, 0);
      FUNC_15 (VAR_8, VAR_18->callee, VAR_12);
      VAR_17++;
    }
  if (!FUNC_11 (VAR_12) && VAR_6)
    FUNC_14 (VAR_6, "    Recursive inlining growth limit met.\n");

  FUNC_10 (VAR_12);
  if (VAR_6)
    FUNC_14 (VAR_6,
      "\n   Inlined %i times, body grown from %i to %i insns\n", VAR_17,
      VAR_14->global.insns, VAR_8->global.insns);




  for (VAR_8 = VAR_5; VAR_8 != VAR_14;
       VAR_8 = VAR_15)
    {
      VAR_15 = VAR_8->next;
      if (VAR_8->global.inlined_to == VAR_14)
 FUNC_9 (VAR_8);
    }
  FUNC_9 (VAR_14);




  return VAR_17 > 0;
}
