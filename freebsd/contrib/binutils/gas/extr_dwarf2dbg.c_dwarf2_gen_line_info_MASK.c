
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;
struct dwarf2_line_info {unsigned int filenum; unsigned int line; } ;
typedef int addressT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct dwarf2_line_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ,int ,int ) ;

void
FUNC_2 (addressT VAR_4, struct dwarf2_line_info *VAR_5)
{
  static unsigned int VAR_6 = -1;
  static unsigned int VAR_7 = -1;

  symbolS *VAR_8;


  if (VAR_5->filenum == 0 || VAR_5->line == 0)
    return;





  if (VAR_1 == VAR_0
      && VAR_6 == VAR_5->line && VAR_7 == VAR_5->filenum)
    return;

  VAR_6 = VAR_5->line;
  VAR_7 = VAR_5->filenum;

  VAR_8 = FUNC_1 (VAR_3, VAR_4, VAR_2);
  FUNC_0 (VAR_8, VAR_5);
}
