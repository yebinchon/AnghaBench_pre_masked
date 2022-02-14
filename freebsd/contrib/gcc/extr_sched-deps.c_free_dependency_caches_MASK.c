
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int *) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;

void
FUNC_2 (void)
{
  if (VAR_7)
    {
      int VAR_8;

      for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
 {
   FUNC_0 (&VAR_7[VAR_8]);
   FUNC_0 (&VAR_5[VAR_8]);
   FUNC_0 (&VAR_1[VAR_8]);



          if (VAR_3->flags & VAR_0)
            FUNC_0 (&VAR_6[VAR_8]);
 }
      FUNC_1 (VAR_7);
      VAR_7 = ((void*)0);
      FUNC_1 (VAR_5);
      VAR_5 = ((void*)0);
      FUNC_1 (VAR_1);
      VAR_1 = ((void*)0);




      if (VAR_3->flags & VAR_0)
        {
          FUNC_1 (VAR_6);
          VAR_6 = ((void*)0);
        }
    }
}
