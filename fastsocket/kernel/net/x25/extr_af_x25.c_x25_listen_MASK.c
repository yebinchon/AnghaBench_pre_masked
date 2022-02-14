
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_max_ack_backlog; } ;
struct TYPE_2__ {int dest_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 TYPE_1__* FUNC_1 (struct sock*) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_3, int VAR_4)
{
 struct sock *VAR_5 = VAR_3->sk;
 int VAR_6 = -VAR_0;

 if (VAR_5->sk_state != VAR_1) {
  FUNC_0(&FUNC_1(VAR_5)->dest_addr, 0, VAR_2);
  VAR_5->sk_max_ack_backlog = VAR_4;
  VAR_5->sk_state = VAR_1;
  VAR_6 = 0;
 }

 return VAR_6;
}
