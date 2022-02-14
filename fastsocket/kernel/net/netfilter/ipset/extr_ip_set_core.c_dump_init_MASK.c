
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {int dummy; } ;
struct netlink_callback {scalar_t__* args; int skb; } ;
typedef scalar_t__ ip_set_id_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,scalar_t__,int ) ;
 struct nlmsghdr* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct netlink_callback *VAR_7)
{
 struct nlmsghdr *VAR_8 = FUNC_4(VAR_7->skb);
 int VAR_9 = FUNC_0(sizeof(struct nfgenmsg));
 struct nlattr *VAR_10[VAR_3+1];
 struct nlattr *VAR_11 = (void *)VAR_8 + VAR_9;
 ip_set_id_t VAR_12;


 FUNC_3(VAR_10, VAR_3,
    VAR_11, VAR_8->nlmsg_len - VAR_9, VAR_6);






 if (!VAR_10[VAR_4]) {
  VAR_7->args[0] = VAR_0;
  return 0;
 }

 VAR_12 = FUNC_1(FUNC_2(VAR_10[VAR_4]));
 if (VAR_12 == VAR_5)
  return -VAR_2;

 VAR_7->args[0] = VAR_1;
 VAR_7->args[1] = VAR_12;
 return 0;
}
