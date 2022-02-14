
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_shutdown; scalar_t__ sk_type; int sk_callback_lock; int (* sk_state_change ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sock*,int ,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 struct sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;

__attribute__((used)) static int FUNC_10(struct socket *VAR_8, int VAR_9)
{
 struct sock *VAR_10 = VAR_8->sk;
 struct sock *VAR_11;

 VAR_9 = (VAR_9+1)&(VAR_2|VAR_3);

 if (VAR_9) {
  FUNC_8(VAR_10);
  VAR_10->sk_shutdown |= VAR_9;
  VAR_11 = FUNC_7(VAR_10);
  if (VAR_11)
   FUNC_3(VAR_11);
  FUNC_9(VAR_10);
  VAR_10->sk_state_change(VAR_10);

  if (VAR_11 &&
   (VAR_10->sk_type == VAR_6 || VAR_10->sk_type == VAR_5)) {

   int VAR_12 = 0;

   if (VAR_9&VAR_2)
    VAR_12 |= VAR_3;
   if (VAR_9&VAR_3)
    VAR_12 |= VAR_2;
   FUNC_8(VAR_11);
   VAR_11->sk_shutdown |= VAR_12;
   FUNC_9(VAR_11);
   VAR_11->sk_state_change(VAR_11);
   FUNC_0(&VAR_11->sk_callback_lock);
   if (VAR_12 == VAR_4)
    FUNC_2(VAR_11, VAR_7, VAR_0);
   else if (VAR_12 & VAR_2)
    FUNC_2(VAR_11, VAR_7, VAR_1);
   FUNC_1(&VAR_11->sk_callback_lock);
  }
  if (VAR_11)
   FUNC_4(VAR_11);
 }
 return 0;
}
