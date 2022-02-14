
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hidp_session {int terminate; TYPE_4__* ctrl_sock; TYPE_2__* intr_sock; int intr_transmit; int ctrl_transmit; } ;
struct hidp_conndel_req {int flags; int bdaddr; } ;
struct TYPE_8__ {TYPE_3__* sk; } ;
struct TYPE_7__ {void* sk_err; } ;
struct TYPE_6__ {TYPE_1__* sk; } ;
struct TYPE_5__ {void* sk_err; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hidp_session* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hidp_session*) ;
 int FUNC_5 (struct hidp_session*,int,int *,int ) ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct hidp_conndel_req *VAR_6)
{
 struct hidp_session *VAR_7;
 int VAR_8 = 0;

 FUNC_0("");

 FUNC_3(&VAR_5);

 VAR_7 = FUNC_1(&VAR_6->bdaddr);
 if (VAR_7) {
  if (VAR_6->flags & (1 << VAR_4)) {
   FUNC_5(VAR_7,
    VAR_3 | VAR_2, ((void*)0), 0);
  } else {

   FUNC_6(&VAR_7->ctrl_transmit);
   FUNC_6(&VAR_7->intr_transmit);


   VAR_7->intr_sock->sk->sk_err = VAR_1;
   VAR_7->ctrl_sock->sk->sk_err = VAR_1;


   FUNC_2(&VAR_7->terminate);
   FUNC_4(VAR_7);
  }
 } else
  VAR_8 = -VAR_0;

 FUNC_7(&VAR_5);
 return VAR_8;
}
