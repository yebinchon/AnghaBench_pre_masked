
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rtmsg {int rtm_flags; } ;
struct rt6_rtnl_dump_arg {TYPE_1__* cb; int skb; int net; } ;
struct rt6_info {int dummy; } ;
struct TYPE_7__ {int pid; } ;
struct TYPE_6__ {int nlmsg_seq; } ;
struct TYPE_5__ {TYPE_2__* nlh; int skb; } ;


 TYPE_4__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtmsg* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,struct rt6_info*,int *,int *,int ,int ,int ,int ,int,int ,int ) ;

int FUNC_4(struct rt6_info *VAR_3, void *VAR_4)
{
 struct rt6_rtnl_dump_arg *VAR_5 = (struct rt6_rtnl_dump_arg *) VAR_4;
 int VAR_6;

 if (FUNC_2(VAR_5->cb->nlh) >= sizeof(struct rtmsg)) {
  struct rtmsg *VAR_7 = FUNC_1(VAR_5->cb->nlh);
  VAR_6 = (VAR_7->rtm_flags & VAR_1) != 0;
 } else
  VAR_6 = 0;

 return FUNC_3(VAR_5->net,
       VAR_5->skb, VAR_3, ((void*)0), ((void*)0), 0, VAR_2,
       FUNC_0(VAR_5->cb->skb).pid, VAR_5->cb->nlh->nlmsg_seq,
       VAR_6, 0, VAR_0);
}
