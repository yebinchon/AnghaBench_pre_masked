
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int root; } ;
struct rsvp_session {struct rsvp_session* next; struct rsvp_session** ht; } ;
struct rsvp_head {struct rsvp_head* next; struct rsvp_head** ht; } ;
struct rsvp_filter {struct rsvp_filter* next; struct rsvp_filter** ht; } ;


 int FUNC_0 (struct rsvp_session*) ;
 int FUNC_1 (struct tcf_proto*,struct rsvp_session*) ;
 struct rsvp_session* FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct tcf_proto *VAR_0)
{
 struct rsvp_head *VAR_1 = FUNC_2(&VAR_0->root, ((void*)0));
 struct rsvp_session **VAR_2;
 int VAR_3, VAR_4;

 if (VAR_1 == ((void*)0))
  return;

 VAR_2 = VAR_1->ht;

 for (VAR_3=0; VAR_3<256; VAR_3++) {
  struct rsvp_session *VAR_5;

  while ((VAR_5 = VAR_2[VAR_3]) != ((void*)0)) {
   VAR_2[VAR_3] = VAR_5->next;

   for (VAR_4=0; VAR_4<=16; VAR_4++) {
    struct rsvp_filter *VAR_6;

    while ((VAR_6 = VAR_5->ht[VAR_4]) != ((void*)0)) {
     VAR_5->ht[VAR_4] = VAR_6->next;
     FUNC_1(VAR_0, VAR_6);
    }
   }
   FUNC_0(VAR_5);
  }
 }
 FUNC_0(VAR_1);
}
