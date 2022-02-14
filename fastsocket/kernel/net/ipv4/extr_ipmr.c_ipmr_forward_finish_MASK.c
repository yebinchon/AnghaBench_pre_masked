
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ip_options {int optlen; } ;
struct TYPE_4__ {struct ip_options opt; } ;
struct TYPE_3__ {int dev; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static inline int FUNC_7(struct sk_buff *VAR_1)
{
 struct ip_options * VAR_2 = &(FUNC_0(VAR_1)->opt);

 FUNC_1(FUNC_2(FUNC_5(VAR_1)->dev), VAR_0);

 if (FUNC_6(VAR_2->optlen))
  FUNC_4(VAR_1);

 return FUNC_3(VAR_1);
}
