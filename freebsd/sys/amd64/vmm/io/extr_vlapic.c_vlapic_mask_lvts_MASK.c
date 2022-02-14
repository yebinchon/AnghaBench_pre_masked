
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlapic {struct LAPIC* apic_page; } ;
struct LAPIC {int lvt_error; int lvt_lint1; int lvt_lint0; int lvt_pcint; int lvt_thermal; int lvt_timer; int lvt_cmci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vlapic*,int ) ;

__attribute__((used)) static void
FUNC_1(struct vlapic *VAR_8)
{
 struct LAPIC *VAR_9 = VAR_8->apic_page;

 VAR_9->lvt_cmci |= VAR_0;
 FUNC_0(VAR_8, VAR_1);

 VAR_9->lvt_timer |= VAR_0;
 FUNC_0(VAR_8, VAR_7);

 VAR_9->lvt_thermal |= VAR_0;
 FUNC_0(VAR_8, VAR_6);

 VAR_9->lvt_pcint |= VAR_0;
 FUNC_0(VAR_8, VAR_5);

 VAR_9->lvt_lint0 |= VAR_0;
 FUNC_0(VAR_8, VAR_3);

 VAR_9->lvt_lint1 |= VAR_0;
 FUNC_0(VAR_8, VAR_4);

 VAR_9->lvt_error |= VAR_0;
 FUNC_0(VAR_8, VAR_2);
}
