
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct subscription {int nameseq_list; TYPE_1__ seq; } ;
struct name_seq {scalar_t__ first_free; struct name_seq* sseqs; int ns_list; int subscriptions; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct name_seq*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct name_seq* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct subscription *VAR_1)
{
 struct name_seq *VAR_2;

 FUNC_7(&VAR_0);
 VAR_2 = FUNC_4(VAR_1->seq.type);
 if (VAR_2 != ((void*)0)){
  FUNC_5(&VAR_2->lock);
  FUNC_2(&VAR_1->nameseq_list);
  FUNC_6(&VAR_2->lock);
  if ((VAR_2->first_free == 0) && FUNC_3(&VAR_2->subscriptions)) {
   FUNC_0(&VAR_2->ns_list);
   FUNC_1(VAR_2->sseqs);
   FUNC_1(VAR_2);
  }
 }
 FUNC_8(&VAR_0);
}
