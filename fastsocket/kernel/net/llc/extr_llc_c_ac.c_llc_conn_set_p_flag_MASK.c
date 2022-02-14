
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sock {int (* sk_state_change ) (struct sock*) ;} ;
struct TYPE_2__ {scalar_t__ p_flag; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;

void FUNC_2(struct sock *VAR_0, u8 VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0)->p_flag && !VAR_1;

 FUNC_0(VAR_0)->p_flag = VAR_1;

 if (VAR_2)
  VAR_0->sk_state_change(VAR_0);
}
