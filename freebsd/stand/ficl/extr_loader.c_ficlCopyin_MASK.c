
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* vm_offset_t ;
struct TYPE_6__ {int (* arch_copyin ) (void*,void*,size_t) ;} ;
struct TYPE_5__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;


 TYPE_4__ VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*,void*,size_t) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;

void
FUNC_4(FICL_VM *VAR_1)
{
 void* VAR_2;
 vm_offset_t VAR_3;
 size_t VAR_4;





 VAR_4 = FUNC_0(VAR_1->pStack);
 VAR_3 = FUNC_0(VAR_1->pStack);
 VAR_2 = FUNC_1(VAR_1->pStack);


 VAR_0.arch_copyin(VAR_2, VAR_3, VAR_4);


 return;
}
