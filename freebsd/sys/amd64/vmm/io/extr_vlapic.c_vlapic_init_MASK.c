
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlapic {scalar_t__ vcpuid; int msr_apicbase; int callout; int timer_mtx; int * apic_page; int * vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (struct vlapic*) ;
 scalar_t__ FUNC_4 (int *) ;

void
FUNC_5(struct vlapic *VAR_4)
{
 FUNC_0(VAR_4->vm != ((void*)0), ("vlapic_init: vm is not initialized"));
 FUNC_0(VAR_4->vcpuid >= 0 &&
     VAR_4->vcpuid < FUNC_4(VAR_4->vm),
     ("vlapic_init: vcpuid is not initialized"));
 FUNC_0(VAR_4->apic_page != ((void*)0), ("vlapic_init: apic_page is not "
     "initialized"));
 FUNC_2(&VAR_4->timer_mtx, "vlapic timer mtx", ((void*)0), VAR_3);
 FUNC_1(&VAR_4->callout, 1);

 VAR_4->msr_apicbase = VAR_2 | VAR_1;

 if (VAR_4->vcpuid == 0)
  VAR_4->msr_apicbase |= VAR_0;

 FUNC_3(VAR_4);
}
