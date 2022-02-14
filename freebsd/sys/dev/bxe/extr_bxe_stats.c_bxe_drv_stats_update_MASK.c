
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bxe_eth_stats {int dummy; } ;
struct bxe_softc {int num_queues; TYPE_1__* fp; struct bxe_eth_stats eth_stats; } ;
struct bxe_eth_q_stats_old {int dummy; } ;
struct bxe_eth_q_stats {int dummy; } ;
struct TYPE_2__ {struct bxe_eth_q_stats_old eth_q_stats_old; struct bxe_eth_q_stats eth_q_stats; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;

__attribute__((used)) static void
FUNC_1(struct bxe_softc *VAR_40)
{
    struct bxe_eth_stats *VAR_41 = &VAR_40->eth_stats;
    int VAR_42;

    for (VAR_42 = 0; VAR_42 < VAR_40->num_queues; VAR_42++) {
        struct bxe_eth_q_stats *VAR_43 = &VAR_40->fp[VAR_42].eth_q_stats;
        struct bxe_eth_q_stats_old *VAR_44 = &VAR_40->fp[VAR_42].eth_q_stats_old;

        FUNC_0(VAR_14);
        FUNC_0(VAR_20);
        FUNC_0(VAR_22);
        FUNC_0(VAR_15);
        FUNC_0(VAR_13);
        FUNC_0(VAR_17);
        FUNC_0(VAR_21);
        FUNC_0(VAR_16);
        FUNC_0(VAR_18);
        FUNC_0(VAR_19);
        FUNC_0(VAR_12);
        FUNC_0(VAR_35);
        FUNC_0(VAR_37);
        FUNC_0(VAR_30);
        FUNC_0(VAR_31);
        FUNC_0(VAR_32);
        FUNC_0(VAR_33);
        FUNC_0(VAR_34);
        FUNC_0(VAR_25);
        FUNC_0(VAR_28);
        FUNC_0(VAR_27);
        FUNC_0(VAR_24);
        FUNC_0(VAR_29);
        FUNC_0(VAR_38);
        FUNC_0(VAR_39);


        FUNC_0(VAR_23);
        FUNC_0(VAR_26);
        FUNC_0(VAR_36);


        FUNC_0(VAR_4);
        FUNC_0(VAR_5);
        FUNC_0(VAR_6);
        FUNC_0(VAR_7);
        FUNC_0(VAR_10);
        FUNC_0(VAR_11);
        FUNC_0(VAR_8);
        FUNC_0(VAR_9);


        FUNC_0(VAR_3);
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);
        FUNC_0(VAR_2);
    }
}
