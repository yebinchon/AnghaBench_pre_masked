
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int ;
struct its_col {int dummy; } ;
struct TYPE_8__ {scalar_t__ pid; scalar_t__ id; struct its_col* col; TYPE_3__* its_dev; } ;
struct its_cmd_desc {TYPE_4__ cmd_desc_mapvi; int cmd_type; } ;
struct gicv3_its_softc {scalar_t__ sc_irq_base; struct its_col** sc_its_cols; } ;
struct TYPE_5__ {int isrc_cpu; } ;
struct gicv3_its_irqsrc {scalar_t__ gi_irq; TYPE_3__* gi_its_dev; TYPE_1__ gi_isrc; } ;
typedef int device_t ;
struct TYPE_6__ {scalar_t__ lpi_base; } ;
struct TYPE_7__ {TYPE_2__ lpis; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 struct gicv3_its_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct its_cmd_desc*) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_1, struct gicv3_its_irqsrc *VAR_2)
{
 struct gicv3_its_softc *VAR_3;
 struct its_cmd_desc VAR_4;
 struct its_col *VAR_5;
 u_int VAR_6;

 VAR_3 = FUNC_1(VAR_1);

 VAR_6 = FUNC_0(&VAR_2->gi_isrc.isrc_cpu) - 1;
 VAR_5 = VAR_3->sc_its_cols[VAR_6];

 VAR_4.cmd_type = VAR_0;
 VAR_4.cmd_desc_mapvi.its_dev = VAR_2->gi_its_dev;
 VAR_4.cmd_desc_mapvi.col = VAR_5;

 VAR_4.cmd_desc_mapvi.id = VAR_2->gi_irq - VAR_2->gi_its_dev->lpis.lpi_base;

 VAR_4.cmd_desc_mapvi.pid = VAR_2->gi_irq + VAR_3->sc_irq_base;

 FUNC_2(VAR_1, &VAR_4);
}
