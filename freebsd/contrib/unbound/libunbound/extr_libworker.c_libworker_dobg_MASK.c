
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ub_ctx {int rr_pipe; int qq_pipe; } ;
struct libworker {int want_quit; struct ub_ctx* ctx; int base; scalar_t__ is_bg_thread; int thread_num; } ;
typedef int m ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct libworker*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,struct libworker*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int *,int ,int ) ;

__attribute__((used)) static void*
FUNC_11(void* VAR_2)
{

 uint32_t VAR_3;
 struct libworker* VAR_4 = (struct libworker*)VAR_2;
 struct ub_ctx* VAR_5;
 if(!VAR_4) {
  FUNC_2("libunbound bg worker init failed, nomem");
  return ((void*)0);
 }
 VAR_5 = VAR_4->ctx;
 FUNC_3(&VAR_4->thread_num);







 if(!FUNC_8(VAR_5->qq_pipe, VAR_4->base,
  VAR_1, VAR_4)) {
  FUNC_2("libunbound bg worker init failed, no bglisten");
  return ((void*)0);
 }
 if(!FUNC_9(VAR_5->rr_pipe, VAR_4->base)) {
  FUNC_2("libunbound bg worker init failed, no bgwrite");
  return ((void*)0);
 }


 FUNC_0(VAR_4->base);


 VAR_3 = VAR_0;
 VAR_4->want_quit = 1;
 FUNC_6(VAR_4->ctx->qq_pipe);
 FUNC_7(VAR_4->ctx->rr_pipe);
 FUNC_1(VAR_4);
 (void)FUNC_10(VAR_5->rr_pipe, (uint8_t*)&VAR_3,
  (uint32_t)sizeof(VAR_3), 0);





 return ((void*)0);
}
