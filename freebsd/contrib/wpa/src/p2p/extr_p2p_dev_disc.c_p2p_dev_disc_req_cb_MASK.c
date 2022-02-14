
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct p2p_data*,char*,...) ;
 int FUNC_1 (struct p2p_data*,int ) ;
 int FUNC_2 (struct p2p_data*,int ,int) ;

void FUNC_3(struct p2p_data *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1, "Device Discoverability Request TX callback: success=%d",
  VAR_2);

 if (!VAR_2) {




  FUNC_1(VAR_1, VAR_0);
  FUNC_2(VAR_1, 0, 100000);
  return;
 }

 FUNC_0(VAR_1, "GO acknowledged Device Discoverability Request - wait for response");





}
