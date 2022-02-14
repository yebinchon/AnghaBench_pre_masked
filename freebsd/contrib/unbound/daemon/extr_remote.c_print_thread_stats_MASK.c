
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_stats_info {int dummy; } ;
typedef int nm ;
typedef int RES ;


 int FUNC_0 (int *,char*,struct ub_stats_info*) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_2(RES* VAR_0, int VAR_1, struct ub_stats_info* VAR_2)
{
 char VAR_3[32];
 FUNC_1(VAR_3, sizeof(VAR_3), "thread%d", VAR_1);
 VAR_3[sizeof(VAR_3)-1]=0;
 return FUNC_0(VAR_0, VAR_3, VAR_2);
}
