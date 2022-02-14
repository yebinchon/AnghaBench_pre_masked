
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {int cross_connect; } ;


 int FUNC_0 (struct p2p_data*,char*,char*) ;

void FUNC_1(struct p2p_data *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, "Cross connection %s", VAR_1 ? "enabled" : "disabled");
 if (VAR_0->cross_connect == VAR_1)
  return;
 VAR_0->cross_connect = VAR_1;

}
