
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct mbuf {int dummy; } ;
struct bxe_softc {int dummy; } ;
struct TYPE_2__ {int tx_queue_xoff; int mbuf_alloc_tx; int tx_encap_failures; } ;
struct bxe_fastpath {int watchdog_timer; TYPE_1__ eth_q_stats; } ;
typedef int if_t ;


 int FUNC_0 (struct bxe_fastpath*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct bxe_softc*,struct bxe_fastpath*) ;
 int FUNC_3 (struct bxe_fastpath*,struct mbuf**) ;
 int FUNC_4 (struct bxe_softc*,struct bxe_fastpath*) ;
 struct mbuf* FUNC_5 (int ) ;
 int FUNC_6 (int ,struct mbuf*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct mbuf*) ;
 int FUNC_10 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_11(struct bxe_softc *VAR_3,
                    if_t VAR_4,
                    struct bxe_fastpath *VAR_5)
{
    struct mbuf *VAR_6 = ((void*)0);
    int VAR_7 = 0;
    uint16_t VAR_8;

    FUNC_0(VAR_5);


    while (!FUNC_8(VAR_4)) {





        VAR_6 = FUNC_5(VAR_4);
        if (FUNC_1(VAR_6 == ((void*)0))) {
            break;
        }


        VAR_5->eth_q_stats.mbuf_alloc_tx++;






        if (FUNC_1(FUNC_3(VAR_5, &VAR_6))) {
            VAR_5->eth_q_stats.tx_encap_failures++;
            if (VAR_6 != ((void*)0)) {

                FUNC_10(VAR_4, VAR_2, 0);
  FUNC_9(VAR_4, VAR_6);
                VAR_5->eth_q_stats.mbuf_alloc_tx--;
                VAR_5->eth_q_stats.tx_queue_xoff++;
            }


            break;
        }


        VAR_7++;


        FUNC_6(VAR_4, VAR_6);

        VAR_8 = FUNC_2(VAR_3, VAR_5);


        if (VAR_8 < VAR_0) {

            FUNC_4(VAR_3, VAR_5);
            if (FUNC_7(VAR_4) & VAR_2) {
                break;
            }
        }
    }


    if (VAR_7 > 0) {

        VAR_5->watchdog_timer = VAR_1;
    }
}
