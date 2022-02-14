
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int amr_state; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct amr_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
    struct amr_softc *VAR_2 = FUNC_1(VAR_1);

    FUNC_0(1);

    VAR_2->amr_state &= ~VAR_0;



    return(0);
}
