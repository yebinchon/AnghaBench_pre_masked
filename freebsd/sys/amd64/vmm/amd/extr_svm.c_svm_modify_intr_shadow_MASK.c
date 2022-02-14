
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vmcb_ctrl {int intr_shadow; } ;
struct svm_softc {int vm; } ;


 int FUNC_0 (int ,int,char*,int) ;
 struct vmcb_ctrl* FUNC_1 (struct svm_softc*,int) ;

__attribute__((used)) static int
FUNC_2(struct svm_softc *VAR_0, int VAR_1, uint64_t VAR_2)
{
 struct vmcb_ctrl *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 VAR_4 = VAR_3->intr_shadow;
 VAR_5 = VAR_2 ? 1 : 0;
 if (VAR_5 != VAR_4) {
  VAR_3->intr_shadow = VAR_5;
  FUNC_0(VAR_0->vm, VAR_1, "Setting intr_shadow to %d", VAR_5);
 }
 return (0);
}
