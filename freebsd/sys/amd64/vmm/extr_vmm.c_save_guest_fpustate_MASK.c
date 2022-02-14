
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu {int guestfpu; int guest_xcr0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(struct vcpu *VAR_2)
{

 if ((FUNC_5() & VAR_0) == 0)
  FUNC_4("fpu emulation not enabled in host!");


 if (FUNC_6() & VAR_1) {
  VAR_2->guest_xcr0 = FUNC_7(0);
  FUNC_3(0, FUNC_8());
 }


 FUNC_1();
 FUNC_2(VAR_2->guestfpu);
 FUNC_0();
}
