
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intr_irqsrc {int dummy; } ;
struct aw_nmi_softc {TYPE_1__* cfg; } ;
typedef int device_t ;
struct TYPE_2__ {int enable_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct aw_nmi_softc*,int ,int ) ;
 struct aw_nmi_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_1, struct intr_irqsrc *VAR_2)
{
 struct aw_nmi_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_3, VAR_3->cfg->enable_reg, VAR_0);
}
