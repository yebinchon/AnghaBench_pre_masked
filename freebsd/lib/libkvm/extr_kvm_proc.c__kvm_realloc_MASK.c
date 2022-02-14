
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int program; } ;
typedef TYPE_1__ kvm_t ;


 int FUNC_0 (TYPE_1__*,int ,char*) ;
 void* FUNC_1 (void*,size_t) ;

void *
FUNC_2(kvm_t *VAR_0, void *VAR_1, size_t VAR_2)
{
 void *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  FUNC_0(VAR_0, VAR_0->program, "out of memory");
 return (VAR_3);
}
