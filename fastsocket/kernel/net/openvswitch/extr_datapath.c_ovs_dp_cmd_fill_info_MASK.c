
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ovs_header {int dp_ifindex; } ;
struct ovs_dp_stats {int dummy; } ;
struct datapath {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct ovs_header*) ;
 int FUNC_1 (struct sk_buff*,struct ovs_header*) ;
 struct ovs_header* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_3 (struct datapath*,struct ovs_dp_stats*) ;
 int FUNC_4 (struct datapath*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int,struct ovs_dp_stats*) ;
 int FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct datapath*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct datapath *VAR_4, struct sk_buff *VAR_5,
    u32 VAR_6, u32 VAR_7, u32 VAR_8, u8 VAR_9)
{
 struct ovs_header *VAR_10;
 struct ovs_dp_stats VAR_11;
 int VAR_12;

 VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_7, &VAR_3,
       VAR_8, VAR_9);
 if (!VAR_10)
  goto error;

 VAR_10->dp_ifindex = FUNC_4(VAR_4);

 FUNC_8();
 VAR_12 = FUNC_6(VAR_5, VAR_1, FUNC_7(VAR_4));
 FUNC_9();
 if (VAR_12)
  goto nla_put_failure;

 FUNC_3(VAR_4, &VAR_11);
 if (FUNC_5(VAR_5, VAR_2, sizeof(struct ovs_dp_stats), &VAR_11))
  goto nla_put_failure;

 return FUNC_1(VAR_5, VAR_10);

nla_put_failure:
 FUNC_0(VAR_5, VAR_10);
error:
 return -VAR_0;
}
