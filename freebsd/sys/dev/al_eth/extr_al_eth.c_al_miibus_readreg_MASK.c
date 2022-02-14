
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct al_eth_adapter {int dev; int phy_addr; int hal_adapter; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int,int*) ;
 struct al_eth_adapter* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, int VAR_3, int VAR_4)
{
 struct al_eth_adapter *VAR_5 = FUNC_1(VAR_2);
 uint16_t VAR_6 = 0;
 int VAR_7;
 int VAR_8 = VAR_1;

 while (VAR_8 > 0) {
  VAR_7 = FUNC_0(&VAR_5->hal_adapter, VAR_5->phy_addr,
      -1, VAR_4, &VAR_6);

  if (VAR_7 == 0)
   return (VAR_6);

  FUNC_3(VAR_5->dev,
      "mdio read failed. try again in 10 msec\n");

  VAR_8 -= VAR_0;
  FUNC_4("readred pause", VAR_0);
 }

 if (VAR_7 != 0)
  FUNC_2(VAR_5->dev, "MDIO read failed on timeout\n");

 return (VAR_6);
}
