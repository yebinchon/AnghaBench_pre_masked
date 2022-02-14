
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct server_request {int n_answer; int n_authority; int n_additional; int port; struct server_reply_item* additional; struct server_reply_item* authority; struct server_reply_item* answer; scalar_t__ response; } ;
struct server_reply_item {int type; int dns_question_class; int ttl; int is_name; int datalen; int * data; struct server_reply_item* name; struct server_reply_item* next; } ;
struct evdns_server_request {int dummy; } ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct server_request* FUNC_2 (struct evdns_server_request*) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (struct server_reply_item*) ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (char const*) ;

int
FUNC_7(struct evdns_server_request *VAR_0, int VAR_1, const char *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, const char *VAR_8)
{
 struct server_request *VAR_9 = FUNC_2(VAR_0);
 struct server_reply_item **VAR_10, *VAR_11;
 int *VAR_12;
 int VAR_13 = -1;

 FUNC_0(VAR_9->port);
 if (VAR_9->response)
  goto done;

 switch (VAR_1) {
 case 129:
  VAR_10 = &VAR_9->answer;
  VAR_12 = &VAR_9->n_answer;
  break;
 case 128:
  VAR_10 = &VAR_9->authority;
  VAR_12 = &VAR_9->n_authority;
  break;
 case 130:
  VAR_10 = &VAR_9->additional;
  VAR_12 = &VAR_9->n_additional;
  break;
 default:
  goto done;
 }
 while (*VAR_10) {
  VAR_10 = &((*VAR_10)->next);
 }
 VAR_11 = FUNC_5(sizeof(struct server_reply_item));
 if (!VAR_11)
  goto done;
 VAR_11->next = ((void*)0);
 if (!(VAR_11->name = FUNC_6(VAR_2))) {
  FUNC_4(VAR_11);
  goto done;
 }
 VAR_11->type = VAR_3;
 VAR_11->dns_question_class = VAR_4;
 VAR_11->ttl = VAR_5;
 VAR_11->is_name = VAR_7 != 0;
 VAR_11->datalen = 0;
 VAR_11->data = ((void*)0);
 if (VAR_8) {
  if (VAR_11->is_name) {
   if (!(VAR_11->data = FUNC_6(VAR_8))) {
    FUNC_4(VAR_11->name);
    FUNC_4(VAR_11);
    goto done;
   }
   VAR_11->datalen = (u16)-1;
  } else {
   if (!(VAR_11->data = FUNC_5(VAR_6))) {
    FUNC_4(VAR_11->name);
    FUNC_4(VAR_11);
    goto done;
   }
   VAR_11->datalen = VAR_6;
   FUNC_3(VAR_11->data, VAR_8, VAR_6);
  }
 }

 *VAR_10 = VAR_11;
 ++(*VAR_12);
 VAR_13 = 0;
done:
 FUNC_1(VAR_9->port);
 return VAR_13;
}
