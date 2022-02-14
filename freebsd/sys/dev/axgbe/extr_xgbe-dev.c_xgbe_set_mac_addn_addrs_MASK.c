
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int addn_mac; } ;
struct xgbe_prv_data {int * mac_addr; TYPE_1__ hw_feat; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*,int *,unsigned int*) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3;

 VAR_2 = VAR_0;
 VAR_3 = VAR_1->hw_feat.addn_mac;

 FUNC_0(VAR_1, VAR_1->mac_addr, &VAR_2);
 VAR_3--;


 while (VAR_3--)
  FUNC_0(VAR_1, ((void*)0), &VAR_2);
}
