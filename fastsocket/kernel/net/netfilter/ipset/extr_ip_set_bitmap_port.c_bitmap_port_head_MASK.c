
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ip_set {scalar_t__ ref; struct bitmap_port* data; } ;
struct bitmap_port {scalar_t__ timeout; scalar_t__ memsize; int last_port; int first_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7(struct ip_set *VAR_7, struct sk_buff *VAR_8)
{
 const struct bitmap_port *VAR_9 = VAR_7->data;
 struct nlattr *VAR_10;

 VAR_10 = FUNC_5(VAR_8, VAR_1);
 if (!VAR_10)
  goto nla_put_failure;
 FUNC_0(VAR_8, VAR_3, FUNC_3(VAR_9->first_port));
 FUNC_0(VAR_8, VAR_4, FUNC_3(VAR_9->last_port));
 FUNC_1(VAR_8, VAR_5, FUNC_2(VAR_7->ref - 1));
 FUNC_1(VAR_8, VAR_2,
        FUNC_2(sizeof(*VAR_9) + VAR_9->memsize));
 if (FUNC_6(VAR_9->timeout))
  FUNC_1(VAR_8, VAR_6, FUNC_2(VAR_9->timeout));
 FUNC_4(VAR_8, VAR_10);

 return 0;
nla_put_failure:
 return -VAR_0;
}
