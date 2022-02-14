
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_req_open_item {struct mesh_state* mesh_state; struct mesh_area* mesh; struct tcp_req_open_item* next; } ;
struct tcp_req_info {int num_open_req; struct tcp_req_open_item* open_req_list; } ;
struct mesh_state {int dummy; } ;
struct mesh_area {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

int
FUNC_2(struct tcp_req_info* VAR_0,
 struct mesh_area* VAR_1, struct mesh_state* VAR_2)
{
 struct tcp_req_open_item* VAR_3;
 FUNC_0(VAR_0 && VAR_1 && VAR_2);
 VAR_3 = (struct tcp_req_open_item*)FUNC_1(sizeof(*VAR_3));
 if(!VAR_3) return 0;
 VAR_3->next = VAR_0->open_req_list;
 VAR_3->mesh = VAR_1;
 VAR_3->mesh_state = VAR_2;
 VAR_0->open_req_list = VAR_3;
 VAR_0->num_open_req++;
 return 1;
}
