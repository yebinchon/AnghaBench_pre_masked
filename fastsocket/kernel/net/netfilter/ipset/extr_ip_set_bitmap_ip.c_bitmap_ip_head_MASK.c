
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ip_set {scalar_t__ ref; struct bitmap_ip* data; } ;
struct bitmap_ip {int netmask; scalar_t__ timeout; scalar_t__ memsize; scalar_t__ last_ip; scalar_t__ first_ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7(struct ip_set *VAR_8, struct sk_buff *VAR_9)
{
 const struct bitmap_ip *VAR_10 = VAR_8->data;
 struct nlattr *VAR_11;

 VAR_11 = FUNC_5(VAR_9, VAR_1);
 if (!VAR_11)
  goto nla_put_failure;
 FUNC_0(VAR_9, VAR_2, FUNC_3(VAR_10->first_ip));
 FUNC_0(VAR_9, VAR_3, FUNC_3(VAR_10->last_ip));
 if (VAR_10->netmask != 32)
  FUNC_2(VAR_9, VAR_5, VAR_10->netmask);
 FUNC_1(VAR_9, VAR_6, FUNC_3(VAR_8->ref - 1));
 FUNC_1(VAR_9, VAR_4,
        FUNC_3(sizeof(*VAR_10) + VAR_10->memsize));
 if (FUNC_6(VAR_10->timeout))
  FUNC_1(VAR_9, VAR_7, FUNC_3(VAR_10->timeout));
 FUNC_4(VAR_9, VAR_11);

 return 0;
nla_put_failure:
 return -VAR_0;
}
