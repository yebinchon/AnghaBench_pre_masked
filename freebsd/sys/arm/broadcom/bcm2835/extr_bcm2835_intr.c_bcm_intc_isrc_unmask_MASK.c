
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_intc_softc {int dummy; } ;
struct bcm_intc_irqsrc {int bii_mask; int bii_enable_reg; } ;


 int FUNC_0 (struct bcm_intc_softc*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct bcm_intc_softc *VAR_0, struct bcm_intc_irqsrc *VAR_1)
{

 FUNC_0(VAR_0, VAR_1->bii_enable_reg, VAR_1->bii_mask);
}
