
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ecore_mcast_ramrod_params {int * mcast_obj; int * member_0; } ;
struct bxe_softc {int num_queues; int mcast_obj; int sp_state; TYPE_1__* sp_objs; } ;
struct TYPE_2__ {int mac_obj; } ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (struct bxe_softc*,scalar_t__,int ) ;
 int FUNC_6 (struct bxe_softc*) ;
 int VAR_7 ;
 int FUNC_7 (struct bxe_softc*,int *,int ,int ) ;
 int FUNC_8 (struct bxe_softc*) ;
 int FUNC_9 (struct bxe_softc*) ;
 int FUNC_10 (struct bxe_softc*) ;
 int FUNC_11 (struct bxe_softc*,int ) ;
 int FUNC_12 (struct bxe_softc*) ;
 int FUNC_13 (struct bxe_softc*,int ) ;
 int FUNC_14 (struct bxe_softc*,int ) ;
 int FUNC_15 (struct bxe_softc*,int ) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (struct bxe_softc*) ;
 scalar_t__ FUNC_18 (struct bxe_softc*,int) ;
 scalar_t__ FUNC_19 (int ,int *) ;
 int FUNC_20 (struct bxe_softc*,int) ;
 int FUNC_21 (struct bxe_softc*,struct ecore_mcast_ramrod_params*,int ) ;

__attribute__((used)) static void
FUNC_22(struct bxe_softc *VAR_8,
                 uint32_t VAR_9,
                 uint8_t VAR_10)
{
    int VAR_11 = FUNC_6(VAR_8);
    struct ecore_mcast_ramrod_params VAR_12 = { ((void*)0) };
    uint32_t VAR_13;
    int VAR_14, VAR_15 = 0;

    FUNC_8(VAR_8);


    FUNC_4(1000);


    VAR_15 = FUNC_7(VAR_8, &VAR_8->sp_objs[0].mac_obj, VAR_0, VAR_5);
    if (VAR_15 < 0) {
        FUNC_0(VAR_8, "Failed to delete all ETH MACs (%d)\n", VAR_15);
    }


    VAR_15 = FUNC_7(VAR_8, &VAR_8->sp_objs[0].mac_obj, VAR_4, VAR_7);
    if (VAR_15 < 0) {
        FUNC_0(VAR_8, "Failed to delete UC MACs list (%d)\n", VAR_15);
    }


    if (!FUNC_3(VAR_8)) {
        FUNC_5(VAR_8, VAR_6 + VAR_11*8, 0);
    }







    FUNC_1(VAR_8);

    if (FUNC_19(VAR_1, &VAR_8->sp_state)) {
        FUNC_16(VAR_2, &VAR_8->sp_state);
    } else {
        FUNC_17(VAR_8);
    }


    VAR_12.mcast_obj = &VAR_8->mcast_obj;
    VAR_15 = FUNC_21(VAR_8, &VAR_12, VAR_3);
    if (VAR_15 < 0) {
        FUNC_0(VAR_8, "Failed to send DEL MCAST command (%d)\n", VAR_15);
    }

    FUNC_2(VAR_8);
    VAR_13 = FUNC_15(VAR_8, VAR_9);





    VAR_15 = FUNC_10(VAR_8);
    if (VAR_15) {
        FUNC_0(VAR_8, "bxe_func_wait_started failed (%d)\n", VAR_15);
    }





    for (VAR_14 = 0; VAR_14 < VAR_8->num_queues; VAR_14++) {
        if (FUNC_18(VAR_8, VAR_14)) {
            goto unload_error;
        }
    }





    if (!FUNC_20(VAR_8, ~0x0UL)) {
        FUNC_0(VAR_8, "Common slow path ramrods got stuck!(%d)\n", VAR_15);
    }

unload_error:

    VAR_15 = FUNC_9(VAR_8);
    if (VAR_15) {
        FUNC_0(VAR_8, "Function stop failed!(%d)\n", VAR_15);
    }


    FUNC_11(VAR_8, VAR_7);


    FUNC_12(VAR_8);


    VAR_15 = FUNC_13(VAR_8, VAR_13);
    if (VAR_15) {
        FUNC_0(VAR_8, "Hardware reset failed(%d)\n", VAR_15);
    }


    FUNC_14(VAR_8, VAR_10);
}
