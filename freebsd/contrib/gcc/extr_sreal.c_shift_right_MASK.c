
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uhwi ;
struct TYPE_3__ {scalar_t__ exp; int sig_hi; int sig_lo; int sig; } ;
typedef TYPE_1__ sreal ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void
FUNC_1 (sreal *VAR_3, int VAR_4)
{
  FUNC_0 (VAR_4 > 0);
  FUNC_0 (VAR_4 <= VAR_0);



  FUNC_0 (VAR_3->exp + VAR_4 <= VAR_1);

  VAR_3->exp += VAR_4;


  if (VAR_4 > VAR_2)
    {
      VAR_4 -= VAR_2;
      VAR_3->sig_hi += (uhwi) 1 << (VAR_4 - 1);
      VAR_3->sig_lo = VAR_3->sig_hi >> VAR_4;
      VAR_3->sig_hi = 0;
    }
  else
    {
      VAR_3->sig_lo += (uhwi) 1 << (VAR_4 - 1);
      if (VAR_3->sig_lo & ((uhwi) 1 << VAR_2))
 {
   VAR_3->sig_hi++;
   VAR_3->sig_lo -= (uhwi) 1 << VAR_2;
 }
      VAR_3->sig_lo >>= VAR_4;
      VAR_3->sig_lo |= (VAR_3->sig_hi & (((uhwi) 1 << VAR_4) - 1)) << (VAR_2 - VAR_4);
      VAR_3->sig_hi >>= VAR_4;
    }




}
