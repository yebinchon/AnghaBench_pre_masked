
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lpi_base; } ;
struct its_dev {TYPE_2__ lpis; } ;
struct its_col {int dummy; } ;
struct TYPE_6__ {struct its_col* col; struct its_dev* its_dev; scalar_t__ pid; } ;
struct its_cmd_desc {TYPE_3__ cmd_desc_inv; int cmd_type; } ;
struct gicv3_its_softc {struct its_col** sc_its_cols; } ;
struct TYPE_4__ {int isrc_cpu; } ;
struct gicv3_its_irqsrc {scalar_t__ gi_irq; TYPE_1__ gi_isrc; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct gicv3_its_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct its_cmd_desc*) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_1, struct its_dev *VAR_2,
    struct gicv3_its_irqsrc *VAR_3)
{
 struct gicv3_its_softc *VAR_4;
 struct its_cmd_desc VAR_5;
 struct its_col *VAR_6;

 VAR_4 = FUNC_1(VAR_1);
 VAR_6 = VAR_4->sc_its_cols[FUNC_0(&VAR_3->gi_isrc.isrc_cpu) - 1];

 VAR_5.cmd_type = VAR_0;

 VAR_5.cmd_desc_inv.pid = VAR_3->gi_irq - VAR_2->lpis.lpi_base;
 VAR_5.cmd_desc_inv.its_dev = VAR_2;
 VAR_5.cmd_desc_inv.col = VAR_6;

 FUNC_2(VAR_1, &VAR_5);
}
