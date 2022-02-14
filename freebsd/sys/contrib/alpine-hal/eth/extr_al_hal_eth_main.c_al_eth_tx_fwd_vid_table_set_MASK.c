
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct al_hal_eth_adapter {TYPE_1__* ec_regs_base; } ;
typedef int al_bool ;
struct TYPE_4__ {int tx_vid_table_data; int tx_vid_table_addr; } ;
struct TYPE_3__ {TYPE_2__ tfw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,scalar_t__) ;

int FUNC_3(struct al_hal_eth_adapter *VAR_3, uint32_t VAR_4,
    uint8_t VAR_5, al_bool VAR_6)
{
 uint32_t VAR_7 = 0;
 FUNC_1(VAR_4 < VAR_0);
 FUNC_0(VAR_7, VAR_2, 0, VAR_5);
 FUNC_0(VAR_7, VAR_1, 4, VAR_6);

 FUNC_2(&VAR_3->ec_regs_base->tfw.tx_vid_table_addr, VAR_4);
 FUNC_2(&VAR_3->ec_regs_base->tfw.tx_vid_table_data, VAR_7);
 return 0;
}
