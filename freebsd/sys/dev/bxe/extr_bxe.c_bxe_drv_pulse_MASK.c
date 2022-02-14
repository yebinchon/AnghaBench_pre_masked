
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bxe_softc {int fw_drv_pulse_wr_seq; } ;
struct TYPE_2__ {int drv_pulse_mb; } ;


 size_t FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct bxe_softc *VAR_1)
{
    FUNC_1(VAR_1, VAR_0[FUNC_0(VAR_1)].drv_pulse_mb,
             VAR_1->fw_drv_pulse_wr_seq);
}
