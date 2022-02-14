
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {TYPE_1__* sk_prot; } ;
struct sk_buff {int truesize; } ;
typedef int gfp_t ;
struct TYPE_2__ {int (* enter_memory_pressure ) (struct sock*) ;scalar_t__ max_header; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (scalar_t__,int ) ;
 struct sk_buff* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sock*,int ) ;
 int FUNC_9 (struct sock*) ;

struct sk_buff *FUNC_10(struct sock *VAR_1, int VAR_2, gfp_t VAR_3)
{
 struct sk_buff *VAR_4;


 VAR_2 = FUNC_0(VAR_2, 4);

 if (FUNC_8(VAR_1, VAR_0))
  VAR_4 = FUNC_2(VAR_2 + VAR_1->sk_prot->max_header, VAR_3);
 else
  VAR_4 = FUNC_3(VAR_2 + VAR_1->sk_prot->max_header, VAR_3);
 if (VAR_4) {
  if (FUNC_5(VAR_1, VAR_4->truesize)) {




   FUNC_6(VAR_4, FUNC_7(VAR_4) - VAR_2);
   return VAR_4;
  }
  FUNC_1(VAR_4);
 } else {
  VAR_1->sk_prot->enter_memory_pressure(VAR_1);
  FUNC_4(VAR_1);
 }
 return ((void*)0);
}
