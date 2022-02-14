
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_request_wrapper {struct evrpc_request_wrapper* name; int * hook_meta; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct evrpc_request_wrapper*) ;

__attribute__((used)) static void
FUNC_2(struct evrpc_request_wrapper *VAR_0)
{
 if (VAR_0->hook_meta != ((void*)0))
  FUNC_0(VAR_0->hook_meta);
 FUNC_1(VAR_0->name);
 FUNC_1(VAR_0);
}
