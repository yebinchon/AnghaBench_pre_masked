
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
typedef int ULONGEST ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ui_file*,char,int,int ) ;

void
FUNC_1 (CORE_ADDR VAR_2, int VAR_3, struct ui_file *VAR_4)
{
  int VAR_5 = VAR_1;

  if (VAR_5 < (sizeof (CORE_ADDR) * VAR_0))
    VAR_2 &= ((CORE_ADDR) 1 << VAR_5) - 1;
  FUNC_0 (VAR_4, 'x', VAR_3, (ULONGEST) VAR_2);
}
