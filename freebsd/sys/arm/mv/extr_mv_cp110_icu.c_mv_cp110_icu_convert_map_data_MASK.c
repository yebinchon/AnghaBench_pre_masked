
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct mv_cp110_icu_softc {TYPE_1__* parent_map_data; } ;
struct intr_map_data_fdt {int ncells; scalar_t__* cells; } ;
struct intr_map_data {int dummy; } ;
struct TYPE_2__ {int ncells; scalar_t__* cells; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct mv_cp110_icu_softc*,int ) ;

__attribute__((used)) static struct intr_map_data *
FUNC_2(struct mv_cp110_icu_softc *VAR_4, struct intr_map_data *VAR_5)
{
 struct intr_map_data_fdt *VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9;

 VAR_6 = (struct intr_map_data_fdt *)VAR_5;
 if (VAR_6->ncells != 2)
  return (((void*)0));
 VAR_8 = VAR_6->cells[0];
 VAR_9 = VAR_6->cells[1];
 if (VAR_8 >= VAR_3)
  return (((void*)0));
 if (VAR_9 != VAR_2 &&
     VAR_9 != VAR_1)
  return (((void*)0));


 VAR_7 = FUNC_1(VAR_4, FUNC_0(VAR_8));


 VAR_4->parent_map_data->ncells = 2;
 VAR_4->parent_map_data->cells[0] = VAR_7 & VAR_0;
 VAR_4->parent_map_data->cells[1] = VAR_9;

 return ((struct intr_map_data *)VAR_4->parent_map_data);
}
