
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct dr {scalar_t__ dr_ts; scalar_t__ dr_gate; scalar_t__ dr_life; TYPE_1__* dr_ifp; } ;
typedef scalar_t__ naddr ;
struct TYPE_4__ {scalar_t__ tv_sec; } ;
struct TYPE_3__ {int int_name; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 struct dr* VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (char*,int ,int ) ;

void
FUNC_6(naddr VAR_7)
{
 time_t VAR_8;
 struct dr *VAR_9;



 if (VAR_6) {



  if (VAR_2 != ((void*)0))
   FUNC_4();
  FUNC_2();
  return;
 }





 if (VAR_7 != 0) {



  for (VAR_9 = VAR_3; VAR_9 < &VAR_3[VAR_0]; VAR_9++) {
   if (VAR_9->dr_ts == 0)
    continue;






   if (VAR_9->dr_gate == VAR_7) {
    VAR_8 = (VAR_4.tv_sec - VAR_9->dr_life
           + VAR_1);
    if (VAR_9->dr_ts > VAR_8) {
     FUNC_5("age 0.0.0.0 --> %s via %s",
        FUNC_1(VAR_9->dr_gate),
        VAR_9->dr_ifp->int_name);
     VAR_9->dr_ts = VAR_8;
    }
    break;
   }
  }
 }

 FUNC_3();
 FUNC_4();







 if (VAR_5 < 0 && VAR_7 == 0)
  FUNC_0(0);
}
