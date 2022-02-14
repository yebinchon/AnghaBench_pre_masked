
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_req_open_item {struct tcp_req_open_item* buf; scalar_t__ len; struct tcp_req_open_item* next; int mesh_state; int mesh; } ;
struct tcp_req_info {scalar_t__ read_is_closed; scalar_t__ num_done_req; struct tcp_req_open_item* done_req_list; scalar_t__ num_open_req; struct tcp_req_open_item* open_req_list; int cp; } ;
struct tcp_req_done_item {struct tcp_req_done_item* buf; scalar_t__ len; struct tcp_req_done_item* next; int mesh_state; int mesh; } ;


 int FUNC_0 (struct tcp_req_open_item*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_4(struct tcp_req_info* VAR_2)
{
 struct tcp_req_open_item* VAR_3, *VAR_4;
 struct tcp_req_done_item* VAR_5, *VAR_6;
 if(!VAR_2) return;


 VAR_3 = VAR_2->open_req_list;
 while(VAR_3) {
  VAR_4 = VAR_3->next;
  FUNC_3(VAR_3->mesh, VAR_3->mesh_state, VAR_2->cp);
  FUNC_0(VAR_3);
  VAR_3 = VAR_4;
 }
 VAR_2->open_req_list = ((void*)0);
 VAR_2->num_open_req = 0;


 VAR_5 = VAR_2->done_req_list;
 while(VAR_5) {
  VAR_6 = VAR_5->next;
  FUNC_1(&VAR_1);
  VAR_0 -= (sizeof(struct tcp_req_done_item)
   +VAR_5->len);
  FUNC_2(&VAR_1);
  FUNC_0(VAR_5->buf);
  FUNC_0(VAR_5);
  VAR_5 = VAR_6;
 }
 VAR_2->done_req_list = ((void*)0);
 VAR_2->num_done_req = 0;
 VAR_2->read_is_closed = 0;
}
