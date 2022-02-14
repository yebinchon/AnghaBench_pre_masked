
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bxe_softc {TYPE_1__* ioctl_dev; int * eeprom; TYPE_2__* ifp; } ;
struct TYPE_4__ {int if_dunit; } ;
struct TYPE_3__ {struct bxe_softc* si_drv1; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_1__* FUNC_3 (int *,int ,int ,int ,int,char*,int ) ;
 int * FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct bxe_softc *VAR_6)
{
    VAR_6->eeprom = FUNC_4(VAR_0, VAR_2, VAR_3);

    if (VAR_6->eeprom == ((void*)0)) {
        FUNC_0(VAR_6, "Unable to alloc for eeprom size buffer\n");
        return (-1);
    }

    VAR_6->ioctl_dev = FUNC_3(&VAR_5,
                            VAR_6->ifp->if_dunit,
                            VAR_4,
                            VAR_1,
                            0600,
                            "%s",
                            FUNC_2(VAR_6->ifp));

    if (VAR_6->ioctl_dev == ((void*)0)) {
        FUNC_1(VAR_6->eeprom, VAR_2);
        VAR_6->eeprom = ((void*)0);
        return (-1);
    }

    VAR_6->ioctl_dev->si_drv1 = VAR_6;

    return (0);
}
