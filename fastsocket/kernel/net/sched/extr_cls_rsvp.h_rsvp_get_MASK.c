
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_proto {scalar_t__ root; } ;
struct rsvp_session {struct rsvp_filter** ht; struct rsvp_session* next; } ;
struct rsvp_head {struct rsvp_session** ht; } ;
struct rsvp_filter {int handle; struct rsvp_filter* next; } ;



__attribute__((used)) static unsigned long FUNC_0(struct tcf_proto *VAR_0, u32 VAR_1)
{
 struct rsvp_session **VAR_2 = ((struct rsvp_head*)VAR_0->root)->ht;
 struct rsvp_session *VAR_3;
 struct rsvp_filter *VAR_4;
 unsigned VAR_5 = VAR_1&0xFF;
 unsigned VAR_6 = (VAR_1>>8)&0xFF;

 if (VAR_6 > 16)
  return 0;

 for (VAR_3 = VAR_2[VAR_5]; VAR_3; VAR_3 = VAR_3->next) {
  for (VAR_4 = VAR_3->ht[VAR_6]; VAR_4; VAR_4 = VAR_4->next) {
   if (VAR_4->handle == VAR_1)
    return (unsigned long)VAR_4;
  }
 }
 return 0;
}
