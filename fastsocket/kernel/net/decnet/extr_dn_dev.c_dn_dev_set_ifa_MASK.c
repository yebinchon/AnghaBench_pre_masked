
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; struct dn_dev* dn_ptr; } ;
struct dn_ifaddr {int ifa_scope; struct dn_dev* ifa_dev; } ;
struct dn_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dn_dev* FUNC_0 (struct net_device*,int*) ;
 int FUNC_1 (struct dn_ifaddr*) ;
 int FUNC_2 (struct dn_dev*,struct dn_ifaddr*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct dn_ifaddr *VAR_3)
{
 struct dn_dev *VAR_4 = VAR_2->dn_ptr;
 int VAR_5;

 if (VAR_4 == ((void*)0)) {
  int VAR_6;
  VAR_4 = FUNC_0(VAR_2, &VAR_6);
  if (VAR_4 == ((void*)0))
   return VAR_6;
 }

 VAR_3->ifa_dev = VAR_4;

 if (VAR_2->flags & VAR_0)
  VAR_3->ifa_scope = VAR_1;

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5)
  FUNC_1(VAR_3);
 return VAR_5;
}
