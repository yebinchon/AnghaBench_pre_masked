
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtmsg {int rtm_dst_len; int rtm_type; int * rta_oif; int * rta_prefsrc; int * rta_dst; int rtm_scope; int rtm_protocol; int rtm_table; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_type; int nlmsg_flags; scalar_t__ nlmsg_seq; scalar_t__ nlmsg_pid; } ;
struct dn_kern_rta {int rtm_dst_len; int rtm_type; int * rta_oif; int * rta_prefsrc; int * rta_dst; int rtm_scope; int rtm_protocol; int rtm_table; } ;
struct dn_ifaddr {TYPE_2__* ifa_dev; int ifa_local; } ;
struct dn_fib_table {int (* delete ) (struct dn_fib_table*,struct rtmsg*,struct rtmsg*,struct nlmsghdr*,int *) ;int (* insert ) (struct dn_fib_table*,struct rtmsg*,struct rtmsg*,struct nlmsghdr*,int *) ;int n; } ;
typedef int rta ;
typedef int req ;
typedef int __le16 ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct dn_fib_table* FUNC_0 (int ,int) ;
 int FUNC_1 (struct rtmsg*,int ,int) ;
 int FUNC_2 (struct dn_fib_table*,struct rtmsg*,struct rtmsg*,struct nlmsghdr*,int *) ;
 int FUNC_3 (struct dn_fib_table*,struct rtmsg*,struct rtmsg*,struct nlmsghdr*,int *) ;

__attribute__((used)) static void FUNC_4(int VAR_11, int VAR_12, __le16 VAR_13, int VAR_14, struct dn_ifaddr *VAR_15)
{
 struct dn_fib_table *VAR_16;
 struct {
  struct nlmsghdr nlh;
  struct rtmsg rtm;
 } VAR_17;
 struct dn_kern_rta VAR_18;

 FUNC_1(&VAR_17.rtm, 0, sizeof(VAR_17.rtm));
 FUNC_1(&VAR_18, 0, sizeof(VAR_18));

 if (VAR_12 == VAR_5)
  VAR_16 = FUNC_0(VAR_7, 1);
 else
  VAR_16 = FUNC_0(VAR_10, 1);

 if (VAR_16 == ((void*)0))
  return;

 VAR_17.nlh.nlmsg_len = sizeof(VAR_17);
 VAR_17.nlh.nlmsg_type = VAR_11;
 VAR_17.nlh.nlmsg_flags = VAR_2|VAR_1|VAR_0;
 VAR_17.nlh.nlmsg_pid = 0;
 VAR_17.nlh.nlmsg_seq = 0;

 VAR_17.rtm.rtm_dst_len = VAR_14;
 VAR_17.rtm.rtm_table = VAR_16->n;
 VAR_17.rtm.rtm_protocol = VAR_6;
 VAR_17.rtm.rtm_scope = (VAR_12 != VAR_4 ? VAR_9 : VAR_8);
 VAR_17.rtm.rtm_type = VAR_12;

 VAR_18.rta_dst = &VAR_13;
 VAR_18.rta_prefsrc = &VAR_15->ifa_local;
 VAR_18.rta_oif = &VAR_15->ifa_dev->dev->ifindex;

 if (VAR_11 == VAR_3)
  VAR_16->insert(VAR_16, &VAR_17.rtm, &VAR_18, &VAR_17.nlh, ((void*)0));
 else
  VAR_16->delete(VAR_16, &VAR_17.rtm, &VAR_18, &VAR_17.nlh, ((void*)0));
}
