
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahd_softc {TYPE_1__* platform_data; int dev_softc; } ;
struct TYPE_2__ {int irq_res_type; int * irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ahd_softc*) ;
 int * FUNC_1 (int ,int ,int*,int) ;

int
FUNC_2(struct ahd_softc *VAR_4)
{
 int VAR_5;

 VAR_5 = 0;
 VAR_4->platform_data->irq =
     FUNC_1(VAR_4->dev_softc, VAR_3, &VAR_5,
       VAR_1 | VAR_2);
 if (VAR_4->platform_data->irq == ((void*)0))
  return (VAR_0);
 VAR_4->platform_data->irq_res_type = VAR_3;
 return (FUNC_0(VAR_4));
}
