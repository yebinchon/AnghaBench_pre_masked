
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct mv_ap806_sei_softc {int dummy; } ;
struct intr_map_data_fdt {int ncells; scalar_t__* cells; } ;
struct intr_map_data {scalar_t__ type; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mv_ap806_sei_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_4, struct intr_map_data *VAR_5, u_int *VAR_6)
{
 struct mv_ap806_sei_softc *VAR_7;
 struct intr_map_data_fdt *VAR_8;
 u_int VAR_9;

 VAR_7 = FUNC_0(VAR_4);

 if (VAR_5->type != VAR_2)
  return (VAR_1);

 VAR_8 = (struct intr_map_data_fdt *)VAR_5;
 if (VAR_8->ncells != 1 || VAR_8->cells[0] >= VAR_3)
  return (VAR_0);
 VAR_9 = VAR_8->cells[0];
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_9;

 return(0);
}
