
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

void
FUNC_2 (int VAR_9, bool VAR_10)
{
  if (VAR_10 || VAR_8)
    {
      int VAR_11, VAR_12 = VAR_3 + VAR_9;

      VAR_8 = FUNC_0 (VAR_2, VAR_8,
       VAR_12);
      VAR_6 = FUNC_0 (VAR_2,
         VAR_6, VAR_12);
      VAR_1 = FUNC_0 (VAR_2, VAR_1,
       VAR_12);




      if (VAR_4->flags & VAR_0)
        VAR_7 = FUNC_0 (VAR_2, VAR_7,
         VAR_12);

      for (VAR_11 = VAR_3; VAR_11 < VAR_12; VAR_11++)
 {
   FUNC_1 (&VAR_8[VAR_11], 0);
   FUNC_1 (&VAR_6[VAR_11], 0);
   FUNC_1 (&VAR_1[VAR_11], 0);



          if (VAR_4->flags & VAR_0)
            FUNC_1 (&VAR_7[VAR_11], 0);
 }
      VAR_3 = VAR_12;
    }
}
