
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_mtu; int mac_addr; } ;
struct ena_com_dev_get_features_ctx {TYPE_1__ dev_attr; } ;
struct ena_adapter {int pdev; int ifp; int mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct ena_adapter *VAR_2,
    struct ena_com_dev_get_features_ctx *VAR_3)
{

 if (FUNC_2(VAR_3->dev_attr.mac_addr, VAR_2->mac_addr,
     VAR_1) != 0) {
  FUNC_0(VAR_2->pdev,
      "Error, mac address are different\n");
  return (VAR_0);
 }

 if (VAR_3->dev_attr.max_mtu < FUNC_1(VAR_2->ifp)) {
  FUNC_0(VAR_2->pdev,
      "Error, device max mtu is smaller than ifp MTU\n");
  return (VAR_0);
 }

 return 0;
}
