
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppoatm_vcc {int chan; int wakeup_tasklet; int old_pop; int old_push; } ;
struct atm_vcc {int * user_back; int pop; int push; } ;


 int VAR_0 ;
 struct pppoatm_vcc* FUNC_0 (struct atm_vcc*) ;
 int FUNC_1 (struct pppoatm_vcc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct atm_vcc *VAR_1)
{
 struct pppoatm_vcc *VAR_2;
 VAR_2 = FUNC_0(VAR_1);
 VAR_1->push = VAR_2->old_push;
 VAR_1->pop = VAR_2->old_pop;
 FUNC_4(&VAR_2->wakeup_tasklet);
 FUNC_3(&VAR_2->chan);
 VAR_1->user_back = ((void*)0);
 FUNC_1(VAR_2);

 FUNC_2(VAR_0);
}
