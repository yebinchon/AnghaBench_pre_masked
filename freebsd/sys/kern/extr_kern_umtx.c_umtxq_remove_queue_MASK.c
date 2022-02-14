
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtxq_queue {scalar_t__ length; int head; } ;
struct umtxq_chain {int uc_spare_queue; int length; } ;
struct umtx_q {int uq_flags; struct umtxq_queue* uq_cur_queue; struct umtxq_queue* uq_spare_queue; int uq_key; } ;


 int FUNC_0 (int,char*) ;
 struct umtxq_queue* FUNC_1 (int *) ;
 int FUNC_2 (struct umtxq_queue*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,struct umtx_q*,int ) ;
 int FUNC_5 (struct umtxq_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct umtxq_chain* FUNC_6 (int *) ;
 int VAR_2 ;

__attribute__((used)) static inline void
FUNC_7(struct umtx_q *VAR_3, int VAR_4)
{
 struct umtxq_chain *VAR_5;
 struct umtxq_queue *VAR_6;

 VAR_5 = FUNC_6(&VAR_3->uq_key);
 FUNC_5(VAR_5);
 if (VAR_3->uq_flags & VAR_0) {
  VAR_6 = VAR_3->uq_cur_queue;
  FUNC_4(&VAR_6->head, VAR_3, VAR_2);
  VAR_6->length--;
  VAR_3->uq_flags &= ~VAR_0;
  if (FUNC_3(&VAR_6->head)) {
   FUNC_0(VAR_6->length == 0,
       ("inconsistent umtxq_queue length"));



   FUNC_2(VAR_6, VAR_1);
  } else {
   VAR_6 = FUNC_1(&VAR_5->uc_spare_queue);
   FUNC_0(VAR_6 != ((void*)0), ("uc_spare_queue is empty"));
   FUNC_2(VAR_6, VAR_1);
  }
  VAR_3->uq_spare_queue = VAR_6;
  VAR_3->uq_cur_queue = ((void*)0);
 }
}
