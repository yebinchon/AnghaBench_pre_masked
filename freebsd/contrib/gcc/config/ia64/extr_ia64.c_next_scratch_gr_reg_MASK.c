
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gr_used_mask; } ;


 scalar_t__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 () ;
 int * VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1 (void)
{
  int VAR_5, VAR_6;

  for (VAR_5 = 0; VAR_5 < 32; ++VAR_5)
    {
      VAR_6 = (VAR_4 + VAR_5 + 1) & 31;
      if (VAR_0[VAR_6]
   && ! VAR_2[VAR_6]
   && ! VAR_3[VAR_6]
   && ((VAR_1.gr_used_mask >> VAR_6) & 1) == 0)
 {
   VAR_4 = VAR_6;
   return VAR_6;
 }
    }


  FUNC_0 ();
}
