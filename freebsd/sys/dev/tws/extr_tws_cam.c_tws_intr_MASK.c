
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int num_intrs; } ;
struct tws_softc {TYPE_1__ stats; int tws_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct tws_softc*,char*,int,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct tws_softc*) ;
 int FUNC_3 (struct tws_softc*) ;
 int FUNC_4 (struct tws_softc*) ;
 int FUNC_5 (struct tws_softc*) ;
 int FUNC_6 (struct tws_softc*,int ,int) ;

void
FUNC_7(void *VAR_8)
{
    struct tws_softc *VAR_9 = (struct tws_softc *)VAR_8;
    u_int32_t VAR_10=0, VAR_11=0;

    if (!(VAR_9)) {
        FUNC_1(VAR_9->tws_dev, "null softc!!!\n");
        return;
    }

    if ( FUNC_2(VAR_9) == VAR_7 ) {
        return;
    }

    if ( FUNC_2(VAR_9) != VAR_6 ) {
        return;
    }

    VAR_9->stats.num_intrs++;
    VAR_10 = FUNC_6(VAR_9, VAR_4, 4);
    if ( VAR_10 & VAR_1 ) {
        FUNC_0(VAR_9, "door bell :)", VAR_10, VAR_4);
        VAR_11 = FUNC_6(VAR_9, VAR_5, 4);
        if ( VAR_11 & VAR_2 ) {
            FUNC_4(VAR_9);
            return;
        }
        if ( VAR_11 & VAR_0 ) {
            FUNC_3(VAR_9);
        }
    }

    if ( VAR_10 & VAR_3 ) {
        FUNC_5(VAR_9);
    }
}
