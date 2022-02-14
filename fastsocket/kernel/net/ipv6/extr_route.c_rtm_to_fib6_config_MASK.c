
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct rtmsg {int rtm_dst_len; int rtm_src_len; scalar_t__ rtm_type; int rtm_protocol; void* rtm_table; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_3__ {int nl_net; struct nlmsghdr* nlh; int pid; } ;
struct fib6_config {int fc_dst_len; int fc_src_len; int fc_mx_len; void* fc_table; int fc_mx; void* fc_metric; void* fc_ifindex; int fc_prefsrc; int fc_src; int fc_dst; int fc_flags; int fc_gateway; TYPE_1__ fc_nlinfo; int fc_protocol; } ;
struct TYPE_4__ {int pid; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (struct sk_buff*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (struct fib6_config*,int ,int) ;
 int FUNC_2 (struct nlattr*) ;
 void* FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (int *,struct nlattr*,int) ;
 struct rtmsg* FUNC_6 (struct nlmsghdr*) ;
 int FUNC_7 (struct nlmsghdr*,int,struct nlattr**,int ,int ) ;
 int VAR_16 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_17, struct nlmsghdr *VAR_18,
         struct fib6_config *VAR_19)
{
 struct rtmsg *VAR_20;
 struct nlattr *VAR_21[VAR_3+1];
 int VAR_22;

 VAR_22 = FUNC_7(VAR_18, sizeof(*VAR_20), VAR_21, VAR_3, VAR_16);
 if (VAR_22 < 0)
  goto errout;

 VAR_22 = -VAR_0;
 VAR_20 = FUNC_6(VAR_18);
 FUNC_1(VAR_19, 0, sizeof(*VAR_19));

 VAR_19->fc_table = VAR_20->rtm_table;
 VAR_19->fc_dst_len = VAR_20->rtm_dst_len;
 VAR_19->fc_src_len = VAR_20->rtm_src_len;
 VAR_19->fc_flags = VAR_13;
 VAR_19->fc_protocol = VAR_20->rtm_protocol;

 if (VAR_20->rtm_type == VAR_15)
  VAR_19->fc_flags |= VAR_12;

 if (VAR_20->rtm_type == VAR_14)
  VAR_19->fc_flags |= VAR_11;

 VAR_19->fc_nlinfo.pid = FUNC_0(VAR_17).pid;
 VAR_19->fc_nlinfo.nlh = VAR_18;
 VAR_19->fc_nlinfo.nl_net = FUNC_8(VAR_17->sk);

 if (VAR_21[VAR_2]) {
  FUNC_5(&VAR_19->fc_gateway, VAR_21[VAR_2], 16);
  VAR_19->fc_flags |= VAR_10;
 }

 if (VAR_21[VAR_1]) {
  int VAR_23 = (VAR_20->rtm_dst_len + 7) >> 3;

  if (FUNC_4(VAR_21[VAR_1]) < VAR_23)
   goto errout;

  FUNC_5(&VAR_19->fc_dst, VAR_21[VAR_1], VAR_23);
 }

 if (VAR_21[VAR_8]) {
  int VAR_24 = (VAR_20->rtm_src_len + 7) >> 3;

  if (FUNC_4(VAR_21[VAR_8]) < VAR_24)
   goto errout;

  FUNC_5(&VAR_19->fc_src, VAR_21[VAR_8], VAR_24);
 }

 if (VAR_21[VAR_6])
  FUNC_5(&VAR_19->fc_prefsrc, VAR_21[VAR_6], 16);

 if (VAR_21[VAR_5])
  VAR_19->fc_ifindex = FUNC_3(VAR_21[VAR_5]);

 if (VAR_21[VAR_7])
  VAR_19->fc_metric = FUNC_3(VAR_21[VAR_7]);

 if (VAR_21[VAR_4]) {
  VAR_19->fc_mx = FUNC_2(VAR_21[VAR_4]);
  VAR_19->fc_mx_len = FUNC_4(VAR_21[VAR_4]);
 }

 if (VAR_21[VAR_9])
  VAR_19->fc_table = FUNC_3(VAR_21[VAR_9]);

 VAR_22 = 0;
errout:
 return VAR_22;
}
