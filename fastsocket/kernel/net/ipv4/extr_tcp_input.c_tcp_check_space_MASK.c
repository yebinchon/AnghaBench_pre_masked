
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {TYPE_1__* sk_socket; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sock*,int ) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_2)
{
 if (FUNC_0(VAR_2, VAR_1)) {
  FUNC_1(VAR_2, VAR_1);
  if (VAR_2->sk_socket &&
      FUNC_3(VAR_0, &VAR_2->sk_socket->flags))
   FUNC_2(VAR_2);
 }
}
