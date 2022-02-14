
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahd_softc {int dev_softc; TYPE_1__* platform_data; } ;
struct TYPE_2__ {int ih; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int *,int ,struct ahd_softc*,int *) ;
 int FUNC_1 (int ,char*,int) ;

int
FUNC_2(struct ahd_softc *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_0(VAR_3->dev_softc, VAR_3->platform_data->irq,
          VAR_1|VAR_0, ((void*)0),
          VAR_2, VAR_3, &VAR_3->platform_data->ih);
 if (VAR_4 != 0)
  FUNC_1(VAR_3->dev_softc, "bus_setup_intr() failed: %d\n",
         VAR_4);
 return (VAR_4);
}
