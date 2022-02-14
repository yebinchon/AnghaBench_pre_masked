
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {struct dn_dev* dn_ptr; } ;
struct TYPE_2__ {scalar_t__ forwarding; } ;
struct dn_dev {TYPE_1__ parms; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3)
{
 struct dn_dev *VAR_4 = VAR_3->dn_ptr;

 if (VAR_4->parms.forwarding == 0)
  FUNC_0(VAR_3, VAR_1, VAR_0, 0);
 else
  FUNC_0(VAR_3, VAR_2, VAR_0, 0);
}
