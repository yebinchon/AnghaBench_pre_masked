
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {struct dn_dev* dn_ptr; } ;
struct dn_ifaddr {int ifa_flags; struct dn_ifaddr* ifa_next; } ;
struct TYPE_2__ {scalar_t__ t2; scalar_t__ t3; int (* timer3 ) (struct net_device*,struct dn_ifaddr*) ;} ;
struct dn_dev {scalar_t__ t3; TYPE_1__ parms; struct dn_ifaddr* ifa_list; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,struct dn_ifaddr*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 struct net_device *VAR_2 = (struct net_device *)VAR_1;
 struct dn_dev *VAR_3 = VAR_2->dn_ptr;
 struct dn_ifaddr *VAR_4;

 if (VAR_3->t3 <= VAR_3->parms.t2) {
  if (VAR_3->parms.timer3) {
   for(VAR_4 = VAR_3->ifa_list; VAR_4; VAR_4 = VAR_4->ifa_next) {
    if (!(VAR_4->ifa_flags & VAR_0))
     VAR_3->parms.timer3(VAR_2, VAR_4);
   }
  }
  VAR_3->t3 = VAR_3->parms.t3;
 } else {
  VAR_3->t3 -= VAR_3->parms.t2;
 }

 FUNC_0(VAR_2);
}
