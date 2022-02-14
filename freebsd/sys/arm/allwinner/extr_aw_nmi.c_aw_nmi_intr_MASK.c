
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int isrc; } ;
struct aw_nmi_softc {int dev; TYPE_2__* cfg; TYPE_1__ intr; } ;
struct TYPE_6__ {int td_intr_frame; } ;
struct TYPE_5__ {int enable_reg; int pending_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct aw_nmi_softc*,int ) ;
 int FUNC_1 (struct aw_nmi_softc*,int ,int) ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_3)
{
 struct aw_nmi_softc *VAR_4;

 VAR_4 = VAR_3;

 if (FUNC_0(VAR_4, VAR_4->cfg->pending_reg) == 0) {
  FUNC_2(VAR_4->dev, "Spurious interrupt\n");
  return (VAR_0);
 }

 if (FUNC_3(&VAR_4->intr.isrc, VAR_2->td_intr_frame) != 0) {
  FUNC_1(VAR_4, VAR_4->cfg->enable_reg, !VAR_1);
  FUNC_2(VAR_4->dev, "Stray interrupt, NMI disabled\n");
 }

 return (VAR_0);
}
