
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct ecore_txq_setup_params {int tss_leading_cl_id; int fw_sb_id; int traffic_type; scalar_t__ sb_cq_index; int dscr_map; } ;
struct bxe_softc {int dummy; } ;
struct TYPE_2__ {int paddr; } ;
struct bxe_fastpath {int fw_sb_id; TYPE_1__ tx_dma; } ;


 int FUNC_0 (struct bxe_softc*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct bxe_softc *VAR_3,
                 struct bxe_fastpath *VAR_4,
                 struct ecore_txq_setup_params *VAR_5,
                 uint8_t VAR_6)
{





    VAR_5->dscr_map = VAR_4->tx_dma.paddr;
    VAR_5->sb_cq_index = VAR_0 + VAR_6;
    VAR_5->traffic_type = VAR_1;
    VAR_5->fw_sb_id = VAR_4->fw_sb_id;





    VAR_5->tss_leading_cl_id = FUNC_0(VAR_3, 0, VAR_2);
}
