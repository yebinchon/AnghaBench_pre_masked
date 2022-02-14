
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tws_softc {int dummy; } ;
struct tws_request {int state; int data; int timeout; int request_id; struct tws_softc* sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tws_softc*,char*,struct tws_request*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct tws_softc*,struct tws_request*) ;

void
FUNC_4(struct tws_request *VAR_2)
{
    struct tws_softc *VAR_3 = VAR_2->sc;

    FUNC_0(VAR_3, "getset complete", VAR_2, VAR_2->request_id);

    FUNC_1(&VAR_2->timeout);
    FUNC_3(VAR_3, VAR_2);

    FUNC_2(VAR_2->data, VAR_0);

    VAR_2->state = VAR_1;
}
