
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* (* arch_hypervisor ) () ;} ;
struct TYPE_5__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_INT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 char* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_3(FICL_VM *VAR_3)
{
 FICL_INT VAR_4;
 const char *VAR_5;





 VAR_5 = (VAR_2.arch_hypervisor != ((void*)0))
     ? (*VAR_2.arch_hypervisor)()
     : ((void*)0);
 VAR_4 = (VAR_5 != ((void*)0)) ? VAR_1 : VAR_0;
 FUNC_0(VAR_3->pStack, VAR_4);
}
