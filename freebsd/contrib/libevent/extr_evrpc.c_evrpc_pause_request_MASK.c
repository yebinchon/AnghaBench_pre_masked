
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_hooks_ {int pause_requests; } ;
struct evrpc_hook_ctx {void (* cb ) (void*,int) ;void* ctx; } ;


 int FUNC_0 (int *,struct evrpc_hook_ctx*,int ) ;
 struct evrpc_hook_ctx* FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, void *VAR_2,
    void (*VAR_3)(void *, enum EVRPC_HOOK_RESULT))
{
 struct evrpc_hooks_ *VAR_4 = VAR_1;
 struct evrpc_hook_ctx *VAR_5 = FUNC_1(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return (-1);

 VAR_5->ctx = VAR_2;
 VAR_5->cb = VAR_3;

 FUNC_0(&VAR_4->pause_requests, VAR_5, VAR_0);
 return (0);
}
