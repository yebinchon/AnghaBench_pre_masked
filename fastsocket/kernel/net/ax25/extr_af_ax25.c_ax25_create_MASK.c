
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int type; int * ops; } ;
struct sock {int sk_protocol; int sk_destruct; TYPE_1__* sk_protinfo; } ;
struct net {int dummy; } ;
struct TYPE_3__ {struct sock* sk; } ;
typedef TYPE_1__ ax25_cb ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 TYPE_1__* FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int const) ;
 struct net VAR_8 ;
 struct sock* FUNC_2 (struct net*,int,int ,int *) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct socket*,struct sock*) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_9, struct socket *VAR_10, int VAR_11,
         int VAR_12)
{
 struct sock *VAR_13;
 ax25_cb *VAR_14;

 if (VAR_9 != &VAR_8)
  return -VAR_1;

 switch (VAR_10->type) {
 case 130:
  if (VAR_11 == 0 || VAR_11 == 131)
   VAR_11 = VAR_0;
  break;

 case 128:
  switch (VAR_11) {
  case 0:
  case 131:
   VAR_11 = VAR_0;
   break;
  case 132:
   return -VAR_3;
  default:
   break;
  }
  break;

 case 129:
  break;
 default:
  return -VAR_3;
 }

 VAR_13 = FUNC_2(VAR_9, 131, VAR_4, &VAR_6);
 if (VAR_13 == ((void*)0))
  return -VAR_2;

 VAR_14 = VAR_13->sk_protinfo = FUNC_0();
 if (!VAR_14) {
  FUNC_3(VAR_13);
  return -VAR_2;
 }

 FUNC_4(VAR_10, VAR_13);

 VAR_13->sk_destruct = VAR_5;
 VAR_10->ops = &VAR_7;
 VAR_13->sk_protocol = VAR_11;

 VAR_14->sk = VAR_13;

 return 0;
}
