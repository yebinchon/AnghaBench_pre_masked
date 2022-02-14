
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {scalar_t__ root; } ;
struct rsvp_session {struct rsvp_session* next; struct rsvp_filter** ht; } ;
struct rsvp_head {struct rsvp_session** ht; } ;
struct rsvp_filter {unsigned int handle; struct rsvp_filter* next; struct rsvp_session* sess; } ;


 int FUNC_0 (struct rsvp_session*) ;
 int FUNC_1 (struct tcf_proto*,struct rsvp_filter*) ;
 int FUNC_2 (struct tcf_proto*) ;
 int FUNC_3 (struct tcf_proto*) ;

__attribute__((used)) static int FUNC_4(struct tcf_proto *VAR_0, unsigned long VAR_1)
{
 struct rsvp_filter **VAR_2, *VAR_3 = (struct rsvp_filter*)VAR_1;
 unsigned VAR_4 = VAR_3->handle;
 struct rsvp_session **VAR_5;
 struct rsvp_session *VAR_6 = VAR_3->sess;
 int VAR_7;

 for (VAR_2 = &VAR_6->ht[(VAR_4>>8)&0xFF]; *VAR_2; VAR_2 = &(*VAR_2)->next) {
  if (*VAR_2 == VAR_3) {
   FUNC_2(VAR_0);
   *VAR_2 = VAR_3->next;
   FUNC_3(VAR_0);
   FUNC_1(VAR_0, VAR_3);



   for (VAR_7=0; VAR_7<=16; VAR_7++)
    if (VAR_6->ht[VAR_7])
     return 0;


   for (VAR_5 = &((struct rsvp_head*)VAR_0->root)->ht[VAR_4&0xFF];
        *VAR_5; VAR_5 = &(*VAR_5)->next) {
    if (*VAR_5 == VAR_6) {
     FUNC_2(VAR_0);
     *VAR_5 = VAR_6->next;
     FUNC_3(VAR_0);

     FUNC_0(VAR_6);
     return 0;
    }
   }

   return 0;
  }
 }
 return 0;
}
