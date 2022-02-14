
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tws_softc {int sim; int gen_lock; int tws_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tws_softc*) ;
 scalar_t__ FUNC_4 (struct tws_softc*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct tws_softc*,int ) ;
 int FUNC_8 (struct tws_softc*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;

void
FUNC_11(void *VAR_3)
{
    struct tws_softc *VAR_4 = (struct tws_softc *)VAR_3;

    FUNC_1(&VAR_4->gen_lock);
    if ( FUNC_4(VAR_4) == VAR_0 ) {
        FUNC_2(&VAR_4->gen_lock);
        return;
    }

    FUNC_9(VAR_4->sim, 1);

    FUNC_7(VAR_4, VAR_2);

    FUNC_0(VAR_4->tws_dev, "Resetting controller\n");

    FUNC_3(VAR_4);
    FUNC_8(VAR_4);
    FUNC_6( (void*) VAR_4 );
    FUNC_5( (void*) VAR_4 );


    FUNC_7(VAR_4, VAR_1);
    FUNC_2(&VAR_4->gen_lock);

    FUNC_10(VAR_4->sim, 1);
}
