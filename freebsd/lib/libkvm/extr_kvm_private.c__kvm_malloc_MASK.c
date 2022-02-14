
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int program; } ;
typedef TYPE_1__ kvm_t ;


 int FUNC_0 (TYPE_1__*,int ,char*,size_t,int ) ;
 void* FUNC_1 (size_t,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

void *
FUNC_3(kvm_t *VAR_1, size_t VAR_2)
{
 void *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_2, sizeof(char))) == ((void*)0))
  FUNC_0(VAR_1, VAR_1->program, "can't allocate %zu bytes: %s",
    VAR_2, FUNC_2(VAR_0));
 return (VAR_3);
}
