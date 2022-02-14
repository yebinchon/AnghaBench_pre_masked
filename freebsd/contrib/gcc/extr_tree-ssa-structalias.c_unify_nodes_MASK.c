
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* constraint_graph_t ;
struct TYPE_10__ {char* name; int oldsolution; int solution; } ;
struct TYPE_9__ {scalar_t__ iterations; int unified_vars_static; int unified_vars_dynamic; } ;
struct TYPE_8__ {scalar_t__* succs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_7 (unsigned int) ;
 int FUNC_8 (scalar_t__,char*,char*,char*) ;
 int FUNC_9 (int) ;
 TYPE_7__* FUNC_10 (unsigned int) ;
 int FUNC_11 (TYPE_1__*,unsigned int,unsigned int) ;
 int FUNC_12 (TYPE_1__*,unsigned int,unsigned int) ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 scalar_t__ FUNC_13 (TYPE_1__*,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_14 (constraint_graph_t VAR_7, unsigned int VAR_8, unsigned int VAR_9,
      bool VAR_10)
{

  FUNC_9 (VAR_8 != VAR_9 && FUNC_7 (VAR_8) == VAR_8);
  if (VAR_3 && (VAR_4 & VAR_0))
    FUNC_8 (VAR_3, "Unifying %s to %s\n",
      FUNC_10 (VAR_9)->name,
      FUNC_10 (VAR_8)->name);

  if (VAR_10)
    VAR_6.unified_vars_dynamic++;
  else
    VAR_6.unified_vars_static++;

  FUNC_11 (VAR_7, VAR_8, VAR_9);
  FUNC_12 (VAR_7, VAR_8, VAR_9);

  if (VAR_10 && FUNC_4 (VAR_1, VAR_9))
    {
      FUNC_2 (VAR_1, VAR_9);
      if (!FUNC_4 (VAR_1, VAR_8))
 FUNC_3 (VAR_1, VAR_8);
      else
 {
   FUNC_9 (VAR_2 > 0);
   VAR_2--;
 }
    }



  if (FUNC_6 (FUNC_10 (VAR_8)->solution,
         FUNC_10 (VAR_9)->solution))
    {
      if (VAR_10 && !FUNC_4 (VAR_1, VAR_8))
 {
   FUNC_3 (VAR_1, VAR_8);
   VAR_2++;
 }
    }

  FUNC_1 (FUNC_10 (VAR_9)->solution);
  FUNC_1 (FUNC_10 (VAR_9)->oldsolution);

  if (VAR_6.iterations > 0)
    {
      FUNC_1 (FUNC_10 (VAR_8)->oldsolution);
      FUNC_10 (VAR_8)->oldsolution = FUNC_0 (&VAR_5);
    }

  if (FUNC_13 (VAR_7, VAR_8, VAR_8))
    {
      if (VAR_7->succs[VAR_8])
 FUNC_5 (VAR_7->succs[VAR_8], VAR_8);
    }
}
