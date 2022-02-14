
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct sock {TYPE_1__ sk_timer; int sk_receive_queue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,unsigned long) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static inline void FUNC_6(struct sock *VAR_3)
{
 FUNC_1(VAR_3);
 FUNC_4(&VAR_3->sk_receive_queue);

 if (FUNC_3(VAR_3)) {
  FUNC_2(&VAR_3->sk_timer, VAR_1,
    (unsigned long)VAR_3);
  VAR_3->sk_timer.expires = VAR_2 + VAR_0;
  FUNC_0(&VAR_3->sk_timer);
 } else
  FUNC_5(VAR_3);
}
