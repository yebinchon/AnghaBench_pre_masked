
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct al_hal_eth_adapter {scalar_t__ enable_rx_parser; TYPE_4__* ec_regs_base; int name; } ;
struct TYPE_7__ {int checksum; int meta; } ;
struct TYPE_8__ {TYPE_3__ rfw; TYPE_2__* epe_h; TYPE_1__* epe; } ;
struct TYPE_6__ {int hdr_len; } ;
struct TYPE_5__ {int res_in; int res_def; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int * VAR_3 ;
 int FUNC_1 (struct al_hal_eth_adapter*,int,int *,int *) ;
 int * VAR_4 ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct al_hal_eth_adapter *VAR_5)
{
 int VAR_6;

 if (VAR_5->enable_rx_parser == 0) {
  FUNC_0("eth [%s]: disable rx parser\n", VAR_5->name);

  FUNC_2(&VAR_5->ec_regs_base->epe[0].res_def, 0x08000000);
  FUNC_2(&VAR_5->ec_regs_base->epe[0].res_in, 0x7);

  FUNC_2(&VAR_5->ec_regs_base->epe[1].res_def, 0x08000000);
  FUNC_2(&VAR_5->ec_regs_base->epe[1].res_in, 0x7);

  return;
 }
 FUNC_0("eth [%s]: enable rx parser\n", VAR_5->name);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_1(VAR_5, VAR_6, &VAR_4[VAR_6], &VAR_3[VAR_6]);

 FUNC_2(&VAR_5->ec_regs_base->epe[0].res_def, 0x08000080);
 FUNC_2(&VAR_5->ec_regs_base->epe[0].res_in, 0x7);

 FUNC_2(&VAR_5->ec_regs_base->epe[1].res_def, 0x08000080);
 FUNC_2(&VAR_5->ec_regs_base->epe[1].res_in, 0);


 FUNC_2(&VAR_5->ec_regs_base->epe_h[8].hdr_len, (4 << 16) | 4);


 FUNC_2(&VAR_5->ec_regs_base->rfw.meta, VAR_2);

 FUNC_2(&VAR_5->ec_regs_base->rfw.checksum, VAR_1);
}
