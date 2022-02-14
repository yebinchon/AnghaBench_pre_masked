
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gr_used_mask; int n_local_regs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static int
FUNC_2 (int VAR_7)
{
  int VAR_8;



  if (VAR_2)
    {
      for (VAR_8 = FUNC_0 (1); VAR_8 <= FUNC_0 (31); VAR_8++)
 if (! VAR_6[VAR_8]
     && VAR_0[VAR_8]
     && ! VAR_3[VAR_8]
     && ! VAR_5[VAR_8]
     && ((VAR_1.gr_used_mask >> VAR_8) & 1) == 0)
   {
     VAR_1.gr_used_mask |= 1 << VAR_8;
     return VAR_8;
   }
    }

  if (VAR_7)
    {
      VAR_8 = VAR_1.n_local_regs;



      if (VAR_8 < (80 - VAR_4))
 {
   VAR_1.n_local_regs = VAR_8 + 1;
   return FUNC_1 (0) + VAR_8;
 }
    }


  return 0;
}
