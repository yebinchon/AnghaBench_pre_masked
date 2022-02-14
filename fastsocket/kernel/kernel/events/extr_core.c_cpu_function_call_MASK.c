
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_function_call {int (* func ) (void*) ;void* info; int ret; int * p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,struct remote_function_call*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_2, int (*VAR_3) (void *VAR_4), void *VAR_5)
{
 struct remote_function_call VAR_6 = {
  .p = ((void*)0),
  .func = VAR_3,
  .info = VAR_5,
  .ret = -VAR_0,
 };

 FUNC_0(VAR_2, VAR_1, &VAR_6, 1);

 return VAR_6.ret;
}
