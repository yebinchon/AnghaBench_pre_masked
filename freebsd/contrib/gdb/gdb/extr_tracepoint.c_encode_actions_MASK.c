
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct tracepoint {int address; struct action_line* actions; } ;
struct expression {TYPE_1__* elts; } ;
struct collection_list {int dummy; } ;
struct cmd_list_element {int dummy; } ;
struct cleanup {int dummy; } ;
struct agent_reqs {int max_height; int reg_mask_len; int* reg_mask; int min_height; int flaw; } ;
struct agent_expr {int dummy; } ;
struct action_line {char* action; struct action_line* next; } ;
struct TYPE_2__ {int opcode; int longconst; int symbol; int type; } ;
typedef int LONGEST ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ,int*,int *) ;
 unsigned long FUNC_1 (int ) ;

 unsigned long FUNC_2 (struct value*) ;
 unsigned long FUNC_3 (struct value*) ;
 int FUNC_4 (struct collection_list*,struct agent_expr*) ;
 int FUNC_5 (struct collection_list*,int ,int,int ,char) ;
 int FUNC_6 (struct collection_list*,int,unsigned long,unsigned long) ;
 int FUNC_7 (struct collection_list*,int) ;
 int VAR_2 ;
 int FUNC_8 (struct agent_expr*,struct agent_reqs*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct collection_list*) ;
 scalar_t__ FUNC_12 (struct cmd_list_element*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (struct collection_list*,int ,int,int ) ;
 int FUNC_14 (struct cleanup*) ;
 int FUNC_15 (struct cleanup*) ;
 int VAR_5 ;
 int FUNC_16 (char*,...) ;
 struct value* FUNC_17 (struct expression*) ;
 int VAR_6 ;
 struct agent_expr* FUNC_18 (int ,struct expression*) ;
 int VAR_7 ;
 scalar_t__ FUNC_19 (int) ;
 struct cmd_list_element* FUNC_20 (char**,int ,char*,int,int) ;
 struct cleanup* FUNC_21 (int ,struct expression**) ;
 struct cleanup* FUNC_22 (struct agent_expr*) ;
 int FUNC_23 (struct collection_list*) ;
 struct expression* FUNC_24 (char**,int ,int) ;
 int FUNC_25 (char*) ;
 struct collection_list VAR_8 ;
 char* FUNC_26 (char*,char) ;
 char** FUNC_27 (struct collection_list*,char*) ;
 scalar_t__ FUNC_28 (char*,char*,int) ;
 struct collection_list VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_29 (struct tracepoint *VAR_11, char ***VAR_12,
  char ***VAR_13)
{
  static char VAR_14[2048], VAR_15[2048];
  char *VAR_16;
  struct expression *VAR_17 = ((void*)0);
  struct action_line *VAR_18;
  int VAR_19;
  struct value *VAR_20;
  struct collection_list *VAR_21;
  struct cmd_list_element *VAR_22;
  struct agent_expr *VAR_23;
  int VAR_24;
  LONGEST VAR_25;


  FUNC_11 (&VAR_9);
  FUNC_11 (&VAR_8);
  VAR_21 = &VAR_9;

  *VAR_12 = ((void*)0);
  *VAR_13 = ((void*)0);

  FUNC_0 (VAR_11->address, &VAR_24, &VAR_25);

  for (VAR_18 = VAR_11->actions; VAR_18; VAR_18 = VAR_18->next)
    {
      VAR_1;
      VAR_16 = VAR_18->action;
      while (FUNC_19 ((int) *VAR_16))
 VAR_16++;

      if (*VAR_16 == '#')
 return;

      VAR_22 = FUNC_20 (&VAR_16, VAR_3, "", -1, 1);
      if (VAR_22 == 0)
 FUNC_16 ("Bad action list item: %s", VAR_16);

      if (FUNC_12 (VAR_22, VAR_4))
 {
   do
     {
       VAR_1;
       while (FUNC_19 ((int) *VAR_16))
  VAR_16++;

       if (0 == FUNC_28 ("$reg", VAR_16, 4))
  {
    for (VAR_19 = 0; VAR_19 < VAR_0; VAR_19++)
      FUNC_7 (VAR_21, VAR_19);
    VAR_16 = FUNC_26 (VAR_16, ',');
  }
       else if (0 == FUNC_28 ("$arg", VAR_16, 4))
  {
    FUNC_5 (VAR_21,
         VAR_11->address,
         VAR_24,
         VAR_25,
         'A');
    VAR_16 = FUNC_26 (VAR_16, ',');
  }
       else if (0 == FUNC_28 ("$loc", VAR_16, 4))
  {
    FUNC_5 (VAR_21,
         VAR_11->address,
         VAR_24,
         VAR_25,
         'L');
    VAR_16 = FUNC_26 (VAR_16, ',');
  }
       else
  {
    unsigned long VAR_26, VAR_27;
    struct cleanup *VAR_28 = ((void*)0);
    struct cleanup *VAR_29 = ((void*)0);
    struct agent_reqs VAR_30;

    VAR_17 = FUNC_24 (&VAR_16,
         FUNC_9 (VAR_11->address), 1);
    VAR_28 = FUNC_21 (VAR_6, &VAR_17);

    switch (VAR_17->elts[0].opcode)
      {
      case 130:
        VAR_19 = VAR_17->elts[1].longconst;
        if (VAR_7)
   FUNC_25 ("OP_REGISTER: ");
        FUNC_7 (VAR_21, VAR_19);
        break;

      case 128:

        VAR_20 = FUNC_17 (VAR_17);
        VAR_26 = FUNC_2 (VAR_20) + FUNC_3 (VAR_20);
        VAR_27 = FUNC_1 (FUNC_10 (VAR_17->elts[1].type));
        FUNC_6 (VAR_21, -1, VAR_26, VAR_27);
        break;

      case 129:
        FUNC_13 (VAR_21,
          VAR_17->elts[2].symbol,
          VAR_24,
          VAR_25);
        break;

      default:
        VAR_23 = FUNC_18 (VAR_11->address, VAR_17);

        VAR_29 = FUNC_22 (VAR_23);

        FUNC_8 (VAR_23, &VAR_30);
        if (VAR_30.flaw != VAR_2)
   FUNC_16 ("malformed expression");

        if (VAR_30.min_height < 0)
   FUNC_16 ("gdb: Internal error: expression has min height < 0");
        if (VAR_30.max_height > 20)
   FUNC_16 ("expression too complicated, try simplifying");

        FUNC_14 (VAR_29);
        FUNC_4 (VAR_21, VAR_23);


        if (VAR_30.reg_mask_len > 0)
   {
     int VAR_31;
     int VAR_32;

     for (VAR_31 = 0; VAR_31 < VAR_30.reg_mask_len; VAR_31++)
       {
         VAR_1;
         if (VAR_30.reg_mask[VAR_31] != 0)
    {

      for (VAR_32 = 0; VAR_32 < 8; VAR_32++)
        if (VAR_30.reg_mask[VAR_31] & (1 << VAR_32))

          FUNC_7 (VAR_21, VAR_31 * 8 + VAR_32);
    }
       }
   }
        break;
      }
    FUNC_15 (VAR_28);
  }
     }
   while (VAR_16 && *VAR_16++ == ',');
 }
      else if (FUNC_12 (VAR_22, VAR_10))
 {
   VAR_21 = &VAR_8;
 }
      else if (FUNC_12 (VAR_22, VAR_5))
 {
   if (VAR_21 == &VAR_8)
     VAR_21 = &VAR_9;
   else
     break;
 }
    }
  FUNC_23 (&VAR_9);
  FUNC_23 (&VAR_8);

  *VAR_12 = FUNC_27 (&VAR_9, VAR_14);
  *VAR_13 = FUNC_27 (&VAR_8, VAR_15);
}
