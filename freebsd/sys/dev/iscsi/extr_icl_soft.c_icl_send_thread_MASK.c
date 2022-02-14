
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icl_pdu_stailq {int dummy; } ;
struct icl_conn {int ic_check_send_space; int ic_send_running; int ic_send_cv; struct icl_pdu_stailq ic_to_send; int ic_lock; scalar_t__ ic_disconnecting; } ;


 int FUNC_0 (struct icl_conn*) ;
 int FUNC_1 (struct icl_conn*) ;
 int FUNC_2 (struct icl_pdu_stailq*,struct icl_pdu_stailq*) ;
 scalar_t__ FUNC_3 (struct icl_pdu_stailq*) ;
 int FUNC_4 (struct icl_pdu_stailq*) ;
 int FUNC_5 (struct icl_pdu_stailq*,struct icl_pdu_stailq*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct icl_conn*,struct icl_pdu_stailq*) ;
 int VAR_0 ;
 int FUNC_9 () ;

__attribute__((used)) static void
FUNC_10(void *VAR_1)
{
 struct icl_conn *VAR_2;
 struct icl_pdu_stailq VAR_3;

 VAR_2 = VAR_1;

 FUNC_4(&VAR_3);

 FUNC_0(VAR_2);
 for (;;) {
  for (;;) {






   if (FUNC_3(&VAR_3))
    FUNC_5(&VAR_2->ic_to_send, &VAR_3, VAR_0);

   VAR_2->ic_check_send_space = 0;
   FUNC_1(VAR_2);
   FUNC_8(VAR_2, &VAR_3);
   FUNC_0(VAR_2);





   if (VAR_2->ic_check_send_space)
    continue;





   if (FUNC_3(&VAR_3) &&
       !FUNC_3(&VAR_2->ic_to_send))
    continue;






   break;
  }

  if (VAR_2->ic_disconnecting) {

   break;
  }

  FUNC_7(&VAR_2->ic_send_cv, VAR_2->ic_lock);
 }





 FUNC_2(&VAR_2->ic_to_send, &VAR_3);

 VAR_2->ic_send_running = 0;
 FUNC_6(&VAR_2->ic_send_cv);
 FUNC_1(VAR_2);
 FUNC_9();
}
