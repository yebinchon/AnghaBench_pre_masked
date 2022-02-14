
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {void* lo; void* hi; } ;
struct TYPE_7__ {TYPE_2__ update_data_addr; } ;
struct TYPE_5__ {int type; void* conn_and_cmd_data; } ;
struct eth_spe {TYPE_3__ data; TYPE_1__ hdr; } ;
struct TYPE_8__ {scalar_t__ paddr; } ;
struct bxe_softc {int eq_spq_left; int cq_spq_left; scalar_t__ spq; scalar_t__ spq_prod_bd; TYPE_4__ spq_dma; int spq_prod_idx; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int ,...) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 int FUNC_3 (struct bxe_softc*) ;
 scalar_t__ FUNC_4 (struct bxe_softc*,int ) ;
 int FUNC_5 (struct bxe_softc*) ;
 int VAR_0 ;
 int FUNC_6 (struct bxe_softc*,int) ;
 int FUNC_7 (struct bxe_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int,int) ;
 struct eth_spe* FUNC_13 (struct bxe_softc*) ;
 int FUNC_14 (struct bxe_softc*) ;
 int VAR_6 ;
 int FUNC_15 (int) ;
 void* FUNC_16 (int) ;

int
FUNC_17(struct bxe_softc *VAR_7,
            int VAR_8,
            int VAR_9,
            uint32_t VAR_10,
            uint32_t VAR_11,
            int VAR_12)
{
    struct eth_spe *VAR_13;
    uint16_t VAR_14;
    int VAR_15;

    VAR_15 = FUNC_12(VAR_8, VAR_12);

    FUNC_3(VAR_7);

    if (VAR_15) {
        if (!FUNC_10(&VAR_7->eq_spq_left)) {
            FUNC_1(VAR_7, "EQ ring is full!\n");
            FUNC_5(VAR_7);
            return (-1);
        }
    } else {
        if (!FUNC_10(&VAR_7->cq_spq_left)) {
            FUNC_1(VAR_7, "SPQ ring is full!\n");
            FUNC_5(VAR_7);
            return (-1);
        }
    }

    VAR_13 = FUNC_13(VAR_7);


    VAR_13->hdr.conn_and_cmd_data =
        FUNC_16((VAR_8 << VAR_1) | FUNC_6(VAR_7, VAR_9));

    VAR_14 = (VAR_12 << VAR_3) & VAR_2;


    VAR_14 |= ((FUNC_7(VAR_7) << VAR_5) &
             VAR_4);

    VAR_13->hdr.type = FUNC_15(VAR_14);

    VAR_13->data.update_data_addr.hi = FUNC_16(VAR_10);
    VAR_13->data.update_data_addr.lo = FUNC_16(VAR_11);






    if (VAR_15) {
        FUNC_11(&VAR_7->eq_spq_left, 1);
    } else {
        FUNC_11(&VAR_7->cq_spq_left, 1);
    }

    FUNC_0(VAR_7, VAR_0, "SPQE -> %#jx\n", (uintmax_t)VAR_7->spq_dma.paddr);
    FUNC_0(VAR_7, VAR_0, "FUNC_RDATA -> %p / %#jx\n",
          FUNC_2(VAR_7, VAR_6), (uintmax_t)FUNC_4(VAR_7, VAR_6));
    FUNC_0(VAR_7, VAR_0,
          "SPQE[%x] (%x:%x) (cmd, common?) (%d,%d) hw_cid %x data (%x:%x) type(0x%x) left (CQ, EQ) (%lx,%lx)\n",
          VAR_7->spq_prod_idx,
          (uint32_t)FUNC_8(VAR_7->spq_dma.paddr),
          (uint32_t)(FUNC_9(VAR_7->spq_dma.paddr) + (uint8_t *)VAR_7->spq_prod_bd - (uint8_t *)VAR_7->spq),
          VAR_8,
          VAR_15,
          FUNC_6(VAR_7, VAR_9),
          VAR_10,
          VAR_11,
          VAR_14,
          FUNC_10(&VAR_7->cq_spq_left),
          FUNC_10(&VAR_7->eq_spq_left));

    FUNC_14(VAR_7);

    FUNC_5(VAR_7);
    return (0);
}
