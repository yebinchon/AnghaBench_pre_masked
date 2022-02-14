
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_line_info {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct dwarf2_line_info VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,struct dwarf2_line_info*) ;
 int FUNC_1 (struct dwarf2_line_info*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_7 ;

void
FUNC_3 (int VAR_8)
{
  struct dwarf2_line_info VAR_9;

  if (VAR_7)
    {





      VAR_9 = VAR_5;



      if (VAR_6 != VAR_0)
 VAR_7 = VAR_4;
    }
  else if (VAR_6 != VAR_0)
    return;
  else
    FUNC_1 (&VAR_9);

  FUNC_0 (FUNC_2 () - VAR_8, &VAR_9);

  VAR_5.flags &= ~(VAR_1
       | VAR_3
       | VAR_2);
}
