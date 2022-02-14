
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct sk_buff *VAR_3)
{
 struct nlmsghdr *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->nlmsg_len < sizeof(*VAR_4) || VAR_3->len < VAR_4->nlmsg_len)
  return;

 if (FUNC_2(VAR_3, VAR_0))
  FUNC_0(-VAR_2);



 FUNC_0(-VAR_1);
}
