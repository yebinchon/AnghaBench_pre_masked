
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;
struct dwarf2_line_info {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct dwarf2_line_info VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *,struct dwarf2_line_info*) ;
 int VAR_8 ;
 int FUNC_3 (struct dwarf2_line_info*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

void
FUNC_4 (symbolS *VAR_12)
{
  struct dwarf2_line_info VAR_13;

  if (!VAR_8)
    return;
  if (FUNC_0 (VAR_12) != VAR_10)
    return;
  if (!(FUNC_1 (VAR_11, VAR_10) & VAR_5))
    return;

  if (VAR_7 == VAR_0)
    FUNC_3 (&VAR_13);
  else
    {
      VAR_13 = VAR_6;
      VAR_9 = VAR_4;
    }

  VAR_13.flags |= VAR_1;

  VAR_6.flags &= ~(VAR_1
       | VAR_3
       | VAR_2);

  FUNC_2 (VAR_12, &VAR_13);
}
