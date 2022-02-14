
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int trace; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6 (void)
{
  int VAR_2;

  for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++)
    {
      if (FUNC_4 (FUNC_5 (VAR_2)) == 0
   && FUNC_3 (FUNC_5 (VAR_2)) == 0
   && FUNC_2 (FUNC_5 (VAR_2)) == 1)
 FUNC_1 (&VAR_1.trace, VAR_2);
      else
 FUNC_0 (&VAR_1.trace, VAR_2);
    }
}
