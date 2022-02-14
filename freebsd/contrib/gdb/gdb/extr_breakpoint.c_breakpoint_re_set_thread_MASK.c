
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct breakpoint {int thread; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

void
FUNC_2 (struct breakpoint *VAR_1)
{
  if (VAR_1->thread != -1)
    {
      if (FUNC_0 (VAR_0))
 VAR_1->thread = FUNC_1 (VAR_0);
    }
}
