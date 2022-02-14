
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_walker {int stop; scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct tcf_proto*,unsigned long,struct tcf_walker*) ;} ;
struct tcf_proto {struct rsvp_head* root; } ;
struct rsvp_session {struct rsvp_filter** ht; struct rsvp_session* next; } ;
struct rsvp_head {struct rsvp_session** ht; } ;
struct rsvp_filter {struct rsvp_filter* next; } ;


 scalar_t__ FUNC_0 (struct tcf_proto*,unsigned long,struct tcf_walker*) ;

__attribute__((used)) static void FUNC_1(struct tcf_proto *VAR_0, struct tcf_walker *VAR_1)
{
 struct rsvp_head *VAR_2 = VAR_0->root;
 unsigned VAR_3, VAR_4;

 if (VAR_1->stop)
  return;

 for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
  struct rsvp_session *VAR_5;

  for (VAR_5 = VAR_2->ht[VAR_3]; VAR_5; VAR_5 = VAR_5->next) {
   for (VAR_4 = 0; VAR_4 <= 16; VAR_4++) {
    struct rsvp_filter *VAR_6;

    for (VAR_6 = VAR_5->ht[VAR_4]; VAR_6; VAR_6 = VAR_6->next) {
     if (VAR_1->count < VAR_1->skip) {
      VAR_1->count++;
      continue;
     }
     if (VAR_1->fn(VAR_0, (unsigned long)VAR_6, VAR_1) < 0) {
      VAR_1->stop = 1;
      return;
     }
     VAR_1->count++;
    }
   }
  }
 }
}
