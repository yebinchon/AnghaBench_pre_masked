
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_28__ ;
typedef struct TYPE_38__ TYPE_26__ ;
typedef struct TYPE_37__ TYPE_22__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_18__ ;
typedef struct TYPE_34__ TYPE_16__ ;
typedef struct TYPE_33__ TYPE_14__ ;
typedef struct TYPE_32__ TYPE_13__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


typedef int unit_set_el_t ;
struct bypass_decl {scalar_t__ latency; } ;
typedef int pattern_set_el_t ;
typedef TYPE_1__* decl_t ;
struct TYPE_39__ {int final_p; int patterns_num; int patterns; int names_num; int names; } ;
struct TYPE_38__ {int automaton_is_used; int name; } ;
struct TYPE_37__ {size_t first_list_length; size_t all_names_num; int * names; } ;
struct TYPE_36__ {scalar_t__ mode; int pos; } ;
struct TYPE_35__ {int final_p; int patterns_num; int patterns; int names_num; int names; } ;
struct TYPE_34__ {int name; } ;
struct TYPE_33__ {int name; int unit_num; TYPE_26__* automaton_decl; int * automaton_name; } ;
struct TYPE_32__ {int decls_num; TYPE_1__** decls; int units_num; int insns_num; } ;
struct TYPE_31__ {scalar_t__ default_latency; TYPE_10__* bypass_list; int name; int insn_num; } ;
struct TYPE_30__ {scalar_t__ latency; char* out_insn_name; char* in_insn_name; struct TYPE_30__* next; TYPE_11__* in_insn_reserv; TYPE_11__* out_insn_reserv; } ;


 TYPE_28__* FUNC_0 (TYPE_1__*) ;
 TYPE_26__* FUNC_1 (TYPE_1__*) ;
 TYPE_10__* FUNC_2 (TYPE_1__*) ;
 TYPE_22__* FUNC_3 (TYPE_1__*) ;
 TYPE_11__* FUNC_4 (TYPE_1__*) ;
 TYPE_18__* FUNC_5 (TYPE_1__*) ;
 TYPE_16__* FUNC_6 (TYPE_1__*) ;
 TYPE_14__* FUNC_7 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int ) ;
 TYPE_13__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (char*,char*,...) ;
 TYPE_1__* FUNC_11 (int *) ;
 struct bypass_decl* FUNC_12 (TYPE_10__*,TYPE_11__*) ;
 TYPE_1__* FUNC_13 (int ) ;
 TYPE_1__* FUNC_14 (char*) ;
 TYPE_1__* FUNC_15 (TYPE_1__*) ;
 TYPE_1__* FUNC_16 (TYPE_1__*) ;
 TYPE_1__* FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int *,size_t,int ) ;
 int FUNC_19 (int ,int ,int ,int ,int ) ;
 int FUNC_20 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_21 (int ,int ) ;
 int VAR_12 ;
 int FUNC_22 (int ,char*,char*,...) ;

