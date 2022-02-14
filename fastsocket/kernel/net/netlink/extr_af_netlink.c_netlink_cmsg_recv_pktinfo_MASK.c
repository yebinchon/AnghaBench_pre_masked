
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nl_pktinfo {int group; } ;
struct msghdr {int dummy; } ;
typedef int info ;
struct TYPE_2__ {int dst_group; } ;


 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct msghdr*,int ,int ,int,struct nl_pktinfo*) ;

__attribute__((used)) static void FUNC_2(struct msghdr *VAR_2, struct sk_buff *VAR_3)
{
 struct nl_pktinfo VAR_4;

 VAR_4.group = FUNC_0(VAR_3).dst_group;
 FUNC_1(VAR_2, VAR_1, VAR_0, sizeof(VAR_4), &VAR_4);
}
