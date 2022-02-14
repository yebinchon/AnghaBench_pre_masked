
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct svm_vcpu {int dirty; } ;
struct svm_softc {int dummy; } ;


 struct svm_vcpu* FUNC_0 (struct svm_softc*,int) ;

__attribute__((used)) static __inline void
FUNC_1(struct svm_softc *VAR_0, int VAR_1, uint32_t VAR_2)
{
        struct svm_vcpu *VAR_3;

        VAR_3 = FUNC_0(VAR_0, VAR_1);

        VAR_3->dirty |= VAR_2;
}
