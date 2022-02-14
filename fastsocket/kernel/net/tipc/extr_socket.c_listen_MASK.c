
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_5, int VAR_6)
{
 struct sock *VAR_7 = VAR_5->sk;
 int VAR_8;

 FUNC_0(VAR_7);

 if (VAR_5->state == VAR_3)
  VAR_8 = -VAR_1;
 else if (VAR_5->state != VAR_4)
  VAR_8 = -VAR_0;
 else {
  VAR_5->state = VAR_2;
  VAR_8 = 0;
 }

 FUNC_1(VAR_7);
 return VAR_8;
}
