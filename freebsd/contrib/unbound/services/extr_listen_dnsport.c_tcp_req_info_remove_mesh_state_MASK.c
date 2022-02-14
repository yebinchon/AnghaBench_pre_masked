
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_req_open_item {struct tcp_req_open_item* next; struct mesh_state* mesh_state; } ;
struct tcp_req_info {int num_open_req; struct tcp_req_open_item* open_req_list; } ;
struct mesh_state {int dummy; } ;


 int FUNC_0 (struct tcp_req_open_item*) ;

void
FUNC_1(struct tcp_req_info* VAR_0, struct mesh_state* VAR_1)
{
 struct tcp_req_open_item* VAR_2, *VAR_3 = ((void*)0);
 if(!VAR_0 || !VAR_1) return;
 VAR_2 = VAR_0->open_req_list;
 while(VAR_2) {
  if(VAR_2->mesh_state == VAR_1) {
   struct tcp_req_open_item* VAR_4;
   if(VAR_3) VAR_3->next = VAR_2->next;
   else VAR_0->open_req_list = VAR_2->next;

   VAR_4 = VAR_2->next;
   FUNC_0(VAR_2);
   VAR_0->num_open_req --;


   VAR_2 = VAR_4;
   continue;
  }
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
 }
}
