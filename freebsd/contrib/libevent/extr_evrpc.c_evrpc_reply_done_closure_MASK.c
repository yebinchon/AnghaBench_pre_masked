
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_status {int error; struct evhttp_request* http_req; } ;
struct evrpc_request_wrapper {int (* reply_unmarshal ) (int ,int ) ;int cb_arg; int reply; int request; int (* cb ) (struct evrpc_status*,int ,int ,int ) ;int (* reply_clear ) (int ) ;struct evrpc_pool* pool; struct evhttp_request* req; } ;
struct evrpc_pool {int dummy; } ;
struct evhttp_request {int input_buffer; } ;
typedef int status ;
typedef enum EVRPC_HOOK_RESULT { ____Placeholder_EVRPC_HOOK_RESULT } EVRPC_HOOK_RESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct evhttp_request*) ;
 scalar_t__ FUNC_1 (struct evhttp_request*) ;
 int FUNC_2 (struct evrpc_pool*) ;
 int FUNC_3 (struct evrpc_request_wrapper*) ;
 int FUNC_4 (struct evrpc_status*,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct evrpc_status*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_4, enum EVRPC_HOOK_RESULT VAR_5)
{
 struct evrpc_request_wrapper *VAR_6 = VAR_4;
 struct evhttp_request *VAR_7 = VAR_6->req;
 struct evrpc_pool *VAR_8 = VAR_6->pool;
 struct evrpc_status VAR_9;
 int VAR_10 = -1;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.http_req = VAR_7;


 if (VAR_7 == ((void*)0)) {
  VAR_9.error = VAR_2;
 } else if (VAR_5 == VAR_3) {
  VAR_9.error = VAR_1;
 } else {
  VAR_10 = VAR_6->reply_unmarshal(VAR_6->reply, VAR_7->input_buffer);
  if (VAR_10 == -1)
   VAR_9.error = VAR_0;
 }

 if (VAR_10 == -1) {

  VAR_6->reply_clear(VAR_6->reply);
 }

 (*VAR_6->cb)(&VAR_9, VAR_6->request, VAR_6->reply, VAR_6->cb_arg);

 FUNC_3(VAR_6);



 if (VAR_7 != ((void*)0) && FUNC_1(VAR_7))
  FUNC_0(VAR_7);


 FUNC_2(VAR_8);
}
