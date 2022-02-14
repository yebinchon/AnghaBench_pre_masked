
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twe_softc {int twe_state; } ;
typedef int device_t ;


 int FUNC_0 (struct twe_softc*) ;
 int FUNC_1 (struct twe_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 struct twe_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct twe_softc*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
    struct twe_softc *VAR_2 = FUNC_3(VAR_1);

    FUNC_2(4);

    FUNC_0(VAR_2);
    VAR_2->twe_state |= VAR_0;

    FUNC_4(VAR_2);
    FUNC_1(VAR_2);

    return(0);
}
