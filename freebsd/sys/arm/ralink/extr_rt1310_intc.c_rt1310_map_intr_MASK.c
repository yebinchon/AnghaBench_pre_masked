
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt1310_intc_softc {TYPE_1__* ri_isrcs; } ;
struct intr_map_data_fdt {int ncells; size_t* cells; } ;
struct intr_map_data {scalar_t__ type; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {struct intr_irqsrc ri_isrc; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 struct rt1310_intc_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_4, struct intr_map_data *VAR_5,
    struct intr_irqsrc **VAR_6)
{
 struct intr_map_data_fdt *VAR_7;
 struct rt1310_intc_softc *VAR_8;

 if (VAR_5->type != VAR_3)
  return (VAR_1);

 VAR_7 = (struct intr_map_data_fdt *)VAR_5;

 if (VAR_7->ncells != 1 || VAR_7->cells[0] >= VAR_2)
  return (VAR_0);

 VAR_8 = FUNC_0(VAR_4);
 *VAR_6 = &VAR_8->ri_isrcs[VAR_7->cells[0]].ri_isrc;
 return (0);
}
