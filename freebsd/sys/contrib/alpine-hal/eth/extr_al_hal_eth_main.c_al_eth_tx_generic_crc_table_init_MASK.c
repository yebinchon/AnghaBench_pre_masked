
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct al_hal_eth_adapter {scalar_t__ rev_id; TYPE_1__* ec_regs_base; int name; } ;
struct TYPE_4__ {int crc_csum_replace; int tx_gcp_legacy; } ;
struct TYPE_3__ {TYPE_2__ tfw_v3; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int * VAR_2 ;
 int FUNC_2 (struct al_hal_eth_adapter*,int,int *) ;
 int FUNC_3 (int *,int) ;

int FUNC_4(struct al_hal_eth_adapter *VAR_3)
{
 int VAR_4;
 FUNC_0((VAR_3->rev_id > VAR_0));

 FUNC_1("eth [%s]: enable tx_generic_crc\n", VAR_3->name);
 FUNC_3(&VAR_3->ec_regs_base->tfw_v3.tx_gcp_legacy, 0x0);
 FUNC_3(&VAR_3->ec_regs_base->tfw_v3.crc_csum_replace, 0x0);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_2(VAR_3, VAR_4,
    &VAR_2[VAR_4]);

 return 0;
}
