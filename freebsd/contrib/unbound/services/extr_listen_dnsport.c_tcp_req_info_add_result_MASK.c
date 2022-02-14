
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tcp_req_info {int num_done_req; struct tcp_req_done_item* done_req_list; } ;
struct tcp_req_done_item {size_t len; struct tcp_req_done_item* next; int buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcp_req_done_item*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,size_t) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(struct tcp_req_info* VAR_4, uint8_t* VAR_5, size_t VAR_6)
{
 struct tcp_req_done_item* VAR_7 = ((void*)0);
 struct tcp_req_done_item* VAR_8;
 size_t VAR_9;


 VAR_9 = sizeof(struct tcp_req_done_item) + VAR_6;
 FUNC_1(&VAR_2);
 if(VAR_1 + VAR_9 > VAR_3) {
  FUNC_2(&VAR_2);
  FUNC_6(VAR_0, "drop stream reply, no space left, in stream-wait-size");
  return 0;
 }
 VAR_1 += VAR_9;
 FUNC_2(&VAR_2);


 VAR_7 = VAR_4->done_req_list;
 while(VAR_7 && VAR_7->next)
  VAR_7 = VAR_7->next;


 VAR_8 = (struct tcp_req_done_item*)FUNC_4(sizeof(*VAR_8));
 if(!VAR_8) {
  FUNC_3("malloc failure, for stream result list");
  return 0;
 }
 VAR_8->next = ((void*)0);
 VAR_8->len = VAR_6;
 VAR_8->buf = FUNC_5(VAR_5, VAR_6);
 if(!VAR_8->buf) {
  FUNC_0(VAR_8);
  FUNC_3("malloc failure, adding reply to stream result list");
  return 0;
 }


 if(VAR_7) VAR_7->next = VAR_8;
 else VAR_4->done_req_list = VAR_8;
 VAR_4->num_done_req++;
 return 1;
}
