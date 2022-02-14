
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct intr_map_data_fdt {int ncells; scalar_t__* cells; } ;
struct intr_map_data {scalar_t__ type; } ;
struct intr_irqsrc {int dummy; } ;
struct beripic_softc {scalar_t__ nirqs; TYPE_1__* irqs; } ;
typedef int device_t ;
struct TYPE_2__ {struct intr_irqsrc isrc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct beripic_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, struct intr_map_data *VAR_3,
    struct intr_irqsrc **VAR_4)
{
 struct beripic_softc *VAR_5;
 struct intr_map_data_fdt *VAR_6;
 uint32_t VAR_7;

 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = (struct intr_map_data_fdt *)VAR_3;

 if (VAR_3 == ((void*)0) || VAR_3->type != VAR_1 ||
     VAR_6->ncells != 1 || VAR_6->cells[0] >= VAR_5->nirqs)
  return (VAR_0);

 VAR_7 = VAR_6->cells[0];

 *VAR_4 = &VAR_5->irqs[VAR_7].isrc;

 return (0);
}
