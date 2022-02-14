
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct intr_map_data_fdt {int cells; int ncells; } ;
struct intr_map_data {scalar_t__ type; } ;
struct intr_irqsrc {int dummy; } ;
struct TYPE_2__ {struct intr_irqsrc isrc; } ;
struct aw_nmi_softc {TYPE_1__ intr; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *,int *,int *) ;
 struct aw_nmi_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, struct intr_map_data *VAR_3,
    struct intr_irqsrc **VAR_4)
{
 struct intr_map_data_fdt *VAR_5;
 struct aw_nmi_softc *VAR_6;
 int VAR_7;
 u_int VAR_8;

 if (VAR_3->type != VAR_1)
  return (VAR_0);

 VAR_6 = FUNC_1(VAR_2);
 VAR_5 = (struct intr_map_data_fdt *)VAR_3;

 VAR_7 = FUNC_0(VAR_2, VAR_5->ncells, VAR_5->cells, &VAR_8, ((void*)0), ((void*)0));
 if (VAR_7 == 0)
  *VAR_4 = &VAR_6->intr.isrc;

 return (VAR_7);
}
