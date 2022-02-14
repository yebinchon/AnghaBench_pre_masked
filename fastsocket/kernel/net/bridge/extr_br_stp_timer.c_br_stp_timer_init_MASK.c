
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int gc_timer; int topology_change_timer; int tcn_timer; int hello_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,unsigned long) ;

void FUNC_1(struct net_bridge *VAR_4)
{
 FUNC_0(&VAR_4->hello_timer, VAR_1,
        (unsigned long) VAR_4);

 FUNC_0(&VAR_4->tcn_timer, VAR_2,
        (unsigned long) VAR_4);

 FUNC_0(&VAR_4->topology_change_timer,
        VAR_3,
        (unsigned long) VAR_4);

 FUNC_0(&VAR_4->gc_timer, VAR_0, (unsigned long) VAR_4);
}
