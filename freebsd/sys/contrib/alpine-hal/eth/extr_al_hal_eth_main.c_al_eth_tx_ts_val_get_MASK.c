
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; int mac_mode; } ;
struct TYPE_4__ {TYPE_1__* pth_db; } ;
struct TYPE_3__ {int ts; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct al_hal_eth_adapter *VAR_1, uint8_t VAR_2,
    uint32_t *VAR_3)
{
 FUNC_1(VAR_2 < VAR_0);


 if (FUNC_0(VAR_1->mac_mode)) {
  FUNC_1(VAR_2 <= 7);
  FUNC_1(VAR_2 >= 1);
 }


 *VAR_3 = FUNC_2(&VAR_1->ec_regs_base->pth_db[VAR_2].ts);
 return 0;
}
