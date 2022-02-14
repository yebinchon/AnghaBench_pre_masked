
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_sleep; TYPE_1__* sk_socket; int sk_receive_queue; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct sock*,long*,int) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;

int FUNC_7(struct sock *VAR_3, long *VAR_4)
{
 int VAR_5;
 FUNC_0(VAR_2);

 FUNC_3(VAR_3->sk_sleep, &VAR_2, VAR_1);
 FUNC_4(VAR_0, &VAR_3->sk_socket->flags);
 VAR_5 = FUNC_5(VAR_3, VAR_4, !FUNC_6(&VAR_3->sk_receive_queue));
 FUNC_1(VAR_0, &VAR_3->sk_socket->flags);
 FUNC_2(VAR_3->sk_sleep, &VAR_2);
 return VAR_5;
}
