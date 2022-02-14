
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct TYPE_2__ {int sk_local; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(struct socket *VAR_2, int VAR_3)
{
 FUNC_1(VAR_2->sk, VAR_1);
 VAR_2->sk->sk_local = VAR_3;

 FUNC_0(VAR_0, "Bind this listen socket to CPU %d", VAR_3);
}
