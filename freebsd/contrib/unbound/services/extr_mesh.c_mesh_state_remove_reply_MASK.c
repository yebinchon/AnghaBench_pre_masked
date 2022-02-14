
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ count; } ;
struct mesh_state {int cb_list; struct mesh_reply* reply_list; TYPE_2__ super_set; } ;
struct TYPE_3__ {struct comm_point* c; } ;
struct mesh_reply {struct mesh_reply* next; TYPE_1__ query_reply; } ;
struct mesh_area {scalar_t__ num_reply_states; int num_detached_states; int num_reply_addrs; } ;
struct comm_point {int dummy; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct mesh_area* VAR_0, struct mesh_state* VAR_1,
 struct comm_point* VAR_2)
{
 struct mesh_reply* VAR_3, *VAR_4 = ((void*)0);
 VAR_3 = VAR_1->reply_list;


 if(!VAR_3) return;
 while(VAR_3) {
  if(VAR_3->query_reply.c == VAR_2) {

   if(VAR_4) VAR_4->next = VAR_3->next;
   else VAR_1->reply_list = VAR_3->next;

   VAR_0->num_reply_addrs--;


   VAR_3 = VAR_3->next;
   continue;
  }
  VAR_4 = VAR_3;
  VAR_3 = VAR_3->next;
 }

 if(!VAR_1->reply_list && !VAR_1->cb_list
  && VAR_1->super_set.count == 0) {
  VAR_0->num_detached_states++;
 }

 if(!VAR_1->reply_list && !VAR_1->cb_list) {
  FUNC_0(VAR_0->num_reply_states > 0);
  VAR_0->num_reply_states--;
 }
}
