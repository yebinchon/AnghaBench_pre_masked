
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct breakpoint {scalar_t__ pc; char* old_data; scalar_t__ reinserting; struct breakpoint* next; } ;
typedef scalar_t__ CORE_ADDR ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 struct breakpoint* VAR_2 ;
 int FUNC_0 (char*,char*,int) ;

void
FUNC_1 (CORE_ADDR VAR_3, char *VAR_4, int VAR_5)
{
  struct breakpoint *VAR_6 = VAR_2;
  CORE_ADDR VAR_7 = VAR_3 + VAR_5;

  for (; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
    {
      CORE_ADDR VAR_8 = VAR_6->pc + VAR_1;
      CORE_ADDR VAR_9, VAR_10;
      int VAR_11, VAR_12, VAR_13;

      if (VAR_3 >= VAR_8)
 continue;
      if (VAR_6->pc >= VAR_7)
 continue;

      VAR_9 = VAR_6->pc;
      if (VAR_3 > VAR_9)
 VAR_9 = VAR_3;

      VAR_10 = VAR_8;
      if (VAR_10 > VAR_7)
 VAR_10 = VAR_7;

      VAR_12 = VAR_10 - VAR_9;
      VAR_11 = VAR_9 - VAR_6->pc;
      VAR_13 = VAR_9 - VAR_3;

      FUNC_0 (VAR_6->old_data + VAR_11, VAR_4 + VAR_13, VAR_12);
      if (VAR_6->reinserting == 0)
 FUNC_0 (VAR_4 + VAR_13, VAR_0 + VAR_11, VAR_12);
    }
}
