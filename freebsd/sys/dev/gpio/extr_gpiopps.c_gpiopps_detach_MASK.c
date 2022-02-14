
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pps_softc {TYPE_1__* gpin; int * ires; int irid; int * ihandler; int * pps_cdev; } ;
typedef int device_t ;
struct TYPE_2__ {int pin; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *) ;
 struct pps_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct pps_softc *VAR_2 = FUNC_4(VAR_1);

 if (VAR_2->pps_cdev != ((void*)0))
  FUNC_3(VAR_2->pps_cdev);
 if (VAR_2->ihandler != ((void*)0))
  FUNC_2(VAR_1, VAR_2->ires, VAR_2->ihandler);
 if (VAR_2->ires != ((void*)0))
  FUNC_1(VAR_1, VAR_0, VAR_2->irid, VAR_2->ires);
 if (VAR_2->gpin != ((void*)0))
  FUNC_5(FUNC_0(VAR_2->gpin->dev), VAR_2->gpin->pin);
 return (0);
}
