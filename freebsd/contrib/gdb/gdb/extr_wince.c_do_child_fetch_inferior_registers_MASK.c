
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int context; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void
FUNC_2 (int VAR_2)
{
  if (VAR_2 >= 0)
    {
      FUNC_1 (VAR_2, (char *) FUNC_0 (&VAR_1->context, VAR_2));
    }
  else
    {
      for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
 FUNC_2 (VAR_2);
    }
}
