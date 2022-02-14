
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tws_softc {int q_lock; } ;
struct tws_request {struct tws_softc* sc; } ;


 int VAR_0 ;
 int FUNC_0 (struct tws_softc*,char*,struct tws_softc*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tws_softc*,struct tws_request*,int ) ;

void
FUNC_4(struct tws_request *VAR_1)
{

    struct tws_softc *VAR_2 = VAR_1->sc;

    FUNC_0(VAR_2, "entry", VAR_2, 0);
    FUNC_1(&VAR_2->q_lock);
    FUNC_3(VAR_2, VAR_1, VAR_0);
    FUNC_2(&VAR_2->q_lock);
}
