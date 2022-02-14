
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {scalar_t__ isrc_handlers; } ;
struct TYPE_3__ {int tri; int pol; } ;
struct aw_nmi_softc {TYPE_2__* cfg; TYPE_1__ intr; } ;
typedef int device_t ;
struct TYPE_4__ {int enable_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aw_nmi_softc*,int ,int) ;
 struct aw_nmi_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, struct intr_irqsrc *VAR_4,
    struct resource *VAR_5, struct intr_map_data *VAR_6)
{
 struct aw_nmi_softc *VAR_7;

 VAR_7 = FUNC_1(VAR_3);

 if (VAR_4->isrc_handlers == 0) {
  VAR_7->intr.pol = VAR_0;
  VAR_7->intr.tri = VAR_1;

  FUNC_0(VAR_7, VAR_7->cfg->enable_reg, !VAR_2);
 }

 return (0);
}
