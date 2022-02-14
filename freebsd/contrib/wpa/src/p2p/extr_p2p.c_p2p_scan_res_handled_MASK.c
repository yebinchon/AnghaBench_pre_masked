
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {scalar_t__ state; scalar_t__ p2p_scan_running; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct p2p_data*,int *) ;
 int FUNC_1 (struct p2p_data*) ;
 int FUNC_2 (struct p2p_data*,char*) ;
 scalar_t__ FUNC_3 (struct p2p_data*) ;
 int VAR_1 ;

void FUNC_4(struct p2p_data *VAR_2)
{
 if (!VAR_2->p2p_scan_running) {
  FUNC_2(VAR_2, "p2p_scan was not running, but scan results received");
 }
 VAR_2->p2p_scan_running = 0;
 FUNC_0(VAR_1, VAR_2, ((void*)0));

 if (FUNC_3(VAR_2))
  return;
 if (VAR_2->state == VAR_0)
  FUNC_1(VAR_2);
}
