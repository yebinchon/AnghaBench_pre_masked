
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct tws_softc {int q_lock; int sim_lock; } ;
struct tws_request {scalar_t__ ccb_ptr; int sc; int error_code; int timeout; int request_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tws_softc*,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tws_softc*,struct tws_request*,int ) ;
 struct tws_request* FUNC_5 (struct tws_softc*,int ) ;
 int FUNC_6 (int ,struct tws_request*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8(struct tws_softc *VAR_6)
{
    struct tws_request *VAR_7;
    union ccb *VAR_8;
    FUNC_0(VAR_6, "entry", 0, 0);

    FUNC_2(&VAR_6->q_lock);
    VAR_7 = FUNC_5(VAR_6, VAR_3);
    FUNC_3(&VAR_6->q_lock);
    while ( VAR_7 ) {
        FUNC_0(VAR_6, "moved to TWS_COMPLETE_Q", 0, VAR_7->request_id);
 FUNC_1(&VAR_7->timeout);

        VAR_7->error_code = VAR_5;
        VAR_8 = (union ccb *)(VAR_7->ccb_ptr);

        VAR_8->ccb_h.status &= ~VAR_2;
        VAR_8->ccb_h.status |= VAR_0;
        VAR_8->ccb_h.status |= VAR_1;

        FUNC_6(VAR_7->sc, VAR_7);

        FUNC_2(&VAR_6->sim_lock);
        FUNC_7(VAR_7->ccb_ptr);
        FUNC_3(&VAR_6->sim_lock);

        FUNC_2(&VAR_6->q_lock);
        FUNC_4(VAR_6, VAR_7, VAR_4);
        VAR_7 = FUNC_5(VAR_6, VAR_3);
        FUNC_3(&VAR_6->q_lock);
    }
}
