
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tracepoint {int step_count; int address; } ;
struct expression {TYPE_1__* elts; } ;
struct cmd_list_element {int dummy; } ;
struct cleanup {int dummy; } ;
struct agent_reqs {scalar_t__ flaw; scalar_t__ min_height; int max_height; struct expression** reg_mask; } ;
struct agent_expr {scalar_t__ len; } ;
typedef enum actionline_type { ____Placeholder_actionline_type } actionline_type ;
struct TYPE_2__ {scalar_t__ opcode; int symbol; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct agent_expr*,struct agent_reqs*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct cmd_list_element*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct cleanup*) ;
 int VAR_12 ;
 int FUNC_7 (char*) ;
 int VAR_13 ;
 struct agent_expr* FUNC_8 (int ,struct expression*) ;
 scalar_t__ FUNC_9 (int) ;
 struct cmd_list_element* FUNC_10 (char**,int ,char*,int,int) ;
 struct cleanup* FUNC_11 (int ,struct expression**) ;
 int FUNC_12 (struct agent_expr*) ;
 struct expression* FUNC_13 (char**,int ,int) ;
 char* FUNC_14 (char*,char) ;
 scalar_t__ FUNC_15 (char*,char*,int) ;
 int FUNC_16 (char*,char**,int ) ;
 int FUNC_17 (char*,char*,...) ;
 int VAR_14 ;
 int VAR_15 ;

enum actionline_type
FUNC_18 (char **VAR_16, struct tracepoint *VAR_17)
{
  struct cmd_list_element *VAR_18;
  struct expression *VAR_19 = ((void*)0);
  struct cleanup *VAR_20 = ((void*)0);
  char *VAR_21;


  if (*VAR_16 == ((void*)0))
    return VAR_1;

  for (VAR_21 = *VAR_16; FUNC_9 ((int) *VAR_21);)
    VAR_21++;


  if (*VAR_21 == '\0')
    return VAR_0;

  if (*VAR_21 == '#')
    return VAR_2;

  VAR_18 = FUNC_10 (&VAR_21, VAR_10, "", -1, 1);
  if (VAR_18 == 0)
    {
      FUNC_17 ("'%s' is not an action that I know, or is ambiguous.", VAR_21);
      return VAR_0;
    }

  if (FUNC_5 (VAR_18, VAR_11))
    {
      struct agent_expr *VAR_22;
      struct agent_reqs VAR_23;

      do
 {
   VAR_7;
   while (FUNC_9 ((int) *VAR_21))
     VAR_21++;

   if (*VAR_21 == '$')
     {
       if ((0 == FUNC_15 ("reg", VAR_21 + 1, 3)) ||
    (0 == FUNC_15 ("arg", VAR_21 + 1, 3)) ||
    (0 == FUNC_15 ("loc", VAR_21 + 1, 3)))
  {
    VAR_21 = FUNC_14 (VAR_21, ',');
    continue;
  }

     }
   VAR_19 = FUNC_13 (&VAR_21, FUNC_4 (VAR_17->address), 1);
   VAR_20 = FUNC_11 (VAR_13, &VAR_19);

   if (VAR_19->elts[0].opcode == VAR_6)
     {
       if (FUNC_1 (VAR_19->elts[2].symbol) == VAR_3)
  {
    FUNC_17 ("constant %s (value %ld) will not be collected.",
      FUNC_0 (VAR_19->elts[2].symbol),
      FUNC_2 (VAR_19->elts[2].symbol));
    return VAR_0;
  }
       else if (FUNC_1 (VAR_19->elts[2].symbol) == VAR_4)
  {
    FUNC_17 ("%s is optimized away and cannot be collected.",
      FUNC_0 (VAR_19->elts[2].symbol));
    return VAR_0;
  }
     }



   VAR_22 = FUNC_8 (VAR_17->address, VAR_19);
   FUNC_12 (VAR_22);

   if (VAR_22->len > VAR_5)
     FUNC_7 ("expression too complicated, try simplifying");

   FUNC_3 (VAR_22, &VAR_23);
   (void) FUNC_11 (VAR_15, VAR_23.reg_mask);

   if (VAR_23.flaw != VAR_9)
     FUNC_7 ("malformed expression");

   if (VAR_23.min_height < 0)
     FUNC_7 ("gdb: Internal error: expression has min height < 0");

   if (VAR_23.max_height > 20)
     FUNC_7 ("expression too complicated, try simplifying");

   FUNC_6 (VAR_20);
 }
      while (VAR_21 && *VAR_21++ == ',');
      return VAR_2;
    }
  else if (FUNC_5 (VAR_18, VAR_14))
    {
      char *VAR_24;

      while (FUNC_9 ((int) *VAR_21))
 VAR_21++;
      VAR_24 = VAR_21;

      if (*VAR_21 == '\0' ||
   (VAR_17->step_count = FUNC_16 (VAR_21, &VAR_21, 0)) == 0)
 {
   FUNC_17 ("'%s': bad step-count; command ignored.", *VAR_16);
   return VAR_0;
 }
      return VAR_8;
    }
  else if (FUNC_5 (VAR_18, VAR_12))
    return VAR_1;
  else
    {
      FUNC_17 ("'%s' is not a supported tracepoint action.", *VAR_16);
      return VAR_0;
    }
}
