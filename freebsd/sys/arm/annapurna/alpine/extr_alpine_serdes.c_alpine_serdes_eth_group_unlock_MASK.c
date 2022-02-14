
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct alpine_serdes_eth_group_mode {int lock; } ;


 struct alpine_serdes_eth_group_mode* VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(uint32_t VAR_1)
{
 struct alpine_serdes_eth_group_mode *VAR_2;

 VAR_2 = &VAR_0[VAR_1];

 if (FUNC_0(&VAR_2->lock) == 0)
  return;

 FUNC_1(&VAR_2->lock);
}
