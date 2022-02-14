
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct gnet_stats_rate_est {int dummy; } ;
struct gnet_stats_basic_packed {int dummy; } ;
typedef int spinlock_t ;


 int FUNC_0 (struct gnet_stats_basic_packed*,struct gnet_stats_rate_est*) ;
 int FUNC_1 (struct gnet_stats_basic_packed*,struct gnet_stats_rate_est*,int *,struct nlattr*) ;

int FUNC_2(struct gnet_stats_basic_packed *VAR_0,
     struct gnet_stats_rate_est *VAR_1,
     spinlock_t *VAR_2, struct nlattr *VAR_3)
{
 FUNC_0(VAR_0, VAR_1);
 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
