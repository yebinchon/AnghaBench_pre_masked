
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlbl_unlhsh_iface {int dummy; } ;
struct netlbl_audit {int dummy; } ;
struct net_device {int ifindex; } ;
struct net {int dummy; } ;
struct in_addr {int s_addr; } ;
struct in6_addr {int dummy; } ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct audit_buffer*) ;
 int FUNC_2 (struct audit_buffer*,char*,...) ;
 struct net_device* FUNC_3 (struct net*,char const*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_5 (struct audit_buffer*,int,char const*,int ,int ) ;
 int FUNC_6 (struct audit_buffer*,int,char const*,struct in6_addr*,struct in6_addr*) ;
 struct audit_buffer* FUNC_7 (int ,struct netlbl_audit*) ;
 int FUNC_8 (struct netlbl_unlhsh_iface*,struct in_addr*,struct in_addr*,int) ;
 int FUNC_9 (struct netlbl_unlhsh_iface*,struct in6_addr*,struct in6_addr*,int) ;
 struct netlbl_unlhsh_iface* FUNC_10 (int) ;
 int VAR_5 ;
 struct netlbl_unlhsh_iface* FUNC_11 (int) ;
 struct netlbl_unlhsh_iface* FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (char*,int) ;
 scalar_t__ FUNC_16 (int,char**,int*) ;

int FUNC_17(struct net *VAR_6,
        const char *VAR_7,
        const void *VAR_8,
        const void *VAR_9,
        u32 VAR_10,
        u32 VAR_11,
        struct netlbl_audit *VAR_12)
{
 int VAR_13;
 int VAR_14;
 struct net_device *VAR_15;
 struct netlbl_unlhsh_iface *VAR_16;
 struct audit_buffer *VAR_17 = ((void*)0);
 char *VAR_18 = ((void*)0);
 u32 VAR_19;

 if (VAR_10 != sizeof(struct in_addr) &&
     VAR_10 != sizeof(struct in6_addr))
  return -VAR_1;

 FUNC_13();
 if (VAR_7 != ((void*)0)) {
  VAR_15 = FUNC_3(VAR_6, VAR_7);
  if (VAR_15 == ((void*)0)) {
   VAR_13 = -VAR_2;
   goto unlhsh_add_return;
  }
  VAR_14 = VAR_15->ifindex;
  FUNC_4(VAR_15);
  VAR_16 = FUNC_11(VAR_14);
 } else {
  VAR_14 = 0;
  VAR_16 = FUNC_12(VAR_5);
 }
 if (VAR_16 == ((void*)0)) {
  VAR_16 = FUNC_10(VAR_14);
  if (VAR_16 == ((void*)0)) {
   VAR_13 = -VAR_3;
   goto unlhsh_add_return;
  }
 }
 VAR_17 = FUNC_7(VAR_0,
           VAR_12);
 switch (VAR_10) {
 case sizeof(struct in_addr): {
  struct in_addr *VAR_20, *VAR_21;

  VAR_20 = (struct in_addr *)VAR_8;
  VAR_21 = (struct in_addr *)VAR_9;
  VAR_13 = FUNC_8(VAR_16, VAR_20, VAR_21, VAR_11);
  if (VAR_17 != ((void*)0))
   FUNC_5(VAR_17, 1,
        VAR_7,
        VAR_20->s_addr,
        VAR_21->s_addr);
  break;
 }
 default:
  VAR_13 = -VAR_1;
 }
 if (VAR_13 == 0)
  FUNC_0(&VAR_4);

unlhsh_add_return:
 FUNC_14();
 if (VAR_17 != ((void*)0)) {
  if (FUNC_16(VAR_11,
          &VAR_18,
          &VAR_19) == 0) {
   FUNC_2(VAR_17, " sec_obj=%s", VAR_18);
   FUNC_15(VAR_18, VAR_19);
  }
  FUNC_2(VAR_17, " res=%u", VAR_13 == 0 ? 1 : 0);
  FUNC_1(VAR_17);
 }
 return VAR_13;
}
