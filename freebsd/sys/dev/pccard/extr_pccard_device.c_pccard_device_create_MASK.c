
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pccard_softc {TYPE_1__* cisdev; int dev; } ;
struct TYPE_2__ {struct pccard_softc* si_drv1; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int,int ,int ,int,char*,int) ;
 int VAR_0 ;

int
FUNC_2(struct pccard_softc *VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = FUNC_0(VAR_1->dev) << 16;
 VAR_1->cisdev = FUNC_1(&VAR_0, VAR_2, 0, 0, 0666,
     "pccard%u.cis", FUNC_0(VAR_1->dev));
 VAR_1->cisdev->si_drv1 = VAR_1;
 return (0);
}
