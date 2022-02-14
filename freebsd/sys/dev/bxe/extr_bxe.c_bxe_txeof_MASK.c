
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct bxe_softc {int ifp; } ;
struct bxe_fastpath {scalar_t__ tx_bd_cons; scalar_t__ tx_pkt_cons; scalar_t__ tx_pkt_prod; scalar_t__ watchdog_timer; int index; int * tx_cons_sb; } ;
typedef int if_t ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct bxe_fastpath*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct bxe_softc*,struct bxe_fastpath*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct bxe_softc*,struct bxe_fastpath*) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;

__attribute__((used)) static uint8_t
FUNC_8(struct bxe_softc *VAR_6,
          struct bxe_fastpath *VAR_7)
{
    if_t VAR_8 = VAR_6->ifp;
    uint16_t VAR_9, VAR_10, VAR_11, VAR_12;
    uint16_t VAR_13;

    FUNC_1(VAR_7);

    VAR_9 = VAR_7->tx_bd_cons;
    VAR_10 = FUNC_6(*VAR_7->tx_cons_sb);
    VAR_11 = VAR_7->tx_pkt_cons;

    while (VAR_11 != VAR_10) {
        VAR_12 = FUNC_2(VAR_11);

        FUNC_0(VAR_6, VAR_2,
              "TX: fp[%d]: hw_cons=%u sw_cons=%u pkt_cons=%u\n",
              VAR_7->index, VAR_10, VAR_11, VAR_12);

        VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_12);

        VAR_11++;
    }

    VAR_7->tx_pkt_cons = VAR_11;
    VAR_7->tx_bd_cons = VAR_9;

    FUNC_0(VAR_6, VAR_2,
          "TX done: fp[%d]: hw_cons=%u sw_cons=%u sw_prod=%u\n",
          VAR_7->index, VAR_10, VAR_7->tx_pkt_cons, VAR_7->tx_pkt_prod);

    FUNC_7();

    VAR_13 = FUNC_4(VAR_6, VAR_7);

    if (VAR_13 < VAR_0) {
        FUNC_5(VAR_8, VAR_4, 0);
    } else {
        FUNC_5(VAR_8, 0, VAR_4);
    }

    if (VAR_7->tx_pkt_prod != VAR_7->tx_pkt_cons) {

        VAR_7->watchdog_timer = VAR_1;
        return (VAR_5);
    } else {

        VAR_7->watchdog_timer = 0;
        return (VAR_3);
    }
}
