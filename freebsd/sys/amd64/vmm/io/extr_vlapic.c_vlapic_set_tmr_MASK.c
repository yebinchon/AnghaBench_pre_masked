
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* set_tmr ) (struct vlapic*,int,int) ;} ;
struct vlapic {TYPE_1__ ops; struct LAPIC* apic_page; } ;
struct LAPIC {int tmr0; } ;


 int FUNC_0 (struct vlapic*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct vlapic *VAR_0, int VAR_1, bool VAR_2)
{
 struct LAPIC *VAR_3;
 uint32_t *VAR_4, VAR_5;
 int VAR_6;

 VAR_3 = VAR_0->apic_page;
 VAR_4 = &VAR_3->tmr0;
 VAR_6 = (VAR_1 / 32) * 4;
 VAR_5 = 1 << (VAR_1 % 32);
 if (VAR_2)
  VAR_4[VAR_6] |= VAR_5;
 else
  VAR_4[VAR_6] &= ~VAR_5;

 if (VAR_0->ops.set_tmr != ((void*)0))
  (*VAR_0->ops.set_tmr)(VAR_0, VAR_1, VAR_2);
}
