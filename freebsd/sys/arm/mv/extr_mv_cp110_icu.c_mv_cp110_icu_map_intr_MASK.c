
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mv_cp110_icu_softc {int dev; int parent; } ;
struct intr_map_data_fdt {int ncells; scalar_t__* cells; } ;
struct intr_map_data {scalar_t__ type; } ;
struct intr_irqsrc {int isrc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,struct intr_map_data*,struct intr_irqsrc**) ;
 scalar_t__ FUNC_2 (struct mv_cp110_icu_softc*,int ) ;
 int FUNC_3 (struct mv_cp110_icu_softc*,int ,scalar_t__) ;
 struct mv_cp110_icu_softc* FUNC_4 (int ) ;
 struct intr_map_data* FUNC_5 (struct mv_cp110_icu_softc*,struct intr_map_data*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_6, struct intr_map_data *VAR_7,
    struct intr_irqsrc **VAR_8)
{
 struct mv_cp110_icu_softc *VAR_9;
 struct intr_map_data_fdt *VAR_10;
 uint32_t VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_9 = FUNC_4(VAR_6);

 if (VAR_7->type != VAR_4)
  return (VAR_1);


 VAR_10 = (struct intr_map_data_fdt *)VAR_7;
 if (VAR_10->ncells != 2)
  return (VAR_0);
 VAR_12 = VAR_10->cells[0];
 VAR_13 = VAR_10->cells[1];
 VAR_7 = FUNC_5(VAR_9, VAR_7);
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 VAR_11 = FUNC_2(VAR_9, FUNC_0(VAR_12));
 VAR_11 |= VAR_3;
 if (VAR_13 == VAR_5)
  VAR_11 &= ~VAR_2;
 else
  VAR_11 |= VAR_2;
 FUNC_3(VAR_9, FUNC_0(VAR_12), VAR_11);

 VAR_14 = FUNC_1(VAR_9->parent, VAR_7, VAR_8);
 (*VAR_8)->isrc_dev = VAR_9->dev;
 return (VAR_14);
}
