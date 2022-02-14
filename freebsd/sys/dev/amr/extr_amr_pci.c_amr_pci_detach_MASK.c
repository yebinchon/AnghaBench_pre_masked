
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int amr_state; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amr_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct amr_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
    struct amr_softc *VAR_3 = FUNC_3(VAR_2);
    int VAR_4;

    FUNC_2(1);

    if (VAR_3->amr_state & VAR_0)
 return(VAR_1);

    if ((VAR_4 = FUNC_1(VAR_2)))
 return(VAR_4);

    FUNC_0(VAR_3);

    return(0);
}
