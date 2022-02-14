
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlbl_unlhsh_iface {int dummy; } ;
struct netlbl_audit {int dummy; } ;
struct net_device {int ifindex; } ;
struct net {int dummy; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct net_device* FUNC_1 (struct net*,char const*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_3 (struct netlbl_unlhsh_iface*) ;
 int VAR_4 ;
 int FUNC_4 (struct net*,struct netlbl_unlhsh_iface*,void const*,void const*,struct netlbl_audit*) ;
 int FUNC_5 (struct net*,struct netlbl_unlhsh_iface*,void const*,void const*,struct netlbl_audit*) ;
 struct netlbl_unlhsh_iface* FUNC_6 (int ) ;
 struct netlbl_unlhsh_iface* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

int FUNC_10(struct net *VAR_5,
    const char *VAR_6,
    const void *VAR_7,
    const void *VAR_8,
    u32 VAR_9,
    struct netlbl_audit *VAR_10)
{
 int VAR_11;
 struct net_device *VAR_12;
 struct netlbl_unlhsh_iface *VAR_13;

 if (VAR_9 != sizeof(struct in_addr) &&
     VAR_9 != sizeof(struct in6_addr))
  return -VAR_0;

 FUNC_8();
 if (VAR_6 != ((void*)0)) {
  VAR_12 = FUNC_1(VAR_5, VAR_6);
  if (VAR_12 == ((void*)0)) {
   VAR_11 = -VAR_1;
   goto unlhsh_remove_return;
  }
  VAR_13 = FUNC_6(VAR_12->ifindex);
  FUNC_2(VAR_12);
 } else
  VAR_13 = FUNC_7(VAR_4);
 if (VAR_13 == ((void*)0)) {
  VAR_11 = -VAR_2;
  goto unlhsh_remove_return;
 }
 switch (VAR_9) {
 case sizeof(struct in_addr):
  VAR_11 = FUNC_4(VAR_5,
           VAR_13, VAR_7, VAR_8,
           VAR_10);
  break;







 default:
  VAR_11 = -VAR_0;
 }
 if (VAR_11 == 0) {
  FUNC_3(VAR_13);
  FUNC_0(&VAR_3);
 }

unlhsh_remove_return:
 FUNC_9();
 return VAR_11;
}
