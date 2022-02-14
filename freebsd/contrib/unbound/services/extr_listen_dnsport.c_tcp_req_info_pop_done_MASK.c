
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_req_info {scalar_t__ num_done_req; struct tcp_req_done_item* done_req_list; } ;
struct tcp_req_done_item {struct tcp_req_done_item* next; scalar_t__ len; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct tcp_req_done_item*
FUNC_3(struct tcp_req_info* VAR_2)
{
 struct tcp_req_done_item* VAR_3;
 FUNC_2(VAR_2->num_done_req > 0 && VAR_2->done_req_list);
 VAR_3 = VAR_2->done_req_list;
 FUNC_0(&VAR_1);
 VAR_0 -= (sizeof(struct tcp_req_done_item)+VAR_3->len);
 FUNC_1(&VAR_1);
 VAR_2->done_req_list = VAR_2->done_req_list->next;
 VAR_2->num_done_req --;
 return VAR_3;
}
