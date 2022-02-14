
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct disk {scalar_t__ d_drv1; } ;
struct amrd_softc {TYPE_1__* amrd_controller; } ;
struct TYPE_2__ {int amr_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct disk *VAR_2)
{
    struct amrd_softc *VAR_3 = (struct amrd_softc *)VAR_2->d_drv1;

    FUNC_0(1);

    if (VAR_3 == ((void*)0))
 return (VAR_1);


    if (VAR_3->amrd_controller->amr_state & VAR_0)
 return(VAR_1);

    return (0);
}
