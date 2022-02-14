
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct intr_map_data_msi {int dummy; } ;
struct intr_map_data_fdt {int cells; int ncells; } ;
struct intr_map_data_acpi {scalar_t__ irq; int pol; int trig; } ;
struct intr_map_data {int type; } ;
struct gic_v3_softc {scalar_t__ gic_nirqs; } ;
typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
typedef int device_t ;


 int VAR_0 ;
 struct gic_v3_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,scalar_t__*,int*,int*) ;
 int FUNC_2 (int ,struct intr_map_data_msi*,scalar_t__*,int*,int*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, struct intr_map_data *VAR_2, u_int *VAR_3,
    enum intr_polarity *VAR_4, enum intr_trigger *VAR_5)
{
 struct gic_v3_softc *VAR_6;
 enum intr_polarity VAR_7;
 enum intr_trigger VAR_8;
 struct intr_map_data_msi *VAR_9;






 u_int VAR_10;

 VAR_6 = FUNC_0(VAR_1);

 switch (VAR_2->type) {
 case 134:

  VAR_9 = (struct intr_map_data_msi *)VAR_2;
  if (FUNC_2(VAR_1, VAR_9, &VAR_10, &VAR_7, &VAR_8) != 0)
   return (VAR_0);
  break;
 default:
  return (VAR_0);
 }

 if (VAR_10 >= VAR_6->gic_nirqs)
  return (VAR_0);
 switch (VAR_7) {
 case 133:
 case 131:
 case 132:
  break;
 default:
  return (VAR_0);
 }
 switch (VAR_8) {
 case 130:
 case 129:
 case 128:
  break;
 default:
  return (VAR_0);
 }

 *VAR_3 = VAR_10;
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_7;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_8;
 return (0);
}
