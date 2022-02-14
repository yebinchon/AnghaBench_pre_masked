
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ type; int dev_addr; } ;
struct dn_ifaddr {scalar_t__ ifa_local; struct dn_ifaddr* ifa_next; } ;
struct dn_dev {struct dn_ifaddr* ifa_list; struct net_device* dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,struct dn_ifaddr*) ;
 int FUNC_2 (struct net_device*,unsigned char*,int ,int ) ;
 int FUNC_3 (unsigned char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,struct dn_ifaddr*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct dn_dev *VAR_6, struct dn_ifaddr *VAR_7)
{
 struct net_device *VAR_8 = VAR_6->dev;
 struct dn_ifaddr *VAR_9;
 unsigned char VAR_10[6];

 FUNC_0();


 for(VAR_9 = VAR_6->ifa_list; VAR_9; VAR_9 = VAR_9->ifa_next) {
  if (VAR_9->ifa_local == VAR_7->ifa_local)
   return -VAR_1;
 }

 if (VAR_8->type == VAR_0) {
  if (VAR_7->ifa_local != FUNC_4(VAR_8->dev_addr)) {
   FUNC_3(VAR_10, VAR_7->ifa_local);
   FUNC_2(VAR_8, VAR_10, VAR_2, 0);
  }
 }

 VAR_7->ifa_next = VAR_6->ifa_list;
 VAR_6->ifa_list = VAR_7;

 FUNC_5(VAR_4, VAR_7);
 FUNC_1(&VAR_5, VAR_3, VAR_7);

 return 0;
}
