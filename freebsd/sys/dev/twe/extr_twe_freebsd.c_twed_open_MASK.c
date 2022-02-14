
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twed_softc {TYPE_1__* twed_controller; } ;
struct disk {scalar_t__ d_drv1; } ;
struct TYPE_2__ {int twe_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct disk *VAR_2)
{
    struct twed_softc *VAR_3 = (struct twed_softc *)VAR_2->d_drv1;

    FUNC_0(4);

    if (VAR_3 == ((void*)0))
 return (VAR_0);


    if (VAR_3->twed_controller->twe_state & VAR_1)
 return(VAR_0);

    return (0);
}
