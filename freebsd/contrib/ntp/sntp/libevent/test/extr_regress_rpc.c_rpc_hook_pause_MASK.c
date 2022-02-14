
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv ;
struct timeval {int dummy; } ;
struct rpc_hook_ctx_ {void* ctx; void* vbase; } ;
struct evhttp_request {int dummy; } ;
struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ,struct rpc_hook_ctx_*,struct timeval*) ;
 struct rpc_hook_ctx_* FUNC_2 (int) ;
 int FUNC_3 (struct timeval*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(void *VAR_3, struct evhttp_request *VAR_4, struct evbuffer *VAR_5,
    void *VAR_6)
{
 struct rpc_hook_ctx_ *VAR_7 = FUNC_2(sizeof(*VAR_7));
 struct timeval VAR_8;

 FUNC_0(VAR_7 != ((void*)0));
 VAR_7->vbase = VAR_6;
 VAR_7->ctx = VAR_3;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 FUNC_1(-1, VAR_1, VAR_2, VAR_7, &VAR_8);
 return VAR_0;
}
