
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmcb {int dummy; } ;
struct svm_softc {TYPE_1__* vcpu; } ;
struct TYPE_2__ {struct vmcb vmcb; } ;



__attribute__((used)) static __inline struct vmcb *
FUNC_0(struct svm_softc *VAR_0, int VAR_1)
{

 return (&(VAR_0->vcpu[VAR_1].vmcb));
}
