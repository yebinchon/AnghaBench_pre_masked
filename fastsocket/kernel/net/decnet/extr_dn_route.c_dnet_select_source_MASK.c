
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct dn_dev* dn_ptr; } ;
struct dn_ifaddr {int ifa_scope; int ifa_local; struct dn_ifaddr* ifa_next; } ;
struct dn_dev {struct dn_ifaddr* ifa_list; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static __le16 FUNC_3(const struct net_device *VAR_1, __le16 VAR_2, int VAR_3)
{
 __le16 VAR_4 = 0;
 struct dn_dev *VAR_5 = VAR_1->dn_ptr;
 struct dn_ifaddr *VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 FUNC_1(&VAR_0);
 for(VAR_6 = VAR_5->ifa_list; VAR_6; VAR_6 = VAR_6->ifa_next) {
  if (VAR_6->ifa_scope > VAR_3)
   continue;
  if (!VAR_2) {
   VAR_4 = VAR_6->ifa_local;
   break;
  }
  VAR_8 = FUNC_0(VAR_2, VAR_6->ifa_local);
  if (VAR_8 > VAR_7)
   VAR_4 = VAR_6->ifa_local;
  if (VAR_7 == 0)
   VAR_4 = VAR_6->ifa_local;
 }
 FUNC_2(&VAR_0);

 return VAR_4;
}
