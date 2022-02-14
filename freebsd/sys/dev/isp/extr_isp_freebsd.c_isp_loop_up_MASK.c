
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_fc {int loop_seen_once; scalar_t__ loop_down_time; } ;
typedef int ispsoftc_t ;


 struct isp_fc* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,char*,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3(ispsoftc_t *VAR_2, int VAR_3)
{
 struct isp_fc *VAR_4 = FUNC_0(VAR_2, VAR_3);

 FUNC_1(VAR_2, VAR_1|VAR_0, "Chan %d Loop is up", VAR_3);
 VAR_4->loop_seen_once = 1;
 VAR_4->loop_down_time = 0;
 FUNC_2(VAR_2, VAR_3);
}
