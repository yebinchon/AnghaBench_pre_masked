
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct netlink_callback {int* args; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int,int ,int ,struct netlink_callback*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_8,
       struct netlink_callback *VAR_9)
{
 FUNC_1(&VAR_2);
 if ((VAR_7 & VAR_1) && !VAR_9->args[0]) {
  if (FUNC_0(VAR_8, VAR_1,
        VAR_5,
        VAR_6, VAR_9) < 0)
   goto nla_put_failure;

  VAR_9->args[0] = 1;
 }

 if ((VAR_7 & VAR_0) && !VAR_9->args[1]) {
  if (FUNC_0(VAR_8, VAR_0,
        VAR_3,
        VAR_4, VAR_9) < 0)
   goto nla_put_failure;

  VAR_9->args[1] = 1;
 }

nla_put_failure:
 FUNC_2(&VAR_2);

 return VAR_8->len;
}
