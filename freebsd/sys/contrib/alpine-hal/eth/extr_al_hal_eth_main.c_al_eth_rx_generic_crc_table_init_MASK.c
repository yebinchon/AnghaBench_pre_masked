
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {scalar_t__ rev_id; TYPE_2__* ec_regs_base; int name; } ;
struct TYPE_6__ {int rx_gcp_legacy; } ;
struct TYPE_4__ {int rx_comp_desc; } ;
struct TYPE_5__ {TYPE_1__ gen_v3; TYPE_3__ rfw_v3; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int * VAR_6 ;
 int FUNC_2 (struct al_hal_eth_adapter*,int,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int) ;

int FUNC_5(struct al_hal_eth_adapter *VAR_7)
 {
 int VAR_8;
 uint32_t VAR_9;

 FUNC_0((VAR_7->rev_id > VAR_0));

 FUNC_1("eth [%s]: enable rx_generic_crc\n", VAR_7->name);
 FUNC_3(&VAR_7->ec_regs_base->rfw_v3.rx_gcp_legacy, 0x0);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  FUNC_2(VAR_7, VAR_8,
    &VAR_6[VAR_8]);

 VAR_9 = VAR_5 |
   VAR_4 |
   VAR_3 |
   VAR_2;
 FUNC_4(&VAR_7->ec_regs_base->gen_v3.rx_comp_desc,
   VAR_9, VAR_9);
 return 0;
}
