
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tws_softc {int dummy; } ;


 int FUNC_0 (struct tws_softc*,char*,int ,int ) ;
 int FUNC_1 (struct tws_softc*,int) ;

void
FUNC_2(void *VAR_0)
{
    struct tws_softc *VAR_1 = (struct tws_softc *)VAR_0;
    int VAR_2 = 0;

    FUNC_0(VAR_1, "entry", 0, 0);

    if ((VAR_2 = FUNC_1(VAR_1, 0x03 ))) {
        FUNC_0(VAR_1, "aen fetch send in progress", 0, 0);
    }
}
