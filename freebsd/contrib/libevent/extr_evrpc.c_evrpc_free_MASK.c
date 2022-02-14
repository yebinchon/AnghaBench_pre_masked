
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_hook_ctx {int output_hooks; int input_hooks; int paused_requests; int registered_rpcs; } ;
struct evrpc_hook {int dummy; } ;
struct evrpc_base {int output_hooks; int input_hooks; int paused_requests; int registered_rpcs; } ;
struct evrpc {int uri; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct evrpc_hook_ctx*,int ) ;
 int FUNC_3 (struct evrpc_hook_ctx*,int ,struct evrpc_hook*) ;
 int FUNC_4 (struct evrpc_hook_ctx*,int ) ;
 int FUNC_5 (struct evrpc_hook_ctx*) ;
 int VAR_2 ;

void
FUNC_6(struct evrpc_base *VAR_3)
{
 struct evrpc *VAR_4;
 struct evrpc_hook *VAR_5;
 struct evrpc_hook_ctx *VAR_6;
 int VAR_7;

 while ((VAR_4 = FUNC_1(&VAR_3->registered_rpcs)) != ((void*)0)) {
  VAR_7 = FUNC_4(VAR_3, VAR_4->uri);
  FUNC_0(VAR_7 == 0);
 }
 while ((VAR_6 = FUNC_1(&VAR_3->paused_requests)) != ((void*)0)) {
  FUNC_2(&VAR_3->paused_requests, VAR_6, VAR_2);
  FUNC_5(VAR_6);
 }
 while ((VAR_5 = FUNC_1(&VAR_3->input_hooks)) != ((void*)0)) {
  VAR_7 = FUNC_3(VAR_3, VAR_0, VAR_5);
  FUNC_0(VAR_7);
 }
 while ((VAR_5 = FUNC_1(&VAR_3->output_hooks)) != ((void*)0)) {
  VAR_7 = FUNC_3(VAR_3, VAR_1, VAR_5);
  FUNC_0(VAR_7);
 }
 FUNC_5(VAR_3);
}
