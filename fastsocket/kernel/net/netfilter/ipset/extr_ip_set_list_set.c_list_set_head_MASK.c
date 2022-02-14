
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct list_set {int size; int timeout; int dsize; } ;
struct ip_set {int ref; struct list_set* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct ip_set *VAR_6, struct sk_buff *VAR_7)
{
 const struct list_set *VAR_8 = VAR_6->data;
 struct nlattr *VAR_9;

 VAR_9 = FUNC_3(VAR_7, VAR_1);
 if (!VAR_9)
  goto nla_put_failure;
 FUNC_0(VAR_7, VAR_4, FUNC_1(VAR_8->size));
 if (FUNC_4(VAR_8->timeout))
  FUNC_0(VAR_7, VAR_5, FUNC_1(VAR_8->timeout));
 FUNC_0(VAR_7, VAR_3, FUNC_1(VAR_6->ref - 1));
 FUNC_0(VAR_7, VAR_2,
        FUNC_1(sizeof(*VAR_8) + VAR_8->size * VAR_8->dsize));
 FUNC_2(VAR_7, VAR_9);

 return 0;
nla_put_failure:
 return -VAR_0;
}
