
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct TYPE_5__ {scalar_t__ transparent; } ;
struct TYPE_4__ {scalar_t__ tw_transparent; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (struct sock*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static bool FUNC_4(struct sock *VAR_1)
{
 if (VAR_1->sk_state != VAR_0) {
  if (FUNC_0(VAR_1)->transparent)
   return 1;
  FUNC_3(VAR_1);
 } else {
  if (FUNC_1(VAR_1)->tw_transparent)
   return 1;
  FUNC_2(FUNC_1(VAR_1));
 }
 return 0;
}
