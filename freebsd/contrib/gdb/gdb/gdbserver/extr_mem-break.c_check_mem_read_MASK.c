
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct breakpoint {scalar_t__ pc; scalar_t__ old_data; struct breakpoint* next; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 struct breakpoint* VAR_1 ;
 int FUNC_0 (char*,scalar_t__,int) ;

void
FUNC_1 (CORE_ADDR VAR_2, char *VAR_3, int VAR_4)
{
  struct breakpoint *VAR_5 = VAR_1;
  CORE_ADDR VAR_6 = VAR_2 + VAR_4;

  for (; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {
      CORE_ADDR VAR_7 = VAR_5->pc + VAR_0;
      CORE_ADDR VAR_8, VAR_9;
      int VAR_10, VAR_11, VAR_12;

      if (VAR_2 >= VAR_7)
 continue;
      if (VAR_5->pc >= VAR_6)
 continue;

      VAR_8 = VAR_5->pc;
      if (VAR_2 > VAR_8)
 VAR_8 = VAR_2;

      VAR_9 = VAR_7;
      if (VAR_9 > VAR_6)
 VAR_9 = VAR_6;

      VAR_11 = VAR_9 - VAR_8;
      VAR_10 = VAR_8 - VAR_5->pc;
      VAR_12 = VAR_8 - VAR_2;

      FUNC_0 (VAR_3 + VAR_12, VAR_5->old_data + VAR_10, VAR_11);
    }
}
