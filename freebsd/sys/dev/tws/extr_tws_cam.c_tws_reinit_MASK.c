
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tws_softc {int obfl_q_overrun; int is64bit; int tws_dev; int gen_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct tws_softc*,char*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct tws_softc*,int *,int ,char*,int) ;
 int FUNC_3 (struct tws_softc*) ;
 scalar_t__ FUNC_4 (struct tws_softc*) ;
 scalar_t__ FUNC_5 (struct tws_softc*,int ) ;
 int FUNC_6 (struct tws_softc*) ;
 int VAR_2 ;
 int FUNC_7 (struct tws_softc*) ;
 int FUNC_8 (struct tws_softc*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_3)
{
    struct tws_softc *VAR_4 = (struct tws_softc *)VAR_3;
    int VAR_5=0;
    int VAR_6=2;
    int VAR_7=0;



    while ( !VAR_7 && VAR_6 ) {
        if ( FUNC_4(VAR_4) ) {
            VAR_7 = 1;
            break;
        } else {
            VAR_5 += 5;
            if ( VAR_5 >= VAR_0 ) {
               VAR_5 = 0;
               if ( VAR_6 )
                   FUNC_3(VAR_4);
               VAR_6--;
            }
            FUNC_2(VAR_4, &VAR_4->gen_lock, 0, "tws_reinit", 5*VAR_1);
        }
    }

    if (!VAR_7) {
        FUNC_1(VAR_4->tws_dev, "FAILED to get Controller Ready!\n");
        return;
    }

    VAR_4->obfl_q_overrun = 0;

    if ( FUNC_5(VAR_4, VAR_2) ) {
        FUNC_0(VAR_4, "initConnect failed", 0, VAR_4->is64bit);
    }
    FUNC_6(VAR_4);

    FUNC_7(VAR_4);

    FUNC_8(VAR_4);
}
