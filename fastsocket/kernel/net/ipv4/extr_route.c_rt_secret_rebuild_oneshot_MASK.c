
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int expires; } ;
struct TYPE_4__ {TYPE_2__ rt_secret_timer; } ;
struct net {TYPE_1__ ipv4; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct net*) ;

__attribute__((used)) static void FUNC_3(struct net *VAR_1)
{
 FUNC_1(&VAR_1->ipv4.rt_secret_timer);
 FUNC_2(VAR_1);
 if (VAR_0) {
  VAR_1->ipv4.rt_secret_timer.expires += VAR_0;
  FUNC_0(&VAR_1->ipv4.rt_secret_timer);
 }
}
