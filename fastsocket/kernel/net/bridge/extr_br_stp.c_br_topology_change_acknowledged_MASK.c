
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int tcn_timer; scalar_t__ topology_change_detected; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct net_bridge *VAR_0)
{
 VAR_0->topology_change_detected = 0;
 FUNC_0(&VAR_0->tcn_timer);
}
