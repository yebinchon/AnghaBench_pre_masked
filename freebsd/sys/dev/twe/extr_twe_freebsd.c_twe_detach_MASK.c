
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twe_softc {int twe_state; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct twe_softc*) ;
 int FUNC_1 (struct twe_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 struct twe_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct twe_softc*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
    struct twe_softc *VAR_4 = FUNC_3(VAR_3);

    FUNC_2(4);

    FUNC_0(VAR_4);
    if (VAR_4->twe_state & VAR_2) {
 FUNC_1(VAR_4);
 return (VAR_0);
    }
    VAR_4->twe_state |= VAR_1;
    FUNC_1(VAR_4);




    if (FUNC_5(VAR_3)) {
 FUNC_0(VAR_4);
 VAR_4->twe_state &= ~VAR_1;
 FUNC_1(VAR_4);
 return (VAR_0);
    }

    FUNC_4(VAR_4);

    return(0);
}
