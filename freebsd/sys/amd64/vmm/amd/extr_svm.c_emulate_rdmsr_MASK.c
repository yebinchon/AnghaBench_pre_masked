
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;
struct vmcb_state {int rax; } ;
struct svm_softc {int vm; } ;
struct svm_regctx {int sctx_rdx; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int*,int*) ;
 struct svm_regctx* FUNC_2 (struct svm_softc*,int) ;
 struct vmcb_state* FUNC_3 (struct svm_softc*,int) ;
 int FUNC_4 (struct svm_softc*,int,int ,int*,int*) ;

__attribute__((used)) static int
FUNC_5(struct svm_softc *VAR_0, int VAR_1, u_int VAR_2, bool *VAR_3)
{
 struct vmcb_state *VAR_4;
 struct svm_regctx *VAR_5;
 uint64_t VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_2))
  VAR_7 = FUNC_1(VAR_0->vm, VAR_1, VAR_2, &VAR_6, VAR_3);
 else
  VAR_7 = FUNC_4(VAR_0, VAR_1, VAR_2, &VAR_6, VAR_3);

 if (VAR_7 == 0) {
  VAR_4 = FUNC_3(VAR_0, VAR_1);
  VAR_5 = FUNC_2(VAR_0, VAR_1);
  VAR_4->rax = VAR_6 & 0xffffffff;
  VAR_5->sctx_rdx = VAR_6 >> 32;
 }

 return (VAR_7);
}
