
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback {struct callback* cb_next; void* cb_arg; int * cb_func; } ;
typedef int callback_func ;


 struct callback* VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct callback* FUNC_1 (int) ;

void
FUNC_2(callback_func *VAR_1, void *VAR_2)
{
 struct callback *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct callback));
 if (VAR_3 == ((void*)0))
  FUNC_0(1, "unable to allocate memory for callback");
 VAR_3->cb_func = VAR_1;
 VAR_3->cb_arg = VAR_2;
 VAR_3->cb_next = VAR_0;
 VAR_0 = VAR_3;
}
