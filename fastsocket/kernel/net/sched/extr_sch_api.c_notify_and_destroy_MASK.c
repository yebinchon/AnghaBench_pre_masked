
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*,int ,struct Qdisc*,struct Qdisc*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0, struct nlmsghdr *VAR_1, u32 VAR_2,
          struct Qdisc *VAR_3, struct Qdisc *VAR_4)
{
 if (VAR_4 || VAR_3)
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 if (VAR_3)
  FUNC_0(VAR_3);
}
