
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ type; int dev_addr; } ;
struct dn_ifaddr {scalar_t__ ifa_local; struct dn_ifaddr* ifa_next; } ;
struct dn_dev {struct net_device* dev; int * ifa_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,struct dn_ifaddr*) ;
 int FUNC_2 (struct net_device*,unsigned char*,int ,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct dn_ifaddr*) ;
 int FUNC_5 (unsigned char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,struct dn_ifaddr*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(struct dn_dev *VAR_5, struct dn_ifaddr **VAR_6, int VAR_7)
{
 struct dn_ifaddr *VAR_8 = *VAR_6;
 unsigned char VAR_9[6];
 struct net_device *VAR_10 = VAR_5->dev;

 FUNC_0();

 *VAR_6 = VAR_8->ifa_next;

 if (VAR_5->dev->type == VAR_0) {
  if (VAR_8->ifa_local != FUNC_6(VAR_10->dev_addr)) {
   FUNC_5(VAR_9, VAR_8->ifa_local);
   FUNC_2(VAR_10, VAR_9, VAR_1, 0);
  }
 }

 FUNC_7(VAR_3, VAR_8);
 FUNC_1(&VAR_4, VAR_2, VAR_8);
 if (VAR_7) {
  FUNC_4(VAR_8);

  if (VAR_5->ifa_list == ((void*)0))
   FUNC_3(VAR_5->dev);
 }
}
