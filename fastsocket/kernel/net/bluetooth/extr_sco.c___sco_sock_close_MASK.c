
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; int sk_socket; } ;





 int FUNC_0 (char*,struct sock*,int,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_2)
{
 FUNC_0("sk %p state %d socket %p", VAR_2, VAR_2->sk_state, VAR_2->sk_socket);

 switch (VAR_2->sk_state) {
 case 128:
  FUNC_2(VAR_2);
  break;

 case 130:
 case 132:
 case 131:
 case 129:
  FUNC_1(VAR_2, VAR_0);
  break;

 default:
  FUNC_3(VAR_2, VAR_1);
  break;
 }
}
