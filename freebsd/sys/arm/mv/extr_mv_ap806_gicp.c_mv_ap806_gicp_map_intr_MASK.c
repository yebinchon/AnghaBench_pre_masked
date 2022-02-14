
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_ap806_gicp_softc {int dev; int parent; } ;
struct intr_map_data {scalar_t__ type; } ;
struct intr_irqsrc {int isrc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct intr_map_data*,struct intr_irqsrc**) ;
 struct mv_ap806_gicp_softc* FUNC_1 (int ) ;
 struct intr_map_data* FUNC_2 (struct mv_ap806_gicp_softc*,struct intr_map_data*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, struct intr_map_data *VAR_4,
    struct intr_irqsrc **VAR_5)
{
 struct mv_ap806_gicp_softc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_3);

 if (VAR_4->type != VAR_2)
  return (VAR_1);

 VAR_4 = FUNC_2(VAR_6, VAR_4);
 if (VAR_4 == ((void*)0))
  return (VAR_0);

 VAR_7 = FUNC_0(VAR_6->parent, VAR_4, VAR_5);
 (*VAR_5)->isrc_dev = VAR_6->dev;
 return(VAR_7);
}
