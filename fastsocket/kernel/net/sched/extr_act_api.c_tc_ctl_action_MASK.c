
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcamsg {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_type; int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;



 int VAR_3 ;
 size_t VAR_4 ;
 struct net VAR_5 ;
 int FUNC_2 (struct nlmsghdr*,int,struct nlattr**,int ,int *) ;
 int FUNC_3 (char*) ;
 struct net* FUNC_4 (int ) ;
 int FUNC_5 (struct nlattr*,struct nlmsghdr*,int ,int const) ;
 int FUNC_6 (struct nlattr*,struct nlmsghdr*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_6, struct nlmsghdr *VAR_7, void *VAR_8)
{
 struct net *VAR_9 = FUNC_4(VAR_6->sk);
 struct nlattr *VAR_10[VAR_3 + 1];
 u32 VAR_11 = VAR_6 ? FUNC_1(VAR_6).pid : 0;
 int VAR_12 = 0, VAR_13 = 0;

 if (VAR_9 != &VAR_5)
  return -VAR_1;

 VAR_12 = FUNC_2(VAR_7, sizeof(struct tcamsg), VAR_10, VAR_3, ((void*)0));
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_10[VAR_4] == ((void*)0)) {
  FUNC_3("tc_ctl_action: received NO action attribs\n");
  return -VAR_1;
 }



 switch (VAR_7->nlmsg_type) {
 case 128:






  if (VAR_7->nlmsg_flags&VAR_2)
   VAR_13 = 1;
replay:
  VAR_12 = FUNC_6(VAR_10[VAR_4], VAR_7, VAR_11, VAR_13);
  if (VAR_12 == -VAR_0)
   goto replay;
  break;
 case 130:
  VAR_12 = FUNC_5(VAR_10[VAR_4], VAR_7, VAR_11, 130);
  break;
 case 129:
  VAR_12 = FUNC_5(VAR_10[VAR_4], VAR_7, VAR_11, 129);
  break;
 default:
  FUNC_0();
 }

 return VAR_12;
}
