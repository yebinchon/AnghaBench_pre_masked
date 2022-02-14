
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {TYPE_1__* sk_prot; } ;
struct inet_sock {int num; int sport; } ;
struct TYPE_2__ {scalar_t__ (* get_port ) (struct sock*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_1)
{
 struct inet_sock *VAR_2;

 FUNC_2(VAR_1);
 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2->num) {
  if (VAR_1->sk_prot->get_port(VAR_1, 0)) {
   FUNC_3(VAR_1);
   return -VAR_0;
  }
  VAR_2->sport = FUNC_0(VAR_2->num);
 }
 FUNC_3(VAR_1);
 return 0;
}
