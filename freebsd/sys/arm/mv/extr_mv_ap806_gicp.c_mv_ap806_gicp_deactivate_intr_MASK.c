
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mv_ap806_gicp_softc {int parent; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct intr_irqsrc*,struct resource*,struct intr_map_data*) ;
 struct mv_ap806_gicp_softc* FUNC_1 (int ) ;
 struct intr_map_data* FUNC_2 (struct mv_ap806_gicp_softc*,struct intr_map_data*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, struct intr_irqsrc *VAR_2,
    struct resource *VAR_3, struct intr_map_data *VAR_4)
{
 struct mv_ap806_gicp_softc *VAR_5;

 VAR_5 = FUNC_1(VAR_1);

 VAR_4 = FUNC_2(VAR_5, VAR_4);
 if (VAR_4 == ((void*)0))
  return (VAR_0);

 return (FUNC_0(VAR_5->parent, VAR_2, VAR_3, VAR_4));
}
