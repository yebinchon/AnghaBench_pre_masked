
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnet_stats_rate_est {int dummy; } ;
struct gnet_stats_basic_packed {int dummy; } ;
struct gen_estimator {int e_rcu; int list; int * bstats; int node; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct gen_estimator* FUNC_1 (struct gnet_stats_basic_packed*,struct gnet_stats_rate_est*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct gnet_stats_basic_packed *VAR_3,
   struct gnet_stats_rate_est *VAR_4)
{
 struct gen_estimator *VAR_5;

 while ((VAR_5 = FUNC_1(VAR_3, VAR_4))) {
  FUNC_3(&VAR_5->node, &VAR_2);

  FUNC_4(&VAR_1);
  VAR_5->bstats = ((void*)0);
  FUNC_5(&VAR_1);

  FUNC_2(&VAR_5->list);
  FUNC_0(&VAR_5->e_rcu, VAR_0);
 }
}
