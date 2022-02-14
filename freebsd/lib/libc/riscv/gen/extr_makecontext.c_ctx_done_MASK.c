
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * uc_link; } ;
typedef TYPE_1__ ucontext_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__ const*) ;

void
FUNC_3(ucontext_t *VAR_0)
{

 if (VAR_0->uc_link == ((void*)0)) {
  FUNC_1(0);
 } else {
  FUNC_2((const ucontext_t *)VAR_0->uc_link);
  FUNC_0();
 }
}
