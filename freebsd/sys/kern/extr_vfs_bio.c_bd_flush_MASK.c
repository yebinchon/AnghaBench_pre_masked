
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufqueue {scalar_t__ bq_len; int bq_subqueue; int bq_queue; } ;
struct bufdomain {struct bufqueue* bd_cleanq; scalar_t__ bd_wanted; } ;
struct buf {int b_subqueue; } ;


 int FUNC_0 (struct bufdomain*) ;
 int FUNC_1 (struct bufdomain*) ;
 int FUNC_2 (struct bufqueue*) ;
 struct buf* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct buf*,int ) ;
 int FUNC_5 (int *,struct buf*,int ) ;
 int VAR_0 ;
 int FUNC_6 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_7(struct bufdomain *VAR_1, struct bufqueue *VAR_2)
{
 struct buf *VAR_3;

 FUNC_2(VAR_2);
 if (VAR_2 != VAR_1->bd_cleanq) {
  FUNC_0(VAR_1);
  while ((VAR_3 = FUNC_3(&VAR_2->bq_queue)) != ((void*)0)) {
   FUNC_5(&VAR_2->bq_queue, VAR_3, VAR_0);
   FUNC_4(&VAR_1->bd_cleanq->bq_queue, VAR_3,
       VAR_0);
   VAR_3->b_subqueue = VAR_1->bd_cleanq->bq_subqueue;
  }
  VAR_1->bd_cleanq->bq_len += VAR_2->bq_len;
  VAR_2->bq_len = 0;
 }
 if (VAR_1->bd_wanted) {
  VAR_1->bd_wanted = 0;
  FUNC_6(&VAR_1->bd_wanted);
 }
 if (VAR_2 != VAR_1->bd_cleanq)
  FUNC_1(VAR_1);
}
