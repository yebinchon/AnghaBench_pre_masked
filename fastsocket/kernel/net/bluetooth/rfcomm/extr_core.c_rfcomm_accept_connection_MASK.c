
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {TYPE_2__* sk; } ;
struct rfcomm_session {scalar_t__ mtu; struct socket* sock; } ;
struct TYPE_7__ {int accept_q; } ;
struct TYPE_6__ {int sk_state_change; int sk_data_ready; } ;
struct TYPE_5__ {int imtu; int omtu; } ;


 int FUNC_0 (char*,struct rfcomm_session*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct socket*,struct socket**,int ) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 struct rfcomm_session* FUNC_7 (struct socket*,int ) ;
 int FUNC_8 (struct rfcomm_session*) ;
 int FUNC_9 (struct socket*) ;

__attribute__((used)) static inline void FUNC_10(struct rfcomm_session *VAR_5)
{
 struct socket *VAR_6 = VAR_5->sock, *VAR_7;
 int VAR_8;



 if (FUNC_4(&FUNC_1(VAR_6->sk)->accept_q))
  return;

 FUNC_0("session %p", VAR_5);

 VAR_8 = FUNC_2(VAR_6, &VAR_7, VAR_1);
 if (VAR_8 < 0)
  return;


 VAR_7->sk->sk_data_ready = VAR_3;
 VAR_7->sk->sk_state_change = VAR_4;

 VAR_5 = FUNC_7(VAR_7, VAR_0);
 if (VAR_5) {
  FUNC_8(VAR_5);



  VAR_5->mtu = FUNC_5(FUNC_3(VAR_7->sk)->omtu, FUNC_3(VAR_7->sk)->imtu) - 5;

  FUNC_6(VAR_2);
 } else
  FUNC_9(VAR_7);
}
