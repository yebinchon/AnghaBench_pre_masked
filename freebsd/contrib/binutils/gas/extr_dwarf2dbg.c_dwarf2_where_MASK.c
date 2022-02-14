
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_line_info {int isa; int flags; scalar_t__ column; int filenum; int line; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,int *) ;
 struct dwarf2_line_info VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int ) ;

void
FUNC_2 (struct dwarf2_line_info *VAR_4)
{
  if (VAR_3 == VAR_0)
    {
      char *VAR_5;
      FUNC_0 (&VAR_5, &VAR_4->line);
      VAR_4->filenum = FUNC_1 (VAR_5, 0);
      VAR_4->column = 0;
      VAR_4->flags = VAR_1;
      VAR_4->isa = VAR_2.isa;
    }
  else
    *VAR_4 = VAR_2;
}
