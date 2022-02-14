
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct mv_ap806_gicp_softc {int spi_ranges_cnt; scalar_t__* spi_ranges; TYPE_1__* parent_map_data; } ;
struct intr_map_data_fdt {int ncells; scalar_t__* cells; } ;
struct intr_map_data {int dummy; } ;
struct TYPE_2__ {int ncells; scalar_t__* cells; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct intr_map_data *
FUNC_0(struct mv_ap806_gicp_softc *VAR_1,
    struct intr_map_data *VAR_2)
{
 struct intr_map_data_fdt *VAR_3;
 uint32_t VAR_4, VAR_5, VAR_6;

 VAR_3 = (struct intr_map_data_fdt *)VAR_2;
 if (VAR_3->ncells != 2)
  return (((void*)0));

 VAR_5 = VAR_3->cells[0];
 VAR_6 = VAR_3->cells[1];
 if (VAR_5 >= VAR_0)
  return (((void*)0));


 VAR_1->parent_map_data->ncells = 3;
 VAR_1->parent_map_data->cells[0] = 0;
 VAR_1->parent_map_data->cells[2] = VAR_6;


 for (VAR_4 = 0; VAR_4 < VAR_1->spi_ranges_cnt / 2; VAR_4 += 2) {
  if (VAR_5 < VAR_1->spi_ranges[VAR_4 + 1]) {
   VAR_5 += VAR_1->spi_ranges[VAR_4];
   break;
  }

  VAR_5 -= VAR_1->spi_ranges[VAR_4];
 }

 VAR_1->parent_map_data->cells[1] = VAR_5 - 32;

 return ((struct intr_map_data *)VAR_1->parent_map_data);
}
