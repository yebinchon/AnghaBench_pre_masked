
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ dn_ptr; } ;
struct dn_ifaddr {int ifa_local; } ;
struct dn_dev {struct dn_ifaddr* ifa_list; } ;
typedef int __le16 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_1, __le16 *VAR_2)
{
 struct dn_dev *VAR_3 = (struct dn_dev *)VAR_1->dn_ptr;
 struct dn_ifaddr *VAR_4;
 int VAR_5 = -VAR_0;
 if (VAR_3 == ((void*)0))
  goto out;
 VAR_4 = VAR_3->ifa_list;
 if (VAR_4 != ((void*)0)) {
  *VAR_2 = VAR_4->ifa_local;
  VAR_5 = 0;
 }
out:
 return VAR_5;
}
