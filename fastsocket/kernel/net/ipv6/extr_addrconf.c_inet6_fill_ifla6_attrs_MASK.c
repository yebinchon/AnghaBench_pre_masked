
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int s6_addr; } ;
struct inet6_dev {int lock; TYPE_2__ token; int cnf; TYPE_1__* nd_parms; int tstamp; int if_flags; } ;
struct in6_addr {int dummy; } ;
struct ifla_cacheinfo {int retrans_time; int reachable_time; scalar_t__ tstamp; int max_reasm_len; } ;
typedef int s32 ;
typedef int ci ;
typedef scalar_t__ __u32 ;
struct TYPE_3__ {int retrans_time; int reachable_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct ifla_cacheinfo*) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr*) ;
 struct nlattr* FUNC_7 (struct sk_buff*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,struct inet6_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_13, struct inet6_dev *VAR_14)
{
 struct nlattr *VAR_15;
 struct ifla_cacheinfo VAR_16;

 FUNC_1(VAR_13, VAR_6, VAR_14->if_flags);

 VAR_16.max_reasm_len = VAR_12;
 VAR_16.tstamp = (__u32)(FUNC_2(VAR_14->tstamp, VAR_10) / VAR_2 * 100
      + FUNC_2(VAR_14->tstamp, VAR_10) % VAR_2 * 100 / VAR_2);
 VAR_16.reachable_time = VAR_14->nd_parms->reachable_time;
 VAR_16.retrans_time = VAR_14->nd_parms->retrans_time;
 FUNC_0(VAR_13, VAR_4, sizeof(VAR_16), &VAR_16);

 VAR_15 = FUNC_7(VAR_13, VAR_5, VAR_0 * sizeof(s32));
 if (VAR_15 == ((void*)0))
  goto nla_put_failure;
 FUNC_3(&VAR_14->cnf, FUNC_5(VAR_15), FUNC_6(VAR_15));



 VAR_15 = FUNC_7(VAR_13, VAR_8, VAR_11 * sizeof(u64));
 if (VAR_15 == ((void*)0))
  goto nla_put_failure;
 FUNC_10(FUNC_5(VAR_15), VAR_14, VAR_8, FUNC_6(VAR_15));

 VAR_15 = FUNC_7(VAR_13, VAR_7, VAR_3 * sizeof(u64));
 if (VAR_15 == ((void*)0))
  goto nla_put_failure;
 FUNC_10(FUNC_5(VAR_15), VAR_14, VAR_7, FUNC_6(VAR_15));

 VAR_15 = FUNC_7(VAR_13, VAR_9, sizeof(struct in6_addr));
 if (VAR_15 == ((void*)0))
  goto nla_put_failure;
 FUNC_8(&VAR_14->lock);
 FUNC_4(FUNC_5(VAR_15), VAR_14->token.s6_addr, FUNC_6(VAR_15));
 FUNC_9(&VAR_14->lock);

 return 0;

nla_put_failure:
 return -VAR_1;
}
