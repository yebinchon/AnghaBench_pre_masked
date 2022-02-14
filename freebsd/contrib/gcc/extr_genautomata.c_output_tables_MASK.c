
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* automaton_t ;
struct TYPE_11__ {int insn_num; } ;
struct TYPE_10__ {TYPE_1__* first_automaton; } ;
struct TYPE_9__ {struct TYPE_9__* next_automaton; } ;


 char* VAR_0 ;
 TYPE_8__* FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8 (void)
{
  automaton_t VAR_4;

  FUNC_2 ();
  for (VAR_4 = VAR_2->first_automaton;
       VAR_4 != ((void*)0);
       VAR_4 = VAR_4->next_automaton)
    {
      FUNC_7 (VAR_4);
      FUNC_6 (VAR_4);
      FUNC_4 (VAR_4);
      FUNC_3 (VAR_4);
      FUNC_5 (VAR_4);
    }
  FUNC_1 (VAR_3, "\n#define %s %d\n\n", VAR_0,
           FUNC_0 (VAR_1)->insn_num);
}
