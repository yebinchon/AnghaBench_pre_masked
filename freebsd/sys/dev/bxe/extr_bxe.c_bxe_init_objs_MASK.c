
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bxe_softc {int flags; int sp_state; TYPE_1__* fp; int rss_conf_obj; int vlans_pool; int macs_pool; int mcast_obj; int rx_mode_obj; } ;
typedef int ecore_obj_type ;
struct TYPE_2__ {int index; int cl_id; } ;


 int FUNC_0 (struct bxe_softc*,int ) ;
 int FUNC_1 (struct bxe_softc*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (struct bxe_softc*,int *,int ,int ) ;
 int FUNC_8 (struct bxe_softc*,int *,int ,int ,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_9 (struct bxe_softc*,int *,int ,int ,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_10 (struct bxe_softc*,int *) ;
 int FUNC_11 (struct bxe_softc*,int *,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline void
FUNC_12(struct bxe_softc *VAR_7)
{

    ecore_obj_type VAR_8 =
        (VAR_7->flags & VAR_0) ? VAR_4 :
                                         VAR_3;


    FUNC_10(VAR_7, &VAR_7->rx_mode_obj);


    FUNC_8(VAR_7,
                         &VAR_7->mcast_obj,
                         VAR_7->fp[0].cl_id,
                         VAR_7->fp[0].index,
                         FUNC_4(VAR_7),
                         FUNC_4(VAR_7),
                         FUNC_0(VAR_7, VAR_5),
                         FUNC_1(VAR_7, VAR_5),
                         VAR_1,
                         &VAR_7->sp_state,
                         VAR_8);


    FUNC_7(VAR_7,
                               &VAR_7->macs_pool,
                               FUNC_4(VAR_7),
                               FUNC_2(VAR_7) ? FUNC_6(VAR_7) :
                                                 FUNC_5(VAR_7));

    FUNC_11(VAR_7,
                                &VAR_7->vlans_pool,
                                FUNC_3(VAR_7) >> 1,
                                FUNC_2(VAR_7) ? FUNC_6(VAR_7) :
                                                  FUNC_5(VAR_7));


    FUNC_9(VAR_7,
                              &VAR_7->rss_conf_obj,
                              VAR_7->fp[0].cl_id,
                              VAR_7->fp[0].index,
                              FUNC_4(VAR_7),
                              FUNC_4(VAR_7),
                              FUNC_0(VAR_7, VAR_6),
                              FUNC_1(VAR_7, VAR_6),
                              VAR_2,
                              &VAR_7->sp_state, VAR_3);
}
