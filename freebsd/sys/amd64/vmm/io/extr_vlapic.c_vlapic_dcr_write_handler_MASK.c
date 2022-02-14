
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlapic {int timer_period_bt; int timer_freq_bt; struct LAPIC* apic_page; } ;
struct LAPIC {int icr_timer; int dcr_timer; } ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct vlapic*,char*,int ,int) ;
 int FUNC_2 (struct vlapic*) ;
 int FUNC_3 (struct vlapic*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct vlapic *VAR_1)
{
 struct LAPIC *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->apic_page;
 FUNC_2(VAR_1);

 VAR_3 = FUNC_5(VAR_2->dcr_timer);
 FUNC_1(VAR_1, "vlapic dcr_timer=%#x, divisor=%d",
     VAR_2->dcr_timer, VAR_3);







 FUNC_0(VAR_0 / VAR_3, &VAR_1->timer_freq_bt);
 VAR_1->timer_period_bt = VAR_1->timer_freq_bt;
 FUNC_4(&VAR_1->timer_period_bt, VAR_2->icr_timer);

 FUNC_3(VAR_1);
}
