
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_drops; int (* sk_error_report ) (struct sock*) ;int sk_err; } ;
struct netlink_sock {int flags; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct netlink_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_2)
{
 struct netlink_sock *VAR_3 = FUNC_1(VAR_2);

 if (!(VAR_3->flags & VAR_1)) {
  if (!FUNC_3(0, &FUNC_1(VAR_2)->state)) {
   VAR_2->sk_err = VAR_0;
   VAR_2->sk_error_report(VAR_2);
  }
 }
 FUNC_0(&VAR_2->sk_drops);
}
