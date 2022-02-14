
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svm_regctx {int sctx_dr3; int sctx_dr2; int sctx_dr1; int sctx_dr0; int host_dr6; int host_dr3; int host_dr2; int host_dr1; int host_dr0; int host_debugctl; int host_dr7; } ;


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
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static __inline void
FUNC_13(struct svm_regctx *VAR_1)
{


 VAR_1->host_dr7 = FUNC_11();
 VAR_1->host_debugctl = FUNC_5(VAR_0);







 FUNC_4(0);
 FUNC_12(VAR_0, 0);


 VAR_1->host_dr0 = FUNC_6();
 VAR_1->host_dr1 = FUNC_7();
 VAR_1->host_dr2 = FUNC_8();
 VAR_1->host_dr3 = FUNC_9();
 VAR_1->host_dr6 = FUNC_10();


 FUNC_0(VAR_1->sctx_dr0);
 FUNC_1(VAR_1->sctx_dr1);
 FUNC_2(VAR_1->sctx_dr2);
 FUNC_3(VAR_1->sctx_dr3);
}
