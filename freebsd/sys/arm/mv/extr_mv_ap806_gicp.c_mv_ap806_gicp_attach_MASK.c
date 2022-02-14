
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_ap806_gicp_softc {struct intr_map_data_fdt* parent_map_data; int spi_ranges; int spi_ranges_cnt; int * parent; int dev; } ;
struct intr_map_data_fdt {int dummy; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,void**) ;
 int FUNC_3 (int ) ;
 struct mv_ap806_gicp_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,int,int) ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_4)
{
 struct mv_ap806_gicp_softc *VAR_5;
 phandle_t VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_4(VAR_4);
 VAR_5->dev = VAR_4;
 VAR_6 = FUNC_9(VAR_4);


 if ((VAR_8 = FUNC_8(VAR_6)) == 0) {
  FUNC_5(VAR_4,
       "Cannot find our parent interrupt controller\n");
  return (VAR_0);
 }
 if ((VAR_5->parent = FUNC_0(VAR_8)) == ((void*)0)) {
  FUNC_5(VAR_4,
       "cannot find parent interrupt controller device\n");
  return (VAR_0);
 }

 VAR_5->spi_ranges_cnt = FUNC_2(VAR_6, "marvell,spi-ranges",
     (void **)&VAR_5->spi_ranges);

 VAR_7 = FUNC_3(VAR_6);
 if (FUNC_7(VAR_4, VAR_7) == ((void*)0)) {
  FUNC_5(VAR_4, "Cannot register GICP\n");
  return (VAR_0);
 }

 VAR_5->parent_map_data = (struct intr_map_data_fdt *)FUNC_6(
     VAR_1, sizeof(struct intr_map_data_fdt) +
     + 3 * sizeof(phandle_t), VAR_2 | VAR_3);
 FUNC_1(VAR_7, VAR_4);

 return (0);
}
