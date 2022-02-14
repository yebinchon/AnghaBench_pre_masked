
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlapic {scalar_t__ vcpuid; int svr_last; int boot_state; struct LAPIC* apic_page; } ;
struct LAPIC {int version; int dfr; int svr; scalar_t__ dcr_timer; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct LAPIC*,int) ;
 int FUNC_1 (struct vlapic*) ;
 int FUNC_2 (struct vlapic*) ;
 int FUNC_3 (struct vlapic*) ;
 int FUNC_4 (struct vlapic*) ;

__attribute__((used)) static void
FUNC_5(struct vlapic *VAR_6)
{
 struct LAPIC *VAR_7;

 VAR_7 = VAR_6->apic_page;
 FUNC_0(VAR_7, sizeof(struct LAPIC));

 VAR_7->id = FUNC_2(VAR_6);
 VAR_7->version = VAR_5;
 VAR_7->version |= (VAR_4 << VAR_3);
 VAR_7->dfr = 0xffffffff;
 VAR_7->svr = VAR_0;
 FUNC_3(VAR_6);
 FUNC_4(VAR_6);

 VAR_7->dcr_timer = 0;
 FUNC_1(VAR_6);

 if (VAR_6->vcpuid == 0)
  VAR_6->boot_state = VAR_2;
 else
  VAR_6->boot_state = VAR_1;

 VAR_6->svr_last = VAR_7->svr;
}
