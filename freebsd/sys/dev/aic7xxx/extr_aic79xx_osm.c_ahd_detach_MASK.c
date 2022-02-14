
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahd_softc {TYPE_1__* platform_data; } ;
typedef int device_t ;
struct TYPE_2__ {int ih; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ahd_softc*,int ) ;
 int FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,int ) ;
 int FUNC_3 (struct ahd_softc*) ;
 int VAR_1 ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (int ,int ,int ) ;
 struct ahd_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int VAR_2 ;

int
FUNC_8(device_t VAR_3)
{
 struct ahd_softc *VAR_4;

 FUNC_7(VAR_3, "detaching device\n");
 VAR_4 = FUNC_6(VAR_3);
 FUNC_3(VAR_4);
 FUNC_0(&VAR_1, VAR_4, VAR_2);
 FUNC_2(VAR_4, VAR_0);
 FUNC_5(VAR_3, VAR_4->platform_data->irq, VAR_4->platform_data->ih);
 FUNC_4(VAR_4);
 FUNC_1(VAR_4);
 return (0);
}
