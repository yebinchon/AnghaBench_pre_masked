
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_mcast_ramrod_params {TYPE_1__* mcast_obj; } ;
struct TYPE_4__ {int (* clear_pending ) (TYPE_2__*) ;} ;
struct TYPE_3__ {scalar_t__ (* check_pending ) (TYPE_1__*) ;TYPE_2__ raw; } ;
struct bxe_softc {TYPE_1__ mcast_obj; } ;
typedef int rparam ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct bxe_softc*,struct ecore_mcast_ramrod_params*,int ) ;
 int FUNC_4 (struct ecore_mcast_ramrod_params*,int ,int) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_2)
{
    struct ecore_mcast_ramrod_params VAR_3;
    int VAR_4;

    FUNC_4(&VAR_3, 0, sizeof(VAR_3));

    VAR_3.mcast_obj = &VAR_2->mcast_obj;

    FUNC_1(VAR_2);


    VAR_2->mcast_obj.raw.clear_pending(&VAR_2->mcast_obj.raw);


    if (VAR_2->mcast_obj.check_pending(&VAR_2->mcast_obj)) {
        VAR_4 = FUNC_3(VAR_2, &VAR_3, VAR_1);
        if (VAR_4 < 0) {
            FUNC_0(VAR_2, VAR_0,
                "ERROR: Failed to send pending mcast commands (%d)\n", VAR_4);
        }
    }

    FUNC_2(VAR_2);
}
