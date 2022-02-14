
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtxq_queue {int length; int head; int key; } ;
struct umtxq_chain {scalar_t__ length; scalar_t__ max_length; int * uc_queue; int uc_spare_queue; } ;
struct umtx_q {int uq_flags; struct umtxq_queue* uq_cur_queue; struct umtxq_queue* uq_spare_queue; int uq_key; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,struct umtxq_queue*,int ) ;
 int FUNC_2 (int *,struct umtx_q*,int ) ;
 int FUNC_3 (struct umtxq_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct umtxq_chain* FUNC_4 (int *) ;
 struct umtxq_queue* FUNC_5 (int *,int) ;
 int VAR_3 ;

__attribute__((used)) static inline void
FUNC_6(struct umtx_q *VAR_4, int VAR_5)
{
 struct umtxq_queue *VAR_6;
 struct umtxq_chain *VAR_7;

 VAR_7 = FUNC_4(&VAR_4->uq_key);
 FUNC_3(VAR_7);
 FUNC_0((VAR_4->uq_flags & VAR_0) == 0, ("umtx_q is already on queue"));
 VAR_6 = FUNC_5(&VAR_4->uq_key, VAR_5);
 if (VAR_6 != ((void*)0)) {
  FUNC_1(&VAR_7->uc_spare_queue, VAR_4->uq_spare_queue, VAR_1);
 } else {
  VAR_6 = VAR_4->uq_spare_queue;
  VAR_6->key = VAR_4->uq_key;
  FUNC_1(&VAR_7->uc_queue[VAR_5], VAR_6, VAR_1);
 }
 VAR_4->uq_spare_queue = ((void*)0);

 FUNC_2(&VAR_6->head, VAR_4, VAR_3);
 VAR_6->length++;
 VAR_4->uq_flags |= VAR_0;
 VAR_4->uq_cur_queue = VAR_6;
 return;
}
