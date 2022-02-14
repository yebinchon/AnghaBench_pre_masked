
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_stats {int lock; int ustats; } ;


 int FUNC_0 (struct ip_vs_stats*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct ip_vs_stats *VAR_0)
{
 FUNC_2(&VAR_0->lock);

 FUNC_1(&VAR_0->ustats, 0, sizeof(VAR_0->ustats));
 FUNC_0(VAR_0);

 FUNC_3(&VAR_0->lock);
}
