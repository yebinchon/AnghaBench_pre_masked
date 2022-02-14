
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vlapic {int svr_last; int callout; struct LAPIC* apic_page; } ;
struct LAPIC {int svr; } ;


 int VAR_0 ;
 int FUNC_0 (struct vlapic*,char*) ;
 int FUNC_1 (struct vlapic*) ;
 int FUNC_2 (struct vlapic*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vlapic*) ;
 int FUNC_5 (struct vlapic*) ;
 scalar_t__ FUNC_6 (struct vlapic*) ;

void
FUNC_7(struct vlapic *VAR_1)
{
 struct LAPIC *VAR_2;
 uint32_t VAR_3, VAR_4, VAR_5;

 VAR_2 = VAR_1->apic_page;

 VAR_4 = VAR_2->svr;
 VAR_3 = VAR_1->svr_last;
 VAR_1->svr_last = VAR_4;

 VAR_5 = VAR_3 ^ VAR_4;
 if ((VAR_5 & VAR_0) != 0) {
  if ((VAR_4 & VAR_0) == 0) {




   FUNC_0(VAR_1, "vlapic is software-disabled");
   FUNC_1(VAR_1);
   FUNC_3(&VAR_1->callout);
   FUNC_2(VAR_1);
   FUNC_5(VAR_1);
  } else {




   FUNC_0(VAR_1, "vlapic is software-enabled");
   if (FUNC_6(VAR_1))
    FUNC_4(VAR_1);
  }
 }
}
