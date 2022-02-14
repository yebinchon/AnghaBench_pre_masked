
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxctx {int host_tf; int host_dr7; int host_debugctl; int host_dr6; int host_dr3; int host_dr2; int host_dr1; int host_dr0; int guest_dr6; int guest_dr3; int guest_dr2; int guest_dr1; int guest_dr0; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static __inline void
FUNC_14(struct vmxctx *VAR_1)
{


 VAR_1->guest_dr0 = FUNC_6();
 VAR_1->guest_dr1 = FUNC_7();
 VAR_1->guest_dr2 = FUNC_8();
 VAR_1->guest_dr3 = FUNC_9();
 VAR_1->guest_dr6 = FUNC_10();





 FUNC_0(VAR_1->host_dr0);
 FUNC_1(VAR_1->host_dr1);
 FUNC_2(VAR_1->host_dr2);
 FUNC_3(VAR_1->host_dr3);
 FUNC_4(VAR_1->host_dr6);
 FUNC_13(VAR_0, VAR_1->host_debugctl);
 FUNC_5(VAR_1->host_dr7);
 FUNC_12(FUNC_11() | VAR_1->host_tf);
}
