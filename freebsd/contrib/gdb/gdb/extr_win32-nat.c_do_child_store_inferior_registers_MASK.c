
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int context; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static void
FUNC_1 (int VAR_3)
{
  if (!VAR_1)
                                                                       ;
  else if (VAR_3 >= 0)
    FUNC_0 (VAR_3, ((char *) &VAR_1->context) + VAR_2[VAR_3]);
  else
    {
      for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 FUNC_1 (VAR_3);
    }
}
