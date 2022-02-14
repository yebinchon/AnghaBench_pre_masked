
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link {int dummy; } ;
struct nl_sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nl_sock*,int ) ;
 int FUNC_1 (int) ;
 struct nl_sock* FUNC_2 () ;
 int FUNC_3 (struct nl_sock*) ;
 int FUNC_4 (struct nl_sock*,struct rtnl_link*) ;
 int FUNC_5 (struct nl_sock*,int ,char const*,struct rtnl_link**) ;
 int FUNC_6 (struct rtnl_link*) ;
 int FUNC_7 (int ,char*,...) ;

int FUNC_8(const char *VAR_3)
{
 int VAR_4, VAR_5 = -1;
 struct nl_sock *VAR_6 = ((void*)0);
 struct rtnl_link *VAR_7 = ((void*)0);

 FUNC_7(VAR_0, "VLAN: vlan_rem(if_name=%s)", VAR_3);

 VAR_6 = FUNC_2();
 if (!VAR_6) {
  FUNC_7(VAR_1, "VLAN: failed to open netlink socket");
  goto vlan_rem_error;
 }

 VAR_4 = FUNC_0(VAR_6, VAR_2);
 if (VAR_4 < 0) {
  FUNC_7(VAR_1, "VLAN: failed to connect to netlink: %s",
      FUNC_1(VAR_4));
  goto vlan_rem_error;
 }

 VAR_4 = FUNC_5(VAR_6, 0, VAR_3, &VAR_7);
 if (VAR_4 < 0) {

  FUNC_7(VAR_1, "VLAN: interface %s does not exists",
      VAR_3);
  goto vlan_rem_error;
 }

 VAR_4 = FUNC_4(VAR_6, VAR_7);
 if (VAR_4 < 0) {
  FUNC_7(VAR_1, "VLAN: failed to remove link %s: %s",
      VAR_3, FUNC_1(VAR_4));
  goto vlan_rem_error;
 }

 VAR_5 = 0;

vlan_rem_error:
 if (VAR_7)
  FUNC_6(VAR_7);
 if (VAR_6)
  FUNC_3(VAR_6);
 return VAR_5;
}
