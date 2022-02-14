
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sock {int sk_protocol; int sk_timer; int sk_state; int sk_sndtimeo; int sk_destruct; } ;
struct net {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int accept_q; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *,struct sock*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,unsigned long) ;
 struct sock* FUNC_5 (struct net*,int ,int ,int *) ;
 int FUNC_6 (struct socket*,struct sock*) ;
 int FUNC_7 (struct sock*,int ) ;

__attribute__((used)) static struct sock *FUNC_8(struct net *VAR_8, struct socket *VAR_9, int VAR_10, gfp_t VAR_11)
{
 struct sock *VAR_12;

 VAR_12 = FUNC_5(VAR_8, VAR_2, VAR_11, &VAR_4);
 if (!VAR_12)
  return ((void*)0);

 FUNC_6(VAR_9, VAR_12);
 FUNC_0(&FUNC_1(VAR_12)->accept_q);

 VAR_12->sk_destruct = VAR_6;
 VAR_12->sk_sndtimeo = FUNC_3(VAR_1);

 FUNC_7(VAR_12, VAR_3);

 VAR_12->sk_protocol = VAR_10;
 VAR_12->sk_state = VAR_0;

 FUNC_4(&VAR_12->sk_timer, VAR_7, (unsigned long) VAR_12);

 FUNC_2(&VAR_5, VAR_12);
 return VAR_12;
}
