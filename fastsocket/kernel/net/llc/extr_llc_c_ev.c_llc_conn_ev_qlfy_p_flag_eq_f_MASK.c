
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ p_flag; } ;


 int FUNC_0 (struct sk_buff*,scalar_t__*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;

int FUNC_2(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 u8 VAR_2;

 FUNC_0(VAR_1, &VAR_2);
 return FUNC_1(VAR_0)->p_flag == VAR_2 ? 0 : 1;
}
