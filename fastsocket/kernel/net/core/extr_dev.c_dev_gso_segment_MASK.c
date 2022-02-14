
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int destructor; struct sk_buff* next; } ;
struct TYPE_2__ {int destructor; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_0 ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, int VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_2);


 if (!VAR_3)
  return 0;

 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);

 VAR_1->next = VAR_3;
 FUNC_0(VAR_1)->destructor = VAR_1->destructor;
 VAR_1->destructor = VAR_0;

 return 0;
}
