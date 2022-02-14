
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {void* mark; void* priority; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int tun_key; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nlattr const*) ;
 void* FUNC_2 (struct nlattr const*) ;
 int FUNC_3 (struct nlattr const*) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_0,
     const struct nlattr *VAR_1)
{
 int VAR_2 = 0;

 switch (FUNC_3(VAR_1)) {
 case 131:
  VAR_0->priority = FUNC_2(VAR_1);
  break;

 case 130:
  VAR_0->mark = FUNC_2(VAR_1);
  break;

 case 133:
  FUNC_0(VAR_0)->tun_key = FUNC_1(VAR_1);
  break;

 case 135:
  VAR_2 = FUNC_4(VAR_0, FUNC_1(VAR_1));
  break;

 case 134:
  VAR_2 = FUNC_5(VAR_0, FUNC_1(VAR_1));
  break;

 case 132:
  VAR_2 = FUNC_6(VAR_0, FUNC_1(VAR_1));
  break;

 case 129:
  VAR_2 = FUNC_7(VAR_0, FUNC_1(VAR_1));
  break;

 case 128:
  VAR_2 = FUNC_8(VAR_0, FUNC_1(VAR_1));
  break;
 }

 return VAR_2;
}
