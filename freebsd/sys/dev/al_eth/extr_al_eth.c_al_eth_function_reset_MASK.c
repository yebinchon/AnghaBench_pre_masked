
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_board_params {int dummy; } ;
struct al_eth_adapter {scalar_t__ board_type; int mac_addr; int ec_base; int mac_base; int internal_pcie_base; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct al_eth_board_params*) ;
 int FUNC_1 (int ,struct al_eth_board_params*) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct al_eth_adapter *VAR_5)
{
 struct al_eth_board_params VAR_6;
 int VAR_7;


 FUNC_0(VAR_5->mac_base, &VAR_6);
 FUNC_3(VAR_5->ec_base, 0, VAR_5->mac_addr);
 if (VAR_5->board_type == VAR_0)
  VAR_7 = FUNC_2(&VAR_3,
      &VAR_4,
      VAR_5->dev, VAR_5->mac_base);
 else
  VAR_7 = FUNC_2(&VAR_1,
      &VAR_2,
      VAR_5->internal_pcie_base, VAR_5->mac_base);


 FUNC_1(VAR_5->mac_base, &VAR_6);
 FUNC_4(VAR_5->ec_base, 0, VAR_5->mac_addr);

 return (VAR_7);
}
