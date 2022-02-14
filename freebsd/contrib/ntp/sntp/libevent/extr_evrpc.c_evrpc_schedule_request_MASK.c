
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_status {int error; } ;
struct evrpc_request_wrapper {int cb_arg; int reply; int request; int (* cb ) (struct evrpc_status*,int ,int ,int ) ;int hook_meta; struct evhttp_request* req; struct evhttp_connection* evcon; int (* request_marshal ) (int ,int ) ;struct evrpc_pool* pool; } ;
struct evrpc_pool {int output_hooks; } ;
struct evhttp_request {int output_buffer; } ;
struct evhttp_connection {int dummy; } ;
typedef int status ;




 int VAR_0 ;

 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 struct evhttp_request* FUNC_2 (int ,struct evrpc_request_wrapper*) ;
 int FUNC_3 (int *,struct evhttp_connection*) ;
 int FUNC_4 (struct evrpc_pool*,struct evrpc_request_wrapper*,int (*) (struct evrpc_request_wrapper*,int const)) ;
 int FUNC_5 (int *,struct evrpc_request_wrapper*,struct evhttp_request*,int ) ;
 int VAR_1 ;
 int FUNC_6 (struct evrpc_request_wrapper*) ;
 int FUNC_7 (struct evrpc_request_wrapper*,int const) ;
 int FUNC_8 (struct evrpc_status*,int ,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct evrpc_status*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_11(struct evhttp_connection *VAR_2,
    struct evrpc_request_wrapper *VAR_3)
{
 struct evhttp_request *VAR_4 = ((void*)0);
 struct evrpc_pool *VAR_5 = VAR_3->pool;
 struct evrpc_status VAR_6;

 if ((VAR_4 = FUNC_2(VAR_1, VAR_3)) == ((void*)0))
  goto error;


 VAR_3->request_marshal(VAR_4->output_buffer, VAR_3->request);


 VAR_3->evcon = VAR_2;


 VAR_3->req = VAR_4;

 if (FUNC_1(&VAR_5->output_hooks) != ((void*)0)) {
  int VAR_7;

  FUNC_3(&VAR_3->hook_meta, VAR_2);


  VAR_7 = FUNC_5(&VAR_5->output_hooks,
      VAR_3, VAR_4, VAR_4->output_buffer);

  switch (VAR_7) {
  case 128:
   goto error;
  case 129:

   if (FUNC_4(VAR_5, VAR_3,
    FUNC_7) == -1)
    goto error;
   return (0);
  case 130:

   break;
  default:
   FUNC_0(VAR_7 == 128 ||
       VAR_7 == 130 ||
       VAR_7 == 129);
  }
 }

 FUNC_7(VAR_3, 130);
 return (0);

error:
 FUNC_8(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.error = VAR_0;
 (*VAR_3->cb)(&VAR_6, VAR_3->request, VAR_3->reply, VAR_3->cb_arg);
 FUNC_6(VAR_3);
 return (-1);
}
