
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tws_softc {int sim; int gen_lock; int tws_dev; } ;
struct tws_request {scalar_t__ error_code; scalar_t__ type; struct tws_softc* sc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
FUNC_11(void *VAR_6)
{
    struct tws_request *VAR_7 = (struct tws_request *)VAR_6;
    struct tws_softc *VAR_8 = VAR_7->sc;


    if ( VAR_7->error_code == VAR_0 ) {
        return;
    }

    FUNC_1(&VAR_8->gen_lock);
    if ( VAR_7->error_code == VAR_0 ) {
        FUNC_2(&VAR_8->gen_lock);
        return;
    }

    if ( FUNC_4(VAR_8) == VAR_3 ) {
        FUNC_2(&VAR_8->gen_lock);
        return;
    }

    FUNC_9(VAR_8->sim, 1);

    FUNC_7(VAR_8, VAR_5);

    if (VAR_7->type == VAR_2) {
        FUNC_0(VAR_8->tws_dev, "I/O Request timed out... Resetting controller\n");
    } else if (VAR_7->type == VAR_1) {
        FUNC_0(VAR_8->tws_dev, "IOCTL Request timed out... Resetting controller\n");
    } else {
        FUNC_0(VAR_8->tws_dev, "Internal Request timed out... Resetting controller\n");
    }

    FUNC_3(VAR_8);
    FUNC_8(VAR_8);
    FUNC_6( (void*) VAR_8 );
    FUNC_5( (void*) VAR_8 );


    FUNC_7(VAR_8, VAR_4);
    FUNC_2(&VAR_8->gen_lock);

    FUNC_10(VAR_8->sim, 1);
}
