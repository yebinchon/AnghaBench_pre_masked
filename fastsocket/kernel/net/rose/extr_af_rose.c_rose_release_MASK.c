
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int (* sk_state_change ) (struct sock*) ;int sk_shutdown; int sk_state; } ;
struct rose_sock {int state; TYPE_1__* neighbour; } ;
struct TYPE_2__ {int use; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ,int,int) ;
 struct rose_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int ) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,int ) ;
 int FUNC_13 (struct sock*) ;

__attribute__((used)) static int FUNC_14(struct socket *VAR_5)
{
 struct sock *VAR_6 = VAR_5->sk;
 struct rose_sock *VAR_7;

 if (VAR_6 == ((void*)0)) return 0;

 FUNC_9(VAR_6);
 FUNC_10(VAR_6);
 FUNC_0(VAR_6);
 VAR_7 = FUNC_5(VAR_6);

 switch (VAR_7->state) {
 case 133:
  FUNC_1(VAR_6);
  FUNC_4(VAR_6, 0, -1, -1);
  FUNC_0(VAR_6);
  FUNC_3(VAR_6);
  break;

 case 131:
  VAR_7->neighbour->use--;
  FUNC_1(VAR_6);
  FUNC_4(VAR_6, 0, -1, -1);
  FUNC_0(VAR_6);
  FUNC_3(VAR_6);
  break;

 case 132:
 case 130:
 case 129:
 case 128:
  FUNC_2(VAR_6);
  FUNC_7(VAR_6);
  FUNC_8(VAR_6, VAR_0);
  FUNC_6(VAR_6);
  VAR_7->state = 131;
  VAR_6->sk_state = VAR_4;
  VAR_6->sk_shutdown |= VAR_1;
  VAR_6->sk_state_change(VAR_6);
  FUNC_12(VAR_6, VAR_2);
  FUNC_12(VAR_6, VAR_3);
  break;

 default:
  break;
 }

 VAR_5->sk = ((void*)0);
 FUNC_1(VAR_6);
 FUNC_11(VAR_6);

 return 0;
}
