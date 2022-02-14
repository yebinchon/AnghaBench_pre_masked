
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_gic_softc {scalar_t__ nirqs; } ;
struct intr_map_data_fdt {int ncells; scalar_t__* cells; } ;
struct intr_map_data {scalar_t__ type; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct intr_irqsrc* FUNC_0 (struct mtk_gic_softc*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 struct mtk_gic_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, struct intr_map_data *VAR_4,
    struct intr_irqsrc **VAR_5)
{
 return (VAR_1);

}
