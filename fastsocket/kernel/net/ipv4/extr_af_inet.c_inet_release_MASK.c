
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {long sk_lingertime; TYPE_1__* sk_prot; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int (* close ) (struct sock*,long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*,long) ;

int FUNC_4(struct socket *VAR_3)
{
 struct sock *VAR_4 = VAR_3->sk;

 if (VAR_4) {
  long VAR_5;

  FUNC_0(VAR_4);


  FUNC_1(VAR_4);
  VAR_5 = 0;
  if (FUNC_2(VAR_4, VAR_1) &&
      !(VAR_2->flags & VAR_0))
   VAR_5 = VAR_4->sk_lingertime;
  VAR_3->sk = ((void*)0);
  VAR_4->sk_prot->close(VAR_4, VAR_5);
 }
 return 0;
}
