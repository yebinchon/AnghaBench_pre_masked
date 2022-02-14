
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_stats_user {int dummy; } ;
struct ip_vs_stats {int lock; int ustats; } ;


 int FUNC_0 (struct ip_vs_stats_user*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ip_vs_stats_user *VAR_0, struct ip_vs_stats *VAR_1)
{
 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_0, &VAR_1->ustats, sizeof(*VAR_0));
 FUNC_2(&VAR_1->lock);
}
