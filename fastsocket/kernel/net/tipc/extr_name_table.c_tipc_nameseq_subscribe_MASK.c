
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subscription {int nameseq_list; } ;
struct sub_seq {int upper; int lower; struct publication* zone_list; } ;
struct publication {struct publication* zone_list_next; int node; int ref; } ;
struct name_seq {size_t first_free; struct sub_seq* sseqs; int subscriptions; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (struct subscription*,int ,int ) ;
 int FUNC_2 (struct subscription*,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct name_seq *VAR_1, struct subscription *VAR_2)
{
 struct sub_seq *VAR_3 = VAR_1->sseqs;

 FUNC_0(&VAR_2->nameseq_list, &VAR_1->subscriptions);

 if (!VAR_3)
  return;

 while (VAR_3 != &VAR_1->sseqs[VAR_1->first_free]) {
  struct publication *VAR_4 = VAR_3->zone_list;
  if (VAR_4 && FUNC_1(VAR_2,VAR_3->lower,VAR_3->upper)) {
   struct publication *VAR_5 = VAR_4;
   int VAR_6 = 1;

   do {
    FUNC_2(VAR_2,
          VAR_3->lower,
          VAR_3->upper,
          VAR_0,
          VAR_5->ref,
          VAR_5->node,
          VAR_6);
    VAR_6 = 0;
    VAR_5 = VAR_5->zone_list_next;
   } while (VAR_5 != VAR_4);
  }
  VAR_3++;
 }
}
