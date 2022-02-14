
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* regexp_t ;
typedef int automaton_t ;
struct TYPE_13__ {int regexps_num; TYPE_1__** regexps; } ;
struct TYPE_12__ {TYPE_4__* alt_states; } ;
struct TYPE_11__ {struct TYPE_11__* next_alt_state; int state; } ;
struct TYPE_10__ {scalar_t__ mode; } ;


 TYPE_8__* FUNC_0 (TYPE_1__*) ;
 TYPE_4__* VAR_0 ;
 TYPE_6__* VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int) ;
 TYPE_4__* FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6 (regexp_t VAR_4, automaton_t VAR_5,
     int VAR_6)
{
  int VAR_7;

  if (VAR_4->mode != VAR_2)
    {
      VAR_0 = FUNC_3 ();
      VAR_3 = FUNC_4 (1, VAR_5);
      VAR_0->state = VAR_3;



      VAR_0->next_alt_state = VAR_1->alt_states;
      VAR_1->alt_states = VAR_0;
      (void) FUNC_5 (VAR_4, VAR_5, 0);
      FUNC_1 (VAR_0, VAR_5);
    }
  else
    {
      FUNC_2 (!VAR_6);



      for (VAR_7 = FUNC_0 (VAR_4)->regexps_num - 1; VAR_7 >= 0; VAR_7--)
 FUNC_6 (FUNC_0 (VAR_4)->regexps [VAR_7],
      VAR_5, 1);
    }
}
