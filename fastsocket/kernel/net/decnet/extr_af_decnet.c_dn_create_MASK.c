
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int type; } ;
struct sock {int sk_protocol; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 struct sock* FUNC_0 (struct net*,struct socket*,int ) ;
 struct net VAR_6 ;

__attribute__((used)) static int FUNC_1(struct net *VAR_7, struct socket *VAR_8, int VAR_9,
       int VAR_10)
{
 struct sock *VAR_11;

 if (VAR_7 != &VAR_6)
  return -VAR_1;

 switch(VAR_8->type) {
  case 129:
   if (VAR_9 != VAR_0)
    return -VAR_3;
   break;
  case 128:
   break;
  default:
   return -VAR_4;
 }


 if ((VAR_11 = FUNC_0(VAR_7, VAR_8, VAR_5)) == ((void*)0))
  return -VAR_2;

 VAR_11->sk_protocol = VAR_9;

 return 0;
}
