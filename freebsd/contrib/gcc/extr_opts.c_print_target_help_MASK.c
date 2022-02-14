
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 TYPE_1__* VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  unsigned int VAR_4;
  static bool VAR_5 = 0;


  if (VAR_5)
    return;

  VAR_5 = 1;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    if ((VAR_2[VAR_4].flags & (VAR_0 | VAR_1)) == VAR_0)
      {
 FUNC_2 (FUNC_0("\nTarget specific options:\n"));
 FUNC_1 (VAR_0);
 break;
      }
}
