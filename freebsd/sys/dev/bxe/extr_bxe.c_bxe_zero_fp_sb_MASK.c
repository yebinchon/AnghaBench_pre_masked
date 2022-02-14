
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {void* vf_valid; } ;
struct TYPE_4__ {TYPE_1__ p_func; void* state; } ;
struct hc_status_block_data_e2 {TYPE_2__ common; } ;
struct hc_status_block_data_e1x {TYPE_2__ common; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_3 (struct bxe_softc*,scalar_t__,int ,int ) ;
 int FUNC_4 (struct bxe_softc*,int,int*,int) ;
 int FUNC_5 (struct hc_status_block_data_e2*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bxe_softc *VAR_5,
               int VAR_6)
{
    struct hc_status_block_data_e2 VAR_7;
    struct hc_status_block_data_e1x VAR_8;
    uint32_t *VAR_9;
    uint32_t VAR_10 = 0;

    if (!FUNC_0(VAR_5)) {
        FUNC_5(&VAR_7, 0, sizeof(struct hc_status_block_data_e2));
        VAR_7 = VAR_4;
        VAR_7 = VAR_3;
        VAR_9 = (uint32_t *)&VAR_7;
        VAR_10 = (sizeof(struct hc_status_block_data_e2) /
                     sizeof(uint32_t));
    } else {
        FUNC_5(&VAR_8, 0, sizeof(struct hc_status_block_data_e1x));
        VAR_8.common.state = VAR_4;
        VAR_8.common.p_func.vf_valid = VAR_3;
        VAR_9 = (uint32_t *)&VAR_8;
        VAR_10 = (sizeof(struct hc_status_block_data_e1x) /
                     sizeof(uint32_t));
    }

    FUNC_4(VAR_5, VAR_6, VAR_9, VAR_10);

    FUNC_3(VAR_5, (VAR_0 + FUNC_1(VAR_6)),
             0, VAR_1);
    FUNC_3(VAR_5, (VAR_0 + FUNC_2(VAR_6)),
             0, VAR_2);
}
