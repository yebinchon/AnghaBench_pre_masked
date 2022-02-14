
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mc_len; } ;
struct TYPE_6__ {int * uc_link; TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__ const*) ;

void
FUNC_3(ucontext_t *VAR_0)
{
 if (VAR_0->uc_link == ((void*)0))
  FUNC_1(0);
 else {

  VAR_0->uc_mcontext.mc_len = 0;

  FUNC_2((const ucontext_t *)VAR_0->uc_link);

  FUNC_0();
 }
}
