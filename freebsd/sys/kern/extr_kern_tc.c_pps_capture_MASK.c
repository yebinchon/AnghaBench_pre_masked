
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timehands {scalar_t__ th_generation; TYPE_1__* th_counter; } ;
struct pps_state {scalar_t__ capgen; int capcount; int capffth; struct timehands* capth; } ;
struct TYPE_2__ {int (* tc_get_timecount ) (TYPE_1__*) ;} ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 struct timehands* VAR_1 ;

void
FUNC_4(struct pps_state *VAR_2)
{
 struct timehands *VAR_3;

 FUNC_0(VAR_2 != ((void*)0), ("NULL pps pointer in pps_capture"));
 VAR_3 = VAR_1;
 VAR_2->capgen = FUNC_1(&VAR_3->th_generation);
 VAR_2->capth = VAR_3;



 VAR_2->capcount = VAR_3->th_counter->tc_get_timecount(VAR_3->th_counter);
 FUNC_2();
 if (VAR_2->capgen != VAR_3->th_generation)
  VAR_2->capgen = 0;
}
