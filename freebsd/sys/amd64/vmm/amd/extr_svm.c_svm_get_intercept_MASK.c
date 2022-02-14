
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmcb_ctrl {int* intercept; } ;
struct svm_softc {int dummy; } ;


 int FUNC_0 (int,char*) ;
 struct vmcb_ctrl* FUNC_1 (struct svm_softc*,int) ;

__attribute__((used)) static __inline int
FUNC_2(struct svm_softc *VAR_0, int VAR_1, int VAR_2, uint32_t VAR_3)
{
 struct vmcb_ctrl *VAR_4;

 FUNC_0(VAR_2 >=0 && VAR_2 < 5, ("invalid intercept index %d", VAR_2));

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 return (VAR_4->intercept[VAR_2] & VAR_3 ? 1 : 0);
}
