
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct genl_info {TYPE_1__* genlhdr; } ;
struct TYPE_2__ {int cmd; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_3,
   struct genl_info *VAR_4)
{
 switch (VAR_4->genlhdr->cmd) {
 case 129:
  return FUNC_0(VAR_2);
  break;
 case 128:
  return FUNC_0(VAR_1);
  break;
 }

 return -VAR_0;
}
