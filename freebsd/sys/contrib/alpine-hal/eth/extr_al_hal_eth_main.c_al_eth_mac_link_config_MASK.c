
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct al_hal_eth_adapter {scalar_t__ mac_mode; int name; } ;
typedef scalar_t__ al_bool ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (struct al_hal_eth_adapter*,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_3 (struct al_hal_eth_adapter*,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_4 (char*,int ,...) ;

int FUNC_5(struct al_hal_eth_adapter *VAR_5,
      al_bool VAR_6,
      al_bool VAR_7,
      uint32_t VAR_8,
      al_bool VAR_9)
{
 if ((!FUNC_0(VAR_5->mac_mode)) &&
  (VAR_5->mac_mode != VAR_1)) {
  FUNC_1("eth [%s]: this function not supported in this mac mode.\n",
          VAR_5->name);
  return -VAR_4;
 }

 if ((VAR_5->mac_mode != VAR_0) && (VAR_7)) {




  FUNC_4("eth [%s]: set auto negotiation to enable\n", VAR_5->name);
 } else {
  FUNC_4("eth [%s]: set link speed to %dMbps. %s duplex.\n", VAR_5->name,
   VAR_8, VAR_9 == VAR_3 ? "full" : "half");

  if ((VAR_8 != 10) && (VAR_8 != 100) && (VAR_8 != 1000)) {
   FUNC_1("eth [%s]: bad speed parameter (%d).\n",
           VAR_5->name, VAR_8);
   return -VAR_4;
  }
  if ((VAR_8 == 1000) && (VAR_9 == VAR_2)) {
   FUNC_1("eth [%s]: half duplex in 1Gbps is not supported.\n",
           VAR_5->name);
   return -VAR_4;
  }
 }

 if (FUNC_0(VAR_5->mac_mode))
  FUNC_3(VAR_5,
           VAR_6,
           VAR_7,
           VAR_8,
           VAR_9);
 else
  FUNC_2(VAR_5,
            VAR_6,
            VAR_7,
            VAR_8,
            VAR_9);

 return 0;
}
