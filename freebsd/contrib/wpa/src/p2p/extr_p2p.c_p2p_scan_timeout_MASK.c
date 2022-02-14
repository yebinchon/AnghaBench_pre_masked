
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {int p2p_scan_running; } ;


 int FUNC_0 (struct p2p_data*,char*,int) ;
 int FUNC_1 (struct p2p_data*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, void *VAR_1)
{
 struct p2p_data *VAR_2 = VAR_0;
 int VAR_3;
 FUNC_0(VAR_2, "p2p_scan timeout (running=%d)", VAR_2->p2p_scan_running);
 VAR_3 = VAR_2->p2p_scan_running;

 VAR_2->p2p_scan_running = 0;

 if (VAR_3)
  FUNC_1(VAR_2);
}