__attribute__((used)) static void
FUNC_23 (void)
{
  decl_t VAR_13;
  decl_t VAR_14;
  decl_t VAR_15;
  decl_t VAR_16;
  decl_t VAR_17;
  struct bypass_decl *VAR_18;
  int VAR_19;
  int VAR_20;


  VAR_19 = 0;
  for (VAR_20 = 0; VAR_20 < VAR_3->decls_num; VAR_20++)
    {
      VAR_13 = VAR_3->decls [VAR_20];
      if (VAR_13->mode == VAR_5)
 {
   VAR_19 = 1;
   VAR_15 = FUNC_15 (VAR_13);
   if (VAR_15 != VAR_13)
     {
       if (!VAR_12)
  FUNC_10 ("repeated declaration of automaton `%s'",
         FUNC_1 (VAR_13)->name);
       else
  FUNC_22 (0, "repeated declaration of automaton `%s'",
    FUNC_1 (VAR_13)->name);
     }
 }
    }



  for (VAR_20 = 0; VAR_20 < VAR_3->decls_num; VAR_20++)
    {
      VAR_13 = VAR_3->decls [VAR_20];
      if (VAR_13->mode == VAR_8)
 {
   if (FUNC_4 (VAR_13)->default_latency < 0)
     FUNC_10 ("define_insn_reservation `%s' has negative latency time",
     FUNC_4 (VAR_13)->name);
   FUNC_4 (VAR_13)->insn_num = VAR_3->insns_num;
   VAR_3->insns_num++;
   VAR_15 = FUNC_17 (VAR_13);
   if (VAR_15 != VAR_13)
     FUNC_10 ("`%s' is already used as insn reservation name",
     FUNC_4 (VAR_13)->name);
 }
      else if (VAR_13->mode == VAR_6)
 {
   if (FUNC_2 (VAR_13)->latency < 0)
     FUNC_10 ("define_bypass `%s - %s' has negative latency time",
     FUNC_2 (VAR_13)->out_insn_name,
     FUNC_2 (VAR_13)->in_insn_name);
 }
      else if (VAR_13->mode == VAR_11 || VAR_13->mode == VAR_10)
 {
   if (VAR_13->mode == VAR_11)
     {
       FUNC_7 (VAR_13)->automaton_decl = ((void*)0);
       if (FUNC_7 (VAR_13)->automaton_name != ((void*)0))
  {
    VAR_14
                    = FUNC_11 (FUNC_7 (VAR_13)->automaton_name);
    if (VAR_14 == ((void*)0))
      FUNC_10 ("automaton `%s' is not declared",
      FUNC_7 (VAR_13)->automaton_name);
    else
      {
        FUNC_1 (VAR_14)->automaton_is_used = 1;
        FUNC_7 (VAR_13)->automaton_decl
   = FUNC_1 (VAR_14);
      }
  }
       else if (VAR_19)
  FUNC_10 ("define_unit `%s' without automaton when one defined",
         FUNC_7 (VAR_13)->name);
       FUNC_7 (VAR_13)->unit_num = VAR_3->units_num;
       VAR_3->units_num++;
       if (FUNC_21 (FUNC_7 (VAR_13)->name, VAR_1) == 0)
  {
    FUNC_10 ("`%s' is declared as cpu unit", VAR_1);
    continue;
  }
       VAR_15 = FUNC_13 (FUNC_7 (VAR_13)->name);
     }
   else
     {
       if (FUNC_21 (FUNC_6 (VAR_13)->name, VAR_1) == 0)
  {
    FUNC_10 ("`%s' is declared as cpu reservation", VAR_1);
    continue;
  }
       VAR_15 = FUNC_13 (FUNC_6 (VAR_13)->name);
     }
   if (VAR_15 == ((void*)0))
     VAR_15 = FUNC_16 (VAR_13);
   else
     {
       if (VAR_13->mode == VAR_11)
  FUNC_10 ("repeated declaration of unit `%s'",
         FUNC_7 (VAR_13)->name);
       else
  FUNC_10 ("repeated declaration of reservation `%s'",
         FUNC_6 (VAR_13)->name);
     }
 }
    }


  for (VAR_20 = 0; VAR_20 < VAR_3->decls_num; VAR_20++)
    {
      VAR_13 = VAR_3->decls [VAR_20];
      if (VAR_13->mode == VAR_6)
 {
   VAR_16 = FUNC_14 (FUNC_2 (VAR_13)->out_insn_name);
   VAR_17 = FUNC_14 (FUNC_2 (VAR_13)->in_insn_name);
   if (VAR_16 == ((void*)0))
     FUNC_10 ("there is no insn reservation `%s'",
     FUNC_2 (VAR_13)->out_insn_name);
   else if (VAR_17 == ((void*)0))
     FUNC_10 ("there is no insn reservation `%s'",
     FUNC_2 (VAR_13)->in_insn_name);
   else
     {
       FUNC_2 (VAR_13)->out_insn_reserv
  = FUNC_4 (VAR_16);
       FUNC_2 (VAR_13)->in_insn_reserv
  = FUNC_4 (VAR_17);
       VAR_18
  = FUNC_12 (FUNC_4 (VAR_16)->bypass_list,
          FUNC_2 (VAR_13)->in_insn_reserv);
       if (VAR_18 != ((void*)0))
  {
    if (FUNC_2 (VAR_13)->latency == VAR_18->latency)
      {
        if (!VAR_12)
   FUNC_10
     ("the same bypass `%s - %s' is already defined",
      FUNC_2 (VAR_13)->out_insn_name,
      FUNC_2 (VAR_13)->in_insn_name);
        else
   FUNC_22
     (0, "the same bypass `%s - %s' is already defined",
      FUNC_2 (VAR_13)->out_insn_name,
      FUNC_2 (VAR_13)->in_insn_name);
      }
    else
      FUNC_10 ("bypass `%s - %s' is already defined",
      FUNC_2 (VAR_13)->out_insn_name,
      FUNC_2 (VAR_13)->in_insn_name);
  }
       else
  {
    FUNC_2 (VAR_13)->next
      = FUNC_4 (VAR_16)->bypass_list;
    FUNC_4 (VAR_16)->bypass_list
      = FUNC_2 (VAR_13);
  }
     }
 }
    }


  for (VAR_20 = 0; VAR_20 < VAR_3->decls_num; VAR_20++)
    {
      VAR_13 = VAR_3->decls [VAR_20];
      if (VAR_13->mode == VAR_7)
 {
   unit_set_el_t VAR_21;
   unit_set_el_t VAR_22;

   VAR_21
            = FUNC_18 (FUNC_3 (VAR_13)->names,
        FUNC_3 (VAR_13)->first_list_length, VAR_13->pos);
   VAR_22
     = FUNC_18 (&FUNC_3 (VAR_13)->names
        [FUNC_3 (VAR_13)->first_list_length],
                             FUNC_3 (VAR_13)->all_names_num
                             - FUNC_3 (VAR_13)->first_list_length,
                             VAR_13->pos);
   FUNC_8 (VAR_21, VAR_22, VAR_13->pos);
   FUNC_8 (VAR_22, VAR_21, VAR_13->pos);
 }
    }


  for (VAR_20 = 0; VAR_20 < VAR_3->decls_num; VAR_20++)
    {
      VAR_13 = VAR_3->decls [VAR_20];
      if (VAR_13->mode == VAR_9)
 {
   unit_set_el_t VAR_23;
   pattern_set_el_t VAR_24;

   VAR_23
            = FUNC_19
       (FUNC_5 (VAR_13)->names, FUNC_5 (VAR_13)->names_num,
        VAR_13->pos, VAR_2, FUNC_5 (VAR_13)->final_p);
   VAR_24
     = FUNC_20
       (FUNC_5 (VAR_13)->patterns,
        FUNC_5 (VAR_13)->patterns_num,
        VAR_13->pos, VAR_2, FUNC_5 (VAR_13)->final_p);
   FUNC_9 (VAR_23, VAR_24,
    VAR_13->pos, VAR_2,
    FUNC_5 (VAR_13)->final_p);
 }
    }


  for (VAR_20 = 0; VAR_20 < VAR_3->decls_num; VAR_20++)
    {
      VAR_13 = VAR_3->decls [VAR_20];
      if (VAR_13->mode == VAR_4)
 {
   unit_set_el_t VAR_25;
   pattern_set_el_t VAR_26;

   VAR_25
            = FUNC_19
       (FUNC_0 (VAR_13)->names, FUNC_0 (VAR_13)->names_num,
        VAR_13->pos, VAR_0, FUNC_0 (VAR_13)->final_p);
   VAR_26
     = FUNC_20
       (FUNC_0 (VAR_13)->patterns,
        FUNC_0 (VAR_13)->patterns_num,
        VAR_13->pos, VAR_0, FUNC_0 (VAR_13)->final_p);
   FUNC_9 (VAR_25, VAR_26,
    VAR_13->pos, VAR_0,
    FUNC_0 (VAR_13)->final_p);
 }
    }
}
