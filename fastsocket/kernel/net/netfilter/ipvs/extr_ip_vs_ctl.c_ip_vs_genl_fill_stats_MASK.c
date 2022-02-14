
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int outbps; int inbps; int outpps; int inpps; int cps; int outbytes; int inbytes; int outpkts; int inpkts; int conns; } ;
struct ip_vs_stats {int lock; TYPE_1__ ustats; } ;


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
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_11, int VAR_12,
     struct ip_vs_stats *VAR_13)
{
 struct nlattr *VAR_14 = FUNC_4(VAR_11, VAR_12);
 if (!VAR_14)
  return -VAR_0;

 FUNC_5(&VAR_13->lock);

 FUNC_0(VAR_11, VAR_1, VAR_13->ustats.conns);
 FUNC_0(VAR_11, VAR_5, VAR_13->ustats.inpkts);
 FUNC_0(VAR_11, VAR_9, VAR_13->ustats.outpkts);
 FUNC_1(VAR_11, VAR_4, VAR_13->ustats.inbytes);
 FUNC_1(VAR_11, VAR_8, VAR_13->ustats.outbytes);
 FUNC_0(VAR_11, VAR_2, VAR_13->ustats.cps);
 FUNC_0(VAR_11, VAR_6, VAR_13->ustats.inpps);
 FUNC_0(VAR_11, VAR_10, VAR_13->ustats.outpps);
 FUNC_0(VAR_11, VAR_3, VAR_13->ustats.inbps);
 FUNC_0(VAR_11, VAR_7, VAR_13->ustats.outbps);

 FUNC_6(&VAR_13->lock);

 FUNC_3(VAR_11, VAR_14);

 return 0;

nla_put_failure:
 FUNC_6(&VAR_13->lock);
 FUNC_2(VAR_11, VAR_14);
 return -VAR_0;
}
