
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intr_map_data_fdt {int ncells; size_t* cells; } ;
struct intr_map_data {scalar_t__ type; } ;
struct intr_irqsrc {int dummy; } ;
struct bcm_lintc_softc {TYPE_1__* bls_isrcs; } ;
typedef int device_t ;
struct TYPE_2__ {struct intr_irqsrc bli_isrc; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct bcm_lintc_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_4, struct intr_map_data *VAR_5,
    struct intr_irqsrc **VAR_6)
{
 struct intr_map_data_fdt *VAR_7;
 struct bcm_lintc_softc *VAR_8;

 if (VAR_5->type != VAR_3)
  return (VAR_2);

 VAR_7 = (struct intr_map_data_fdt *)VAR_5;
 if (VAR_7->ncells > 2 || VAR_7->cells[0] >= VAR_0)
  return (VAR_1);



 VAR_8 = FUNC_0(VAR_4);
 *VAR_6 = &VAR_8->bls_isrcs[VAR_7->cells[0]].bli_isrc;
 return (0);
}
