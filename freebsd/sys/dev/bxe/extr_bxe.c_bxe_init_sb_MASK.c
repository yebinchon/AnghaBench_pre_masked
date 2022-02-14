
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct hc_status_block_sm {int dummy; } ;
struct TYPE_5__ {void* lo; void* hi; } ;
struct TYPE_4__ {int vf_id; void* vnic_id; int vf_valid; void* pf_id; } ;
struct TYPE_6__ {struct hc_status_block_sm* state_machine; TYPE_2__ host_sb_addr; void* same_igu_sb_1b; TYPE_1__ p_func; void* state; } ;
struct hc_status_block_data_e2 {int index_data; TYPE_3__ common; } ;
struct hc_status_block_data_e1x {int index_data; TYPE_3__ common; } ;
struct bxe_softc {int dummy; } ;
typedef int bus_addr_t ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* FUNC_3 (struct bxe_softc*) ;
 void* FUNC_4 (struct bxe_softc*) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* VAR_7 ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct hc_status_block_sm*,int,int) ;
 int FUNC_9 (struct bxe_softc*,int,int *,int) ;
 int FUNC_10 (struct bxe_softc*,int) ;
 int FUNC_11 (struct hc_status_block_data_e2*,int ,int) ;

__attribute__((used)) static void
FUNC_12(struct bxe_softc *VAR_8,
            bus_addr_t VAR_9,
            int VAR_10,
            uint8_t VAR_11,
            int VAR_12,
            int VAR_13)
{
    struct hc_status_block_data_e2 VAR_14;
    struct hc_status_block_data_e1x VAR_15;
    struct hc_status_block_sm *VAR_16;
    uint32_t *VAR_17;
    int VAR_18;
    int VAR_19;

    if (FUNC_1(VAR_8)) {
        VAR_18 = VAR_2;
    } else {
        VAR_18 = VAR_3;
    }

    FUNC_10(VAR_8, VAR_12);

    if (!FUNC_2(VAR_8)) {
        FUNC_11(&VAR_14, 0, sizeof(struct hc_status_block_data_e2));
        VAR_14 = VAR_4;
        VAR_14 = FUNC_3(VAR_8);
        VAR_14 = VAR_10;
        VAR_14 = VAR_11;
        VAR_14 = FUNC_4(VAR_8);
        VAR_14 = VAR_7;
        VAR_14 = FUNC_5(VAR_9);
        VAR_14 = FUNC_6(VAR_9);
        VAR_16 = VAR_14;
        VAR_17 = (uint32_t *)&VAR_14;
        VAR_19 = (sizeof(struct hc_status_block_data_e2) /
                     sizeof(uint32_t));
        FUNC_7(VAR_14);
    } else {
        FUNC_11(&VAR_15, 0, sizeof(struct hc_status_block_data_e1x));
        VAR_15.common.state = VAR_4;
        VAR_15.common.p_func.pf_id = FUNC_3(VAR_8);
        VAR_15.common.p_func.vf_id = 0xff;
        VAR_15.common.p_func.vf_valid = VAR_1;
        VAR_15.common.p_func.vnic_id = FUNC_4(VAR_8);
        VAR_15.common.same_igu_sb_1b = VAR_7;
        VAR_15.common.host_sb_addr.hi = FUNC_5(VAR_9);
        VAR_15.common.host_sb_addr.lo = FUNC_6(VAR_9);
        VAR_16 = VAR_15.common.state_machine;
        VAR_17 = (uint32_t *)&VAR_15;
        VAR_19 = (sizeof(struct hc_status_block_data_e1x) /
                     sizeof(uint32_t));
        FUNC_7(VAR_15.index_data);
    }

    FUNC_8(&VAR_16[VAR_5], VAR_13, VAR_18);
    FUNC_8(&VAR_16[VAR_6], VAR_13, VAR_18);

    FUNC_0(VAR_8, VAR_0, "Init FW SB %d\n", VAR_12);


    FUNC_9(VAR_8, VAR_12, VAR_17, VAR_19);
}
