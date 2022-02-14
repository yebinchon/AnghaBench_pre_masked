
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmcb_ctrl {int intr_shadow; } ;
struct svm_softc {int dummy; } ;


 struct vmcb_ctrl* FUNC_0 (struct svm_softc*,int) ;

__attribute__((used)) static int
FUNC_1(struct svm_softc *VAR_0, int VAR_1, uint64_t *VAR_2)
{
 struct vmcb_ctrl *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 *VAR_2 = VAR_3->intr_shadow;
 return (0);
}
