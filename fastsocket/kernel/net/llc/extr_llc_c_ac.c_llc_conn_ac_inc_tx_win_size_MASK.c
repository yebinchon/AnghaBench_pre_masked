
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_sock {scalar_t__ k; } ;


 scalar_t__ VAR_0 ;
 struct llc_sock* FUNC_0 (struct sock*) ;

int FUNC_1(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct llc_sock *VAR_3 = FUNC_0(VAR_1);

 VAR_3->k += 1;
 if (VAR_3->k > (u8) ~VAR_0)
  VAR_3->k = (u8) ~VAR_0;
 return 0;
}
