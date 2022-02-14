
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_2__ {unsigned long data; int function; scalar_t__ expires; } ;
struct sock {TYPE_1__ sk_timer; int sk_receive_queue; int (* sk_state_change ) (struct sock*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct sock*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_5)
{
 struct sock *VAR_6;

 FUNC_2(&VAR_2);

 VAR_6 = VAR_5->sk;
 if (!VAR_6)
  goto out_unlock;

 FUNC_1(&VAR_3, VAR_6);





 VAR_6->sk_state_change(VAR_6);

 FUNC_7(VAR_6);



 FUNC_6(&VAR_6->sk_receive_queue);

 if (FUNC_5(VAR_6)) {
  VAR_6->sk_timer.data = (unsigned long)VAR_6;
  VAR_6->sk_timer.expires = VAR_4 + VAR_0;
  VAR_6->sk_timer.function = VAR_1;
  FUNC_0(&VAR_6->sk_timer);

  goto out_unlock;
 }

 FUNC_4(VAR_6);

out_unlock:
 FUNC_3(&VAR_2);
 return 0;
}
