
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ip_set {int ref; struct bitmap_ipmac* data; } ;
struct bitmap_ipmac {int first_ip; int last_ip; int dsize; int timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct ip_set *VAR_7, struct sk_buff *VAR_8)
{
 const struct bitmap_ipmac *VAR_9 = VAR_7->data;
 struct nlattr *VAR_10;

 VAR_10 = FUNC_4(VAR_8, VAR_1);
 if (!VAR_10)
  goto nla_put_failure;
 FUNC_0(VAR_8, VAR_2, FUNC_2(VAR_9->first_ip));
 FUNC_0(VAR_8, VAR_3, FUNC_2(VAR_9->last_ip));
 FUNC_1(VAR_8, VAR_5, FUNC_2(VAR_7->ref - 1));
 FUNC_1(VAR_8, VAR_4,
        FUNC_2(sizeof(*VAR_9)
       + (VAR_9->last_ip - VAR_9->first_ip + 1) * VAR_9->dsize));
 if (FUNC_5(VAR_9->timeout))
  FUNC_1(VAR_8, VAR_6, FUNC_2(VAR_9->timeout));
 FUNC_3(VAR_8, VAR_10);

 return 0;
nla_put_failure:
 return -VAR_0;
}
