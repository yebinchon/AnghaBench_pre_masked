
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cp_switch {struct cp_switch* next; int cases; int switch_stmt; } ;
typedef int location_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct cp_switch*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 struct cp_switch* VAR_2 ;

void
FUNC_7 (void)
{
  struct cp_switch *VAR_3 = VAR_2;
  location_t VAR_4;


  if (FUNC_0 (VAR_3->switch_stmt))
    VAR_4 = FUNC_1 (VAR_3->switch_stmt);
  else
    VAR_4 = VAR_0;
  if (!VAR_1)
    FUNC_4 (VAR_3->cases, VAR_4,
     FUNC_3 (VAR_3->switch_stmt),
     FUNC_2 (VAR_3->switch_stmt));

  FUNC_6 (VAR_3->cases);
  VAR_2 = VAR_2->next;
  FUNC_5 (VAR_3);
}
