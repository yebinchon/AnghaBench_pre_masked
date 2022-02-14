
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t sb_lowat; int sb_hiwat; int sb_mtx; } ;
struct socket {TYPE_1__ so_rcv; } ;
struct icl_conn {size_t ic_receive_len; int ic_receive_running; int ic_send_cv; int ic_receive_cv; scalar_t__ ic_disconnecting; struct socket* ic_socket; } ;


 int FUNC_0 (struct icl_conn*) ;
 int FUNC_1 (struct icl_conn*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct icl_conn*,size_t) ;
 int FUNC_7 () ;
 size_t FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_0)
{
 struct icl_conn *VAR_1;
 size_t VAR_2;
 struct socket *VAR_3;

 VAR_1 = VAR_0;
 VAR_3 = VAR_1->ic_socket;

 for (;;) {
  if (VAR_1->ic_disconnecting) {

   break;
  }







  FUNC_2(&VAR_3->so_rcv);
  VAR_2 = FUNC_8(&VAR_3->so_rcv);
  if (VAR_2 < VAR_1->ic_receive_len) {
   VAR_3->so_rcv.sb_lowat = VAR_1->ic_receive_len;
   FUNC_5(&VAR_1->ic_receive_cv, &VAR_3->so_rcv.sb_mtx);
  } else
   VAR_3->so_rcv.sb_lowat = VAR_3->so_rcv.sb_hiwat + 1;
  FUNC_3(&VAR_3->so_rcv);

  FUNC_6(VAR_1, VAR_2);
 }

 FUNC_0(VAR_1);
 VAR_1->ic_receive_running = 0;
 FUNC_4(&VAR_1->ic_send_cv);
 FUNC_1(VAR_1);
 FUNC_7();
}
