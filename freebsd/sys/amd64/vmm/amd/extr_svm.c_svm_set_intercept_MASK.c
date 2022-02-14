
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmcb_ctrl {int * intercept; } ;
struct svm_softc {int vm; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int,char*,int,int ,int ) ;
 int VAR_0 ;
 struct vmcb_ctrl* FUNC_2 (struct svm_softc*,int) ;
 int FUNC_3 (struct svm_softc*,int,int ) ;

__attribute__((used)) static __inline void
FUNC_4(struct svm_softc *VAR_1, int VAR_2, int VAR_3, uint32_t VAR_4,
    int VAR_5)
{
 struct vmcb_ctrl *VAR_6;
 uint32_t VAR_7;

 FUNC_0(VAR_3 >=0 && VAR_3 < 5, ("invalid intercept index %d", VAR_3));

 VAR_6 = FUNC_2(VAR_1, VAR_2);
 VAR_7 = VAR_6->intercept[VAR_3];

 if (VAR_5)
  VAR_6->intercept[VAR_3] |= VAR_4;
 else
  VAR_6->intercept[VAR_3] &= ~VAR_4;

 if (VAR_6->intercept[VAR_3] != VAR_7) {
  FUNC_3(VAR_1, VAR_2, VAR_0);
  FUNC_1(VAR_1->vm, VAR_2, "intercept[%d] modified "
      "from %#x to %#x", VAR_3, VAR_7, VAR_6->intercept[VAR_3]);
 }
}
