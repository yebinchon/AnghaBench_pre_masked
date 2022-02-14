
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link {int dummy; } ;
struct nl_sock {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nl_sock*,int ) ;
 int FUNC_1 (int) ;
 struct nl_sock* FUNC_2 () ;
 int FUNC_3 (struct nl_sock*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (struct nl_sock*,struct rtnl_link*,int ) ;
 struct rtnl_link* FUNC_6 () ;
 int FUNC_7 (struct rtnl_link*) ;
 int FUNC_8 (struct nl_sock*,int ,char const*,struct rtnl_link**) ;
 int FUNC_9 (struct rtnl_link*) ;
 int FUNC_10 (struct rtnl_link*,int) ;
 int FUNC_11 (struct rtnl_link*,char const*) ;
 int FUNC_12 (struct rtnl_link*,char*) ;
 int FUNC_13 (struct rtnl_link*,int) ;
 int FUNC_14 (int ,char*,...) ;

int FUNC_15(const char *VAR_5, int VAR_6, const char *VAR_7)
{
 int VAR_8, VAR_9 = -1;
 struct nl_sock *VAR_10 = ((void*)0);
 struct rtnl_link *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 FUNC_14(VAR_1, "VLAN: vlan_add(if_name=%s, vid=%d, "
     "vlan_if_name=%s)", VAR_5, VAR_6, VAR_7);

 if ((FUNC_4(VAR_5) + 1) > VAR_0) {
  FUNC_14(VAR_2, "VLAN: Interface name too long: '%s'",
      VAR_5);
  return -1;
 }

 if ((FUNC_4(VAR_7) + 1) > VAR_0) {
  FUNC_14(VAR_2, "VLAN: Interface name too long: '%s'",
      VAR_7);
  return -1;
 }

 VAR_10 = FUNC_2();
 if (!VAR_10) {
  FUNC_14(VAR_2, "VLAN: failed to open netlink socket");
  goto vlan_add_error;
 }

 VAR_8 = FUNC_0(VAR_10, VAR_3);
 if (VAR_8 < 0) {
  FUNC_14(VAR_2, "VLAN: failed to connect to netlink: %s",
      FUNC_1(VAR_8));
  goto vlan_add_error;
 }

 VAR_8 = FUNC_8(VAR_10, 0, VAR_5, &VAR_11);
 if (VAR_8 < 0) {

  FUNC_14(VAR_2, "VLAN: interface %s does not exist",
      VAR_5);
  goto vlan_add_error;
 }
 VAR_12 = FUNC_7(VAR_11);
 FUNC_9(VAR_11);
 VAR_11 = ((void*)0);

 VAR_8 = FUNC_8(VAR_10, 0, VAR_7, &VAR_11);
 if (VAR_8 >= 0) {

  FUNC_9(VAR_11);
  VAR_11 = ((void*)0);
  FUNC_14(VAR_2, "VLAN: interface %s already exists",
      VAR_7);
  VAR_9 = 1;
  goto vlan_add_error;
 }

 VAR_11 = FUNC_6();
 if (!VAR_11) {
  FUNC_14(VAR_2, "VLAN: failed to allocate new link");
  goto vlan_add_error;
 }

 VAR_8 = FUNC_12(VAR_11, "vlan");
 if (VAR_8 < 0) {
  FUNC_14(VAR_2, "VLAN: failed to set link type: %s",
      FUNC_1(VAR_8));
  goto vlan_add_error;
 }

 FUNC_10(VAR_11, VAR_12);
 FUNC_11(VAR_11, VAR_7);

 VAR_8 = FUNC_13(VAR_11, VAR_6);
 if (VAR_8 < 0) {
  FUNC_14(VAR_2, "VLAN: failed to set link vlan id: %s",
      FUNC_1(VAR_8));
  goto vlan_add_error;
 }

 VAR_8 = FUNC_5(VAR_10, VAR_11, VAR_4);
 if (VAR_8 < 0) {
  FUNC_14(VAR_2, "VLAN: failed to create link %s for "
      "vlan %d on %s (%d): %s",
      VAR_7, VAR_6, VAR_5, VAR_12,
      FUNC_1(VAR_8));
  goto vlan_add_error;
 }

 VAR_9 = 0;

vlan_add_error:
 if (VAR_11)
  FUNC_9(VAR_11);
 if (VAR_10)
  FUNC_3(VAR_10);
 return VAR_9;
}
