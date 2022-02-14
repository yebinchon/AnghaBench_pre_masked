
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ retry_count; scalar_t__ n2; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;

int FUNC_1(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 return !(FUNC_0(VAR_0)->retry_count < FUNC_0(VAR_0)->n2);
}
