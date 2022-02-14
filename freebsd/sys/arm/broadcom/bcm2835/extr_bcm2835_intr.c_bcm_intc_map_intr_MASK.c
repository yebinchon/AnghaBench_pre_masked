
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct intr_map_data_fdt {int ncells; size_t* cells; } ;
struct intr_map_data {scalar_t__ type; } ;
struct intr_irqsrc {int dummy; } ;
struct bcm_intc_softc {TYPE_1__* intc_isrcs; } ;
typedef int device_t ;
struct TYPE_2__ {struct intr_irqsrc bii_isrc; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct bcm_intc_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,size_t,size_t) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_8, struct intr_map_data *VAR_9,
    struct intr_irqsrc **VAR_10)
{
 u_int VAR_11;
 struct intr_map_data_fdt *VAR_12;
 struct bcm_intc_softc *VAR_13;
 bool VAR_14;

 if (VAR_9->type != VAR_7)
  return (VAR_6);

 VAR_12 = (struct intr_map_data_fdt *)VAR_9;
 if (VAR_12->ncells == 1)
  VAR_11 = VAR_12->cells[0];
 else if (VAR_12->ncells == 2) {
  VAR_14 = 1;
  switch (VAR_12->cells[0]) {
  case 0:
   VAR_11 = VAR_12->cells[1];
   if (VAR_11 >= VAR_1)
    VAR_14 = 0;
   break;
  case 1:
   VAR_11 = VAR_12->cells[1] + VAR_1;
   if (VAR_11 > VAR_0)
    VAR_14 = 0;
   break;
  case 2:
   VAR_11 = VAR_12->cells[1] + VAR_3;
   if (VAR_11 > VAR_2)
    VAR_14 = 0;
   break;
  default:
   VAR_14 = 0;
   break;
  }

  if (!VAR_14) {
   FUNC_1(VAR_8,
       "invalid IRQ config: bank=%d, irq=%d\n",
       VAR_12->cells[0], VAR_12->cells[1]);
   return (VAR_5);
  }
 }
 else
  return (VAR_5);

 if (VAR_11 >= VAR_4)
  return (VAR_5);

 VAR_13 = FUNC_0(VAR_8);
 *VAR_10 = &VAR_13->intc_isrcs[VAR_11].bii_isrc;
 return (0);
}
