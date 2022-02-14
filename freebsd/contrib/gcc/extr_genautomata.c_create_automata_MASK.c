
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct automaton {int dummy; } ;
typedef TYPE_1__* decl_t ;
typedef TYPE_2__* automaton_t ;
struct TYPE_15__ {int decls_num; TYPE_2__* first_automaton; TYPE_1__** decls; } ;
struct TYPE_14__ {int automaton_order_num; TYPE_10__* corresponding_automaton_decl; struct TYPE_14__* next_automaton; void* ainsn_list; } ;
struct TYPE_13__ {scalar_t__ mode; } ;
struct TYPE_12__ {char* name; TYPE_2__* corresponding_automaton; scalar_t__ automaton_is_used; } ;


 TYPE_10__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 () ;
 TYPE_6__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 () ;

__attribute__((used)) static void
FUNC_14 (void)
{
  automaton_t VAR_9;
  automaton_t VAR_10;
  decl_t VAR_11;
  int VAR_12;
  int VAR_13;

  if (VAR_2 != 0)
    {
      FUNC_13 ();
      for (VAR_10 = ((void*)0), VAR_12 = 0;
           VAR_12 < VAR_2;
           VAR_12++, VAR_10 = VAR_9)
        {
   VAR_9 = FUNC_4 (sizeof (struct automaton));
   VAR_9->ainsn_list = FUNC_2 ();
   VAR_9->corresponding_automaton_decl = ((void*)0);
   VAR_9->next_automaton = ((void*)0);
          VAR_9->automaton_order_num = VAR_12;
          if (VAR_10 == ((void*)0))
            VAR_3->first_automaton = VAR_9;
          else
            VAR_10->next_automaton = VAR_9;
        }
    }
  else
    {
      VAR_12 = 0;
      VAR_10 = ((void*)0);
      for (VAR_13 = 0; VAR_13 < VAR_3->decls_num; VAR_13++)
 {
   VAR_11 = VAR_3->decls [VAR_13];
   if (VAR_11->mode == VAR_4
       && FUNC_0 (VAR_11)->automaton_is_used)
     {
       VAR_9 = FUNC_4 (sizeof (struct automaton));
       VAR_9->ainsn_list = FUNC_2 ();
       VAR_9->corresponding_automaton_decl
  = FUNC_0 (VAR_11);
       VAR_9->next_automaton = ((void*)0);
       FUNC_0 (VAR_11)->corresponding_automaton = VAR_9;
       VAR_9->automaton_order_num = VAR_12;
       if (VAR_10 == ((void*)0))
  VAR_3->first_automaton = VAR_9;
       else
  VAR_10->next_automaton = VAR_9;
       VAR_12++;
       VAR_10 = VAR_9;
     }
 }
      if (VAR_12 == 0)
 {
   VAR_9 = FUNC_4 (sizeof (struct automaton));
   VAR_9->ainsn_list = FUNC_2 ();
   VAR_9->corresponding_automaton_decl = ((void*)0);
   VAR_9->next_automaton = ((void*)0);
   VAR_3->first_automaton = VAR_9;
 }
      FUNC_12 ();
    }
  VAR_0 = FUNC_5 ();
  FUNC_10 (&VAR_0);
  VAR_1 = FUNC_5 ();
  FUNC_10 (&VAR_1);
  VAR_6 = FUNC_5 ();
  FUNC_10 (&VAR_6);
  VAR_5 = FUNC_5 ();
  FUNC_10 (&VAR_5);
  for (VAR_9 = VAR_3->first_automaton;
       VAR_9 != ((void*)0);
       VAR_9 = VAR_9->next_automaton)
    {
      if (VAR_7)
 {
   if (VAR_9->corresponding_automaton_decl == ((void*)0))
     FUNC_8 (VAR_8, "Prepare anonymous automaton creation ... ");
   else
     FUNC_8 (VAR_8, "Prepare automaton `%s' creation...",
       VAR_9->corresponding_automaton_decl->name);
 }
      FUNC_3 (VAR_9);
      FUNC_7 (VAR_9);
      if (VAR_7)
 FUNC_8 (VAR_8, "done\n");
      FUNC_1 (VAR_9);
      FUNC_6 (VAR_9);
      FUNC_11 (&VAR_5);
      FUNC_9 (VAR_9);
      FUNC_10 (&VAR_5);
    }
}
