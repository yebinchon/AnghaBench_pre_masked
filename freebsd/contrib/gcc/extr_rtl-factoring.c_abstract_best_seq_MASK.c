
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pattern_seq ;
struct TYPE_4__ {struct TYPE_4__* next_pattern_seq; int link_reg; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 TYPE_1__* VAR_0 ;
 int* VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7 (void)
{
  pattern_seq VAR_2;


  FUNC_1 ();
  FUNC_5 ();
  FUNC_6 ();
  FUNC_2 ();
  FUNC_4 ();


  VAR_1[FUNC_0 (VAR_0->link_reg)] = 1;


  VAR_2 = VAR_0;
  VAR_0 = VAR_2->next_pattern_seq;
  FUNC_3 (VAR_2);
}
