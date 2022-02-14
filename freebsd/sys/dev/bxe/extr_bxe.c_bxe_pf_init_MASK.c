
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_11__ {int lo; int hi; } ;
struct TYPE_7__ {int member_0; } ;
struct event_ring_data {int sb_id; int index_id; int producer; TYPE_5__ base_addr; TYPE_1__ member_0; } ;
struct cmng_struct_per_port {int dummy; } ;
struct TYPE_12__ {int paddr; } ;
struct TYPE_10__ {scalar_t__ pmf; } ;
struct TYPE_9__ {int line_speed; } ;
struct TYPE_8__ {int paddr; } ;
struct bxe_softc {int eq_prod; TYPE_6__ eq_dma; int cmng; TYPE_4__ port; TYPE_3__ link_vars; int spq_prod_idx; TYPE_2__ spq_dma; int ifp; } ;
struct bxe_func_init_params {int func_flgs; int pf_id; int func_id; int spq_prod; int spq_map; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__,int ) ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct bxe_softc*,int ,int ) ;
 int FUNC_9 (struct bxe_softc*,struct bxe_func_init_params*) ;
 int FUNC_10 (struct bxe_softc*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ,int) ;
 int FUNC_13 (struct bxe_softc*,int *,int ) ;
 int FUNC_14 (struct bxe_softc*,struct event_ring_data*,int) ;

__attribute__((used)) static void
FUNC_15(struct bxe_softc *VAR_12)
{
    struct bxe_func_init_params VAR_13 = { 0 };
    struct event_ring_data VAR_14 = { 0 };
    uint16_t VAR_15;

    if (!FUNC_0(VAR_12)) {


        FUNC_2(VAR_12,
               (VAR_9 +
                (VAR_1 * 4) +
                ((FUNC_1(VAR_12) ? FUNC_3(VAR_12) : FUNC_5(VAR_12)) * 4)),
               0);

        FUNC_2(VAR_12,
               (VAR_9 +
                (VAR_1 * 4) +
                (VAR_0 * 4) +
                ((FUNC_1(VAR_12) ? FUNC_3(VAR_12) : FUNC_5(VAR_12)) * 4)),
               0);
    }


    VAR_15 = (VAR_5 | VAR_3 | VAR_4);





    VAR_15 |= (FUNC_11(VAR_12->ifp) & VAR_8) ? VAR_6 : 0;

    VAR_13.func_flgs = VAR_15;
    VAR_13.pf_id = FUNC_3(VAR_12);
    VAR_13.func_id = FUNC_3(VAR_12);
    VAR_13.spq_map = VAR_12->spq_dma.paddr;
    VAR_13.spq_prod = VAR_12->spq_prod_idx;

    FUNC_9(VAR_12, &VAR_13);

    FUNC_12(&VAR_12->cmng, 0, sizeof(struct cmng_struct_per_port));







    VAR_12->link_vars.line_speed = VAR_10;
    FUNC_8(VAR_12, VAR_11, FUNC_10(VAR_12));


    if (VAR_12->port.pmf) {
        FUNC_13(VAR_12, &VAR_12->cmng, FUNC_4(VAR_12));
    }


    VAR_14.base_addr.hi = FUNC_6(VAR_12->eq_dma.paddr);
    VAR_14.base_addr.lo = FUNC_7(VAR_12->eq_dma.paddr);
    VAR_14.producer = VAR_12->eq_prod;
    VAR_14.index_id = VAR_7;
    VAR_14.sb_id = VAR_2;
    FUNC_14(VAR_12, &VAR_14, FUNC_3(VAR_12));
}
