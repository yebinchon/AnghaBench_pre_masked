
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int * uc_link; } ;
typedef TYPE_1__ ucontext_t ;
typedef int (* handler_t ) (int ,int ,int ) ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(ucontext_t *VAR_0, handler_t VAR_1, uint32_t VAR_2, uint32_t VAR_3,
     uint32_t VAR_4)
{

 (*VAR_1)(VAR_2, VAR_3, VAR_4);
 if (VAR_0->uc_link == ((void*)0))
  FUNC_1(0);
 FUNC_2((const ucontext_t *)VAR_0->uc_link);

 FUNC_0();

}
