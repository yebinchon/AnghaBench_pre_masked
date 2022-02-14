
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tws_softc {int dummy; } ;
struct tws_request {int timeout; struct tws_softc* sc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tws_softc*,struct tws_request*) ;

void
FUNC_2(struct tws_request *VAR_0)
{
    struct tws_softc *VAR_1 = VAR_0->sc;

    FUNC_0(&VAR_0->timeout);
    FUNC_1(VAR_1, VAR_0);
}
