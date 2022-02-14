
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_state; int sk_err; } ;
struct rfcomm_session {int state; int mtu; TYPE_1__* sock; } ;
struct TYPE_4__ {int imtu; int omtu; } ;
struct TYPE_3__ {struct sock* sk; } ;



 int VAR_0 ;

 int FUNC_0 (char*,struct rfcomm_session*,int) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct rfcomm_session*,int ) ;
 int FUNC_4 (struct rfcomm_session*,int ) ;

__attribute__((used)) static inline void FUNC_5(struct rfcomm_session *VAR_1)
{
 struct sock *VAR_2 = VAR_1->sock->sk;

 FUNC_0("%p state %ld", VAR_1, VAR_1->state);

 switch(VAR_2->sk_state) {
 case 128:
  VAR_1->state = VAR_0;



  VAR_1->mtu = FUNC_2(FUNC_1(VAR_2)->omtu, FUNC_1(VAR_2)->imtu) - 5;

  FUNC_3(VAR_1, 0);
  break;

 case 129:
  VAR_1->state = 129;
  FUNC_4(VAR_1, VAR_2->sk_err);
  break;
 }
}
