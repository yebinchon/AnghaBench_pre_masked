
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahc_softc {int flags; int dev_softc; TYPE_1__* platform_data; } ;
struct TYPE_2__ {int ih; int * irq; int irq_res_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int *,int,int *,int ,struct ahc_softc*,int *) ;
 int FUNC_2 (int ,char*,...) ;

int
FUNC_3(struct ahc_softc *VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_10 = 0;
 VAR_11 = (VAR_8->flags & VAR_0) ? 0: VAR_5;
 VAR_8->platform_data->irq =
     FUNC_0(VAR_8->dev_softc, VAR_6, &VAR_10,
       VAR_4 | VAR_11);
 if (VAR_8->platform_data->irq == ((void*)0)) {
  FUNC_2(VAR_8->dev_softc,
         "bus_alloc_resource() failed to allocate IRQ\n");
  return (VAR_1);
 }
 VAR_8->platform_data->irq_res_type = VAR_6;


 VAR_9 = FUNC_1(VAR_8->dev_softc, VAR_8->platform_data->irq,
          VAR_3|VAR_2, ((void*)0),
          VAR_7, VAR_8, &VAR_8->platform_data->ih);

 if (VAR_9 != 0)
  FUNC_2(VAR_8->dev_softc, "bus_setup_intr() failed: %d\n",
         VAR_9);
 return (VAR_9);
}
