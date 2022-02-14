
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ dn_ptr; } ;
struct dn_ifaddr {int dummy; } ;
struct TYPE_2__ {scalar_t__ forwarding; } ;
struct dn_dev {TYPE_1__ parms; } ;


 int FUNC_0 (struct net_device*,struct dn_ifaddr*) ;
 int FUNC_1 (struct net_device*,struct dn_ifaddr*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, struct dn_ifaddr *VAR_1)
{
 struct dn_dev *VAR_2 = (struct dn_dev *)VAR_0->dn_ptr;

 if (VAR_2->parms.forwarding == 0)
  FUNC_0(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0, VAR_1);
}
