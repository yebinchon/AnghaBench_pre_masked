
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fx_subsy; scalar_t__ fx_r_type; } ;
typedef TYPE_1__ fixS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;

void
FUNC_1 (fixS *VAR_6)
{
  if (VAR_6->fx_subsy && VAR_6->fx_subsy == VAR_4)
    {
      if (VAR_6->fx_r_type == VAR_0)
 {
   if (!VAR_5)
     FUNC_0 ();
   VAR_6->fx_r_type = VAR_3;
 }
      else
 {
   if (!VAR_5)
     VAR_6->fx_r_type = VAR_1;
   else
     VAR_6->fx_r_type = VAR_2;
 }
      VAR_6->fx_subsy = 0;
    }
}
