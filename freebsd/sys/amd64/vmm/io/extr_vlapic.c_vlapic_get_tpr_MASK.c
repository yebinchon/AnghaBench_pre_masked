
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vlapic {struct LAPIC* apic_page; } ;
struct LAPIC {int tpr; } ;



__attribute__((used)) static uint8_t
FUNC_0(struct vlapic *VAR_0)
{
 struct LAPIC *VAR_1 = VAR_0->apic_page;

 return (VAR_1->tpr);
}
