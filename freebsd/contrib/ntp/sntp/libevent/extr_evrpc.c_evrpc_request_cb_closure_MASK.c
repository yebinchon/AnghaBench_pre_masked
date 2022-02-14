
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_req_generic {int * reply; int * request; struct evhttp_request* http_req; struct evrpc* rpc; } ;
struct evrpc {int (* request_unmarshal ) (int *,int ) ;int cb_arg; int (* cb ) (struct evrpc_req_generic*,int ) ;int reply_new_arg; int * (* reply_new ) (int ) ;int request_new_arg; int * (* request_new ) (int ) ;} ;
struct evhttp_request {int input_buffer; } ;
typedef enum EVRPC_HOOK_RESULT { ____Placeholder_EVRPC_HOOK_RESULT } EVRPC_HOOK_RESULT ;


 int VAR_0 ;
 int FUNC_0 (struct evrpc_req_generic*) ;
 int VAR_1 ;
 int FUNC_1 (struct evhttp_request*,int ,int *) ;
 int FUNC_2 (struct evrpc_req_generic*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (struct evrpc_req_generic*,int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2, enum EVRPC_HOOK_RESULT VAR_3)
{
 struct evrpc_req_generic *VAR_4 = VAR_2;
 struct evrpc *VAR_5;
 struct evhttp_request *VAR_6;

 FUNC_0(VAR_4);
 VAR_5 = VAR_4->rpc;
 VAR_6 = VAR_4->http_req;

 if (VAR_3 == VAR_0)
  goto error;


 VAR_4->request = VAR_5->request_new(VAR_5->request_new_arg);
 if (VAR_4->request == ((void*)0))
  goto error;

 if (VAR_5->request_unmarshal(
      VAR_4->request, VAR_6->input_buffer) == -1) {

  goto error;
 }



 VAR_4->reply = VAR_5->reply_new(VAR_5->reply_new_arg);
 if (VAR_4->reply == ((void*)0))
  goto error;


 VAR_5->cb(VAR_4, VAR_5->cb_arg);

 return;

error:
 FUNC_2(VAR_4);
 FUNC_1(VAR_6, VAR_1, ((void*)0));
 return;
}
