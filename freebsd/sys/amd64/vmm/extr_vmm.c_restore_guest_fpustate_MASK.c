
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu {int guest_xcr0; int guestfpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(struct vcpu *VAR_2)
{


 FUNC_2(VAR_1);


 FUNC_1();
 FUNC_3(VAR_2->guestfpu);


 if (FUNC_5() & VAR_0)
  FUNC_4(0, VAR_2->guest_xcr0);





 FUNC_0();
}
