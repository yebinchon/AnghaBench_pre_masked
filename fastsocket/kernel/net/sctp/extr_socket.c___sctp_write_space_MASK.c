
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ fasync_list; } ;
struct sock {int sk_shutdown; int * sk_sleep; struct socket* sk_socket; } ;
struct TYPE_2__ {struct sock* sk; } ;
struct sctp_association {int wait; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sctp_association*) ;
 int FUNC_2 (struct socket*,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct sctp_association *VAR_3)
{
 struct sock *VAR_4 = VAR_3->base.sk;
 struct socket *VAR_5 = VAR_4->sk_socket;

 if ((FUNC_1(VAR_3) > 0) && VAR_5) {
  if (FUNC_3(&VAR_3->wait))
   FUNC_4(&VAR_3->wait);

  if (FUNC_0(VAR_4)) {
   if (VAR_4->sk_sleep && FUNC_3(VAR_4->sk_sleep))
    FUNC_4(VAR_4->sk_sleep);





   if (VAR_5->fasync_list &&
       !(VAR_4->sk_shutdown & VAR_1))
    FUNC_2(VAR_5,
      VAR_2, VAR_0);
  }
 }
}
