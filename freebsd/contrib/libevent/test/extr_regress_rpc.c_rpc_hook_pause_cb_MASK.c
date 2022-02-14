
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_hook_ctx_ {int ctx; int vbase; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (void*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(evutil_socket_t VAR_2, short VAR_3, void *VAR_4)
{
 struct rpc_hook_ctx_ *VAR_5 = VAR_4;
 ++VAR_1;
 FUNC_0(VAR_5->vbase, VAR_5->ctx, VAR_0);
 FUNC_1(VAR_4);
}
