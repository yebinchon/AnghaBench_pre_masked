
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int * xfrm; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int (*) (struct sk_buff*)) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_1)
{







 if (VAR_1->len > FUNC_4(VAR_1) && !FUNC_6(VAR_1))
  return FUNC_3(VAR_1, FUNC_2);
 else
  return FUNC_2(VAR_1);
}
