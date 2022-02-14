
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_hal_eth_adapter {int mac_mode; } ;
struct al_eth_capabilities {void* pfc; void* speed_10000_FD; void* eee; void* speed_1000_FD; void* speed_100_FD; void* speed_100_HD; void* speed_10_FD; void* speed_10_HD; void* speed_10000_HD; void* speed_1000_HD; } ;





 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct al_eth_capabilities*) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(struct al_hal_eth_adapter *VAR_3, struct al_eth_capabilities *VAR_4)
{
 FUNC_0(VAR_4);

 VAR_4->speed_10_HD = VAR_0;
 VAR_4->speed_10_FD = VAR_0;
 VAR_4->speed_100_HD = VAR_0;
 VAR_4->speed_100_FD = VAR_0;
 VAR_4->speed_1000_HD = VAR_0;
 VAR_4->speed_1000_FD = VAR_0;
 VAR_4->speed_10000_HD = VAR_0;
 VAR_4->speed_10000_FD = VAR_0;
 VAR_4->pfc = VAR_0;
 VAR_4->eee = VAR_0;

 switch (VAR_3->mac_mode) {
  case 129:
  case 128:
   VAR_4->speed_10_HD = VAR_1;
   VAR_4->speed_10_FD = VAR_1;
   VAR_4->speed_100_HD = VAR_1;
   VAR_4->speed_100_FD = VAR_1;
   VAR_4->speed_1000_FD = VAR_1;
   VAR_4->eee = VAR_1;
   break;
  case 130:
   VAR_4->speed_10000_FD = VAR_1;
   VAR_4->pfc = VAR_1;
   break;
  default:
  FUNC_1("Eth: unsupported MAC mode %d", VAR_3->mac_mode);
  return -VAR_2;
 }
 return 0;
}
