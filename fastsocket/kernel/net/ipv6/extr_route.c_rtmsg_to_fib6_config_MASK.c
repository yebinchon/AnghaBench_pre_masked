
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct in6_rtmsg {int rtmsg_gateway; int rtmsg_src; int rtmsg_dst; int rtmsg_flags; int rtmsg_src_len; int rtmsg_dst_len; int rtmsg_info; int rtmsg_metric; int rtmsg_ifindex; } ;
struct TYPE_2__ {struct net* nl_net; } ;
struct fib6_config {int fc_gateway; int fc_src; int fc_dst; TYPE_1__ fc_nlinfo; int fc_flags; int fc_src_len; int fc_dst_len; int fc_expires; int fc_metric; int fc_ifindex; int fc_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct fib6_config*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net *VAR_1,
     struct in6_rtmsg *VAR_2,
     struct fib6_config *VAR_3)
{
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->fc_table = VAR_0;
 VAR_3->fc_ifindex = VAR_2->rtmsg_ifindex;
 VAR_3->fc_metric = VAR_2->rtmsg_metric;
 VAR_3->fc_expires = VAR_2->rtmsg_info;
 VAR_3->fc_dst_len = VAR_2->rtmsg_dst_len;
 VAR_3->fc_src_len = VAR_2->rtmsg_src_len;
 VAR_3->fc_flags = VAR_2->rtmsg_flags;

 VAR_3->fc_nlinfo.nl_net = VAR_1;

 FUNC_0(&VAR_3->fc_dst, &VAR_2->rtmsg_dst);
 FUNC_0(&VAR_3->fc_src, &VAR_2->rtmsg_src);
 FUNC_0(&VAR_3->fc_gateway, &VAR_2->rtmsg_gateway);
}
