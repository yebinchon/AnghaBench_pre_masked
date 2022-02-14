
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iic_softc {TYPE_1__* sc_devnode; int sc_dev; } ;
typedef int device_t ;
struct TYPE_2__ {struct iic_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iic_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 (int *,int ,int ,int ,int,char*,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
 struct iic_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 VAR_5->sc_dev = VAR_4;
 VAR_5->sc_devnode = FUNC_3(&VAR_3, FUNC_1(VAR_4),
   VAR_2, VAR_1,
   0600, "iic%d", FUNC_1(VAR_4));
 if (VAR_5->sc_devnode == ((void*)0)) {
  FUNC_2(VAR_4, "failed to create character device\n");
  return (VAR_0);
 }
 VAR_5->sc_devnode->si_drv1 = VAR_5;

 return (0);
}
