
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int8_t ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; int nlmsg_type; } ;
struct nlattr {int dummy; } ;
struct nfnl_callback {int (* call ) (int ,struct sk_buff*,struct nlmsghdr*,struct nlattr const**) ;} ;
struct nfnetlink_subsystem {TYPE_1__* cb; } ;
struct nfgenmsg {int dummy; } ;
struct TYPE_2__ {int policy; int attr_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct nfnl_callback* FUNC_4 (int,struct nfnetlink_subsystem const*) ;
 struct nfnetlink_subsystem* FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct nlattr**,int ,struct nlattr*,int,int ) ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (int ,struct sk_buff*,struct nlmsghdr*,struct nlattr const**) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_5, struct nlmsghdr *VAR_6)
{
 const struct nfnl_callback *VAR_7;
 const struct nfnetlink_subsystem *VAR_8;
 int VAR_9, VAR_10;

 if (FUNC_10(VAR_5, VAR_0))
  return -VAR_3;


 if (VAR_6->nlmsg_len < FUNC_2(sizeof(struct nfgenmsg)))
  return 0;

 VAR_9 = VAR_6->nlmsg_type;
replay:
 VAR_8 = FUNC_5(VAR_9);
 if (!VAR_8) {







   return -VAR_2;
 }

 VAR_7 = FUNC_4(VAR_9, VAR_8);
 if (!VAR_7)
  return -VAR_2;

 {
  int VAR_11 = FUNC_3(sizeof(struct nfgenmsg));
  u_int8_t VAR_12 = FUNC_0(VAR_6->nlmsg_type);
  struct nlattr *VAR_13[VAR_8->cb[VAR_12].attr_count + 1];
  struct nlattr *VAR_14 = (void *)VAR_6 + VAR_11;
  int VAR_15 = VAR_6->nlmsg_len - VAR_11;

  VAR_10 = FUNC_8(VAR_13, VAR_8->cb[VAR_12].attr_count,
    VAR_14, VAR_15, VAR_8->cb[VAR_12].policy);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_10 = VAR_7->call(VAR_4, VAR_5, VAR_6, (const struct nlattr **)VAR_13);
  if (VAR_10 == -VAR_1)
   goto replay;
  return VAR_10;
 }
}
