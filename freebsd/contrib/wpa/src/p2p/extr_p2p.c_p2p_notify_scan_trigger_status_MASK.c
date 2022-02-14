
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {int p2p_scan_running; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct p2p_data*,int *) ;
 int FUNC_1 (int ,int ,int ,struct p2p_data*,int *) ;
 int FUNC_2 (struct p2p_data*) ;
 int FUNC_3 (struct p2p_data*,char*) ;
 int VAR_1 ;

void FUNC_4(struct p2p_data *VAR_2, int VAR_3)
{
 if (VAR_3 != 0) {
  FUNC_3(VAR_2, "Scan request failed");

  FUNC_2(VAR_2);
 } else {
  FUNC_3(VAR_2, "Running p2p_scan");
  VAR_2->p2p_scan_running = 1;
  FUNC_0(VAR_1, VAR_2, ((void*)0));
  FUNC_1(VAR_0, 0, VAR_1,
           VAR_2, ((void*)0));
 }
}
