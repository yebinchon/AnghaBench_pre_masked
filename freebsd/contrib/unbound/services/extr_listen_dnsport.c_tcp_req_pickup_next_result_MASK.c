
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_req_info {scalar_t__ num_done_req; } ;
struct tcp_req_done_item {struct tcp_req_done_item* buf; int len; } ;


 int FUNC_0 (struct tcp_req_done_item*) ;
 struct tcp_req_done_item* FUNC_1 (struct tcp_req_info*) ;
 int FUNC_2 (struct tcp_req_info*,struct tcp_req_done_item*,int ) ;

__attribute__((used)) static void
FUNC_3(struct tcp_req_info* VAR_0)
{
 if(VAR_0->num_done_req > 0) {

  struct tcp_req_done_item* VAR_1 = FUNC_1(VAR_0);
  FUNC_2(VAR_0, VAR_1->buf, VAR_1->len);
  FUNC_0(VAR_1->buf);
  FUNC_0(VAR_1);
 }
}
