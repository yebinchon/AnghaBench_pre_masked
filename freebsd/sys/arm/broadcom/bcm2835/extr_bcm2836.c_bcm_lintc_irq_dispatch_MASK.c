
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct trapframe {int dummy; } ;
struct bcm_lintc_softc {int bls_dev; struct bcm_lintc_irqsrc* bls_isrcs; } ;
struct bcm_lintc_irqsrc {int bli_isrc; } ;


 int FUNC_0 (int ,char*,size_t) ;
 scalar_t__ FUNC_1 (int *,struct trapframe*) ;

__attribute__((used)) static inline void
FUNC_2(struct bcm_lintc_softc *VAR_0, u_int VAR_1,
    struct trapframe *VAR_2)
{
 struct bcm_lintc_irqsrc *VAR_3;

 VAR_3 = &VAR_0->bls_isrcs[VAR_1];
 if (FUNC_1(&VAR_3->bli_isrc, VAR_2) != 0)
  FUNC_0(VAR_0->bls_dev, "Stray irq %u detected\n", VAR_1);
}
