
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct teql_master {struct Qdisc* slaves; } ;
struct net_device {int mtu; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int mtu; } ;


 int VAR_0 ;
 struct Qdisc* FUNC_0 (struct Qdisc*) ;
 struct teql_master* FUNC_1 (struct net_device*) ;
 TYPE_1__* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, int VAR_2)
{
 struct teql_master *VAR_3 = FUNC_1(VAR_1);
 struct Qdisc *VAR_4;

 if (VAR_2 < 68)
  return -VAR_0;

 VAR_4 = VAR_3->slaves;
 if (VAR_4) {
  do {
   if (VAR_2 > FUNC_2(VAR_4)->mtu)
    return -VAR_0;
  } while ((VAR_4=FUNC_0(VAR_4)) != VAR_3->slaves);
 }

 VAR_1->mtu = VAR_2;
 return 0;
}
