
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int len; } ;
struct netlink_callback {int* args; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct netlink_callback*,int ) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_2,
     struct netlink_callback *VAR_3)
{
 u32 VAR_4 = VAR_3->args[0];

 if (VAR_4 == 0) {
  if (FUNC_0(VAR_2,
          VAR_3,
          VAR_1) < 0)
   goto protocols_return;
  VAR_4++;
 }
 if (VAR_4 == 1) {
  if (FUNC_0(VAR_2,
          VAR_3,
          VAR_0) < 0)
   goto protocols_return;
  VAR_4++;
 }

protocols_return:
 VAR_3->args[0] = VAR_4;
 return VAR_2->len;
}
