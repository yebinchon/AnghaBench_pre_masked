
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ fasync_list; int flags; } ;
struct sock {int sk_shutdown; scalar_t__ sk_sleep; struct socket* sk_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (struct socket*,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;

void FUNC_6(struct sock *VAR_7)
{
 struct socket *VAR_8 = VAR_7->sk_socket;

 if (FUNC_2(VAR_7) >= FUNC_1(VAR_7) && VAR_8) {
  FUNC_0(VAR_5, &VAR_8->flags);

  if (VAR_7->sk_sleep && FUNC_4(VAR_7->sk_sleep))
   FUNC_5(VAR_7->sk_sleep, VAR_0 |
      VAR_2 | VAR_1);
  if (VAR_8->fasync_list && !(VAR_7->sk_shutdown & VAR_4))
   FUNC_3(VAR_8, VAR_6, VAR_3);
 }
}
