
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {scalar_t__ sk_type; int sk_max_ack_backlog; scalar_t__ sk_state; TYPE_1__* sk_socket; scalar_t__ sk_ack_backlog; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_8, int VAR_9)
{
 struct sock *VAR_10 = VAR_8->sk;
 int VAR_11 = -VAR_1;

 FUNC_0(VAR_10);
 if (FUNC_3(VAR_8->state != VAR_5))
  goto out;
 VAR_11 = -VAR_2;
 if (FUNC_3(VAR_10->sk_type != VAR_3))
  goto out;
 VAR_11 = -VAR_0;
 if (FUNC_2(VAR_10, VAR_4))
  goto out;
 VAR_11 = 0;
 if (!(unsigned)VAR_9)
  VAR_9 = 1;
 VAR_10->sk_max_ack_backlog = VAR_9;
 if (VAR_10->sk_state != VAR_6) {
  VAR_10->sk_ack_backlog = 0;
  VAR_10->sk_state = VAR_6;
 }
 VAR_10->sk_socket->flags |= VAR_7;
out:
 FUNC_1(VAR_10);
 return VAR_11;
}
