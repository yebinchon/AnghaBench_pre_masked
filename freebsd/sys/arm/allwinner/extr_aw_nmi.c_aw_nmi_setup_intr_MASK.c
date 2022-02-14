
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct resource {int dummy; } ;
struct intr_map_data_fdt {int cells; int ncells; } ;
struct intr_map_data {scalar_t__ type; } ;
struct intr_irqsrc {scalar_t__ isrc_handlers; } ;
struct aw_nmi_softc {TYPE_1__* cfg; } ;
struct aw_nmi_intr {scalar_t__ irq; int pol; int tri; } ;
typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
typedef int device_t ;
struct TYPE_2__ {int ctrl_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct aw_nmi_softc*,int ,int) ;
 int FUNC_1 (int ,int ,int ,scalar_t__*,int*,int*) ;
 struct aw_nmi_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_10, struct intr_irqsrc *VAR_11,
    struct resource *VAR_12, struct intr_map_data *VAR_13)
{
 struct intr_map_data_fdt *VAR_14;
 struct aw_nmi_softc *VAR_15;
 struct aw_nmi_intr *VAR_16;
 int VAR_17, VAR_18;
 u_int VAR_19;
 enum intr_trigger VAR_20;
 enum intr_polarity VAR_21;


 if (VAR_13 == ((void*)0) || VAR_13->type != VAR_2)
  return (VAR_1);

 VAR_15 = FUNC_2(VAR_10);
 VAR_16 = (struct aw_nmi_intr *)VAR_11;
 VAR_14 = (struct intr_map_data_fdt *)VAR_13;

 VAR_17 = FUNC_1(VAR_10, VAR_14->ncells, VAR_14->cells, &VAR_19, &VAR_21, &VAR_20);
 if (VAR_17 != 0)
  return (VAR_17);
 if (VAR_16->irq != VAR_19)
  return (VAR_0);


 if (VAR_11->isrc_handlers != 0) {
  if (VAR_21 != VAR_16->pol || VAR_20 != VAR_16->tri)
   return (VAR_0);
  else
   return (0);
 }

 VAR_16->pol = VAR_21;
 VAR_16->tri = VAR_20;

 if (VAR_20 == VAR_5) {
  if (VAR_21 == VAR_4)
   VAR_18 = VAR_9;
  else
   VAR_18 = VAR_7;
 } else {
  if (VAR_21 == VAR_3)
   VAR_18 = VAR_6;
  else
   VAR_18 = VAR_8;
 }

 FUNC_0(VAR_15, VAR_15->cfg->ctrl_reg, VAR_18);

 return (0);
}
