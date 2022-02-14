
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_6__ {int disable_ipv6; } ;
struct inet6_dev {TYPE_1__ cnf; } ;
struct TYPE_8__ {scalar_t__ frag_max_size; } ;
struct TYPE_7__ {int dev; } ;


 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct inet6_dev*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 struct inet6_dev* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct sk_buff*,int (*) (struct sk_buff*)) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 TYPE_2__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int ) ;

int FUNC_12(struct sk_buff *VAR_1)
{
 struct inet6_dev *VAR_2 = FUNC_4(FUNC_9(VAR_1));
 if (FUNC_11(VAR_2->cnf.disable_ipv6)) {
  FUNC_1(FUNC_2(FUNC_9(VAR_1)->dev), VAR_2,
         VAR_0);
  FUNC_8(VAR_1);
  return 0;
 }

 if ((VAR_1->len > FUNC_7(VAR_1) && !FUNC_10(VAR_1)) ||
     FUNC_3(FUNC_9(VAR_1)) ||
     (FUNC_0(VAR_1)->frag_max_size && VAR_1->len > FUNC_0(VAR_1)->frag_max_size))
  return FUNC_5(VAR_1, FUNC_6);
 else
  return FUNC_6(VAR_1);
}
