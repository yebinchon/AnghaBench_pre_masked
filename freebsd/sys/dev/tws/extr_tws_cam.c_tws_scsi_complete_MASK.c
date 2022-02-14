
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tws_softc {int q_lock; int sim_lock; } ;
struct tws_request {TYPE_2__* ccb_ptr; struct tws_softc* sc; int timeout; } ;
struct TYPE_3__ {int status; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tws_softc*,struct tws_request*,int ) ;
 int FUNC_4 (struct tws_softc*,struct tws_request*,int ) ;
 int FUNC_5 (struct tws_softc*,struct tws_request*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(struct tws_request *VAR_3)
{
    struct tws_softc *VAR_4 = VAR_3->sc;

    FUNC_1(&VAR_4->q_lock);
    FUNC_4(VAR_4, VAR_3, VAR_1);
    FUNC_2(&VAR_4->q_lock);

    FUNC_0(&VAR_3->timeout);
    FUNC_5(VAR_3->sc, VAR_3);


    VAR_3->ccb_ptr->ccb_h.status = VAR_0;
    FUNC_1(&VAR_4->sim_lock);
    FUNC_6(VAR_3->ccb_ptr);
    FUNC_2(&VAR_4->sim_lock);

    FUNC_1(&VAR_4->q_lock);
    FUNC_3(VAR_4, VAR_3, VAR_2);
    FUNC_2(&VAR_4->q_lock);
}
