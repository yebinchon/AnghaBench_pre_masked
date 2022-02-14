
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct genl_multicast_group {struct genl_family* family; } ;
struct genl_family {int netnsok; } ;
struct TYPE_3__ {int genl_sock; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct genl_family*,int ,int ,int) ;
 struct sk_buff* FUNC_3 (void*,int ,int ,int) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,struct sk_buff*,int ,int ,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(int VAR_5, void *VAR_6)
{
 struct sk_buff *VAR_7;
 struct genl_family *VAR_8;
 struct genl_multicast_group *VAR_9;


 if (!VAR_4.genl_sock)
  return 0;

 switch (VAR_5) {
 case 129:
 case 131:
  VAR_8 = VAR_6;
  VAR_7 = FUNC_2(VAR_8, 0, 0, VAR_5);
  break;
 case 128:
 case 130:
  VAR_9 = VAR_6;
  VAR_8 = VAR_9->family;
  VAR_7 = FUNC_3(VAR_6, 0, 0, VAR_5);
  break;
 default:
  return -VAR_0;
 }

 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 if (!VAR_8->netnsok) {
  FUNC_5(&VAR_4, VAR_7, 0,
     VAR_1, VAR_3);
 } else {
  FUNC_6();
  FUNC_4(VAR_7, 0, VAR_1, VAR_2);
  FUNC_7();
 }

 return 0;
}
