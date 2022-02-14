
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct al_eth_adapter {int hal_adapter; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct al_eth_adapter *VAR_1, uint8_t VAR_2,
    uint8_t VAR_3, uint32_t VAR_4)
{

 if (VAR_3 != 0)
  FUNC_1("only UDMA0 is supporter");

 if (VAR_4 >= VAR_0)
  FUNC_1("invalid queue number");

 FUNC_0(&VAR_1->hal_adapter, VAR_2, VAR_3, VAR_4);
}
