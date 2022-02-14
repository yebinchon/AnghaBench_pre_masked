
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_base {int http_server; int registered_rpcs; } ;
struct evrpc {void (* cb ) (struct evrpc_req_generic*,void*) ;void* cb_arg; struct evrpc_base* base; int uri; } ;


 int FUNC_0 (int *,struct evrpc*,int ) ;
 int FUNC_1 (int ,char*,int ,struct evrpc*) ;
 char* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int VAR_1 ;

int
FUNC_4(struct evrpc_base *VAR_2, struct evrpc *VAR_3,
    void (*VAR_4)(struct evrpc_req_generic *, void *), void *VAR_5)
{
 char *VAR_6 = FUNC_2(VAR_3->uri);

 VAR_3->base = VAR_2;
 VAR_3->cb = VAR_4;
 VAR_3->cb_arg = VAR_5;

 FUNC_0(&VAR_2->registered_rpcs, VAR_3, VAR_1);

 FUNC_1(VAR_2->http_server,
     VAR_6,
     VAR_0,
     VAR_3);

 FUNC_3(VAR_6);

 return (0);
}
