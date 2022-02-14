
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inet6_ifaddr {TYPE_3__* rt; int addr; TYPE_5__* idev; } ;
struct TYPE_6__ {int forwarding; } ;
struct TYPE_9__ {TYPE_1__ cnf; } ;
struct TYPE_7__ {int dst; } ;
struct TYPE_8__ {TYPE_2__ u; int rt6i_node; } ;




 int FUNC_0 (struct inet6_ifaddr*) ;
 int FUNC_1 (struct inet6_ifaddr*) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,struct inet6_ifaddr*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_8(int VAR_0, struct inet6_ifaddr *VAR_1)
{
 FUNC_5(VAR_0 ? : 128, VAR_1);

 switch (VAR_0) {
 case 128:






  if (!(VAR_1->rt->rt6i_node))
   FUNC_7(VAR_1->rt);
  if (VAR_1->idev->cnf.forwarding)
   FUNC_0(VAR_1);
  break;
 case 129:
  if (VAR_1->idev->cnf.forwarding)
   FUNC_1(VAR_1);
  FUNC_2(VAR_1->idev, &VAR_1->addr);
  FUNC_4(&VAR_1->rt->u.dst);
  if (FUNC_6(VAR_1->rt))
   FUNC_3(&VAR_1->rt->u.dst);
  break;
 }
}
