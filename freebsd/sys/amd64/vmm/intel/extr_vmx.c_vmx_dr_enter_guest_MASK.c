
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxctx {int host_tf; int guest_dr6; int guest_dr3; int guest_dr2; int guest_dr1; int guest_dr0; int host_dr6; int host_dr3; int host_dr2; int host_dr1; int host_dr0; int host_debugctl; int host_dr7; } ;
typedef int register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static __inline void
FUNC_16(struct vmxctx *VAR_2)
{
 register_t VAR_3;


 VAR_2->host_dr7 = FUNC_12();
 VAR_2->host_debugctl = FUNC_6(VAR_0);






 FUNC_5(0);
 FUNC_15(VAR_0, 0);







 VAR_3 = FUNC_13();
 VAR_2->host_tf = VAR_3 & VAR_1;
 FUNC_14(VAR_3 & ~VAR_1);


 VAR_2->host_dr0 = FUNC_7();
 VAR_2->host_dr1 = FUNC_8();
 VAR_2->host_dr2 = FUNC_9();
 VAR_2->host_dr3 = FUNC_10();
 VAR_2->host_dr6 = FUNC_11();


 FUNC_0(VAR_2->guest_dr0);
 FUNC_1(VAR_2->guest_dr1);
 FUNC_2(VAR_2->guest_dr2);
 FUNC_3(VAR_2->guest_dr3);
 FUNC_4(VAR_2->guest_dr6);
}
