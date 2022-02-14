
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct p2p_data*,char*) ;
 int FUNC_1 (struct p2p_data*,int ) ;
 int FUNC_2 (struct p2p_data*,int ) ;

void FUNC_3(struct p2p_data *VAR_2)
{
 if (VAR_2->state != VAR_1) {
  FUNC_0(VAR_2, "Skip stop_listen since not in listen_only state.");
  return;
 }

 FUNC_2(VAR_2, 0);
 FUNC_1(VAR_2, VAR_0);
}
