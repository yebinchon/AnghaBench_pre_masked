
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pppoatm_vcc {int wakeup_tasklet; int (* old_pop ) (struct atm_vcc*,struct sk_buff*) ;} ;
struct atm_vcc {int dummy; } ;


 struct pppoatm_vcc* FUNC_0 (struct atm_vcc*) ;
 int FUNC_1 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct atm_vcc *VAR_0, struct sk_buff *VAR_1)
{
 struct pppoatm_vcc *VAR_2 = FUNC_0(VAR_0);
 VAR_2->old_pop(VAR_0, VAR_1);
 FUNC_2(&VAR_2->wakeup_tasklet);
}
