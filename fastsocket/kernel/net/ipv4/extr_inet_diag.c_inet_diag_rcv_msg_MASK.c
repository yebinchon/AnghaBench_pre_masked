
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct netlink_dump_control {int dump; } ;
struct inet_diag_req {int dummy; } ;
struct inet_diag_bc_op {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_5 ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_2 (int ,struct sk_buff*,struct nlmsghdr*,struct netlink_dump_control*) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 scalar_t__ FUNC_5 (struct nlmsghdr*,int) ;
 struct nlattr* FUNC_6 (struct nlmsghdr*,int,int ) ;
 int FUNC_7 (struct nlmsghdr*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_6, struct nlmsghdr *VAR_7)
{
 int VAR_8 = sizeof(struct inet_diag_req);

 if (VAR_7->nlmsg_type >= VAR_1 ||
     FUNC_7(VAR_7) < VAR_8)
  return -VAR_0;

 if (VAR_7->nlmsg_flags & VAR_3) {
  if (FUNC_5(VAR_7, VAR_8)) {
   struct nlattr *VAR_9;

   VAR_9 = FUNC_6(VAR_7, VAR_8,
            VAR_2);
   if (VAR_9 == ((void*)0) ||
       FUNC_4(VAR_9) < sizeof(struct inet_diag_bc_op) ||
       FUNC_0(FUNC_3(VAR_9), FUNC_4(VAR_9)))
    return -VAR_0;
  }
  {
   struct netlink_dump_control VAR_10 = {
    .dump = VAR_5,
   };
   return FUNC_2(VAR_4, VAR_6, VAR_7, &VAR_10);
  }
 }

 return FUNC_1(VAR_6, VAR_7);
}
