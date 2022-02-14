
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_hal_eth_adapter {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

int FUNC_1(struct al_hal_eth_adapter *VAR_1)
{
 FUNC_0("eth [%s]: reset controller's UDMA\n", VAR_1->name);

 return -VAR_0;
}
