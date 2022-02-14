
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * sb_upcall; } ;
struct socket {TYPE_1__ so_rcv; TYPE_1__ so_snd; } ;
struct icl_pdu {int dummy; } ;
struct icl_conn {int ic_disconnecting; int ic_to_send; struct icl_pdu* ic_receive_pdu; struct socket* ic_socket; int ic_lock; int ic_send_cv; int ic_receive_cv; scalar_t__ ic_send_running; scalar_t__ ic_receive_running; } ;


 int FUNC_0 (struct icl_conn*) ;
 int FUNC_1 (struct icl_conn*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 struct icl_pdu* FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct icl_conn*,struct icl_pdu*) ;
 int VAR_2 ;
 int FUNC_11 (struct socket*) ;
 int FUNC_12 (struct socket*,int ) ;

void
FUNC_13(struct icl_conn *VAR_3)
{
 struct icl_pdu *VAR_4;
 struct socket *VAR_5;

 FUNC_0(VAR_3);




 VAR_3->ic_disconnecting = 1;
 while (VAR_3->ic_receive_running || VAR_3->ic_send_running) {
  FUNC_8(&VAR_3->ic_receive_cv);
  FUNC_8(&VAR_3->ic_send_cv);
  FUNC_9(&VAR_3->ic_send_cv, VAR_3->ic_lock);
 }


 VAR_5 = VAR_3->ic_socket;
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_3);
  return;
 }
 VAR_3->ic_socket = ((void*)0);




 FUNC_1(VAR_3);
 FUNC_3(&VAR_5->so_snd);
 if (VAR_5->so_snd.sb_upcall != ((void*)0))
  FUNC_12(VAR_5, VAR_1);
 FUNC_4(&VAR_5->so_snd);
 FUNC_3(&VAR_5->so_rcv);
 if (VAR_5->so_rcv.sb_upcall != ((void*)0))
  FUNC_12(VAR_5, VAR_0);
 FUNC_4(&VAR_5->so_rcv);
 FUNC_11(VAR_5);
 FUNC_0(VAR_3);

 if (VAR_3->ic_receive_pdu != ((void*)0)) {

  FUNC_10(VAR_3, VAR_3->ic_receive_pdu);
  VAR_3->ic_receive_pdu = ((void*)0);
 }




 while (!FUNC_5(&VAR_3->ic_to_send)) {
  VAR_4 = FUNC_6(&VAR_3->ic_to_send);
  FUNC_7(&VAR_3->ic_to_send, VAR_2);
  FUNC_10(VAR_3, VAR_4);
 }

 FUNC_2(FUNC_5(&VAR_3->ic_to_send),
     ("destroying session with non-empty send queue"));
 FUNC_1(VAR_3);
}
