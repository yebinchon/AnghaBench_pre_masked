
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int e_class; } ;
typedef TYPE_1__ Elf ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (TYPE_1__*,int ,size_t) ;

void *
FUNC_2(Elf *VAR_1, size_t VAR_2)
{
 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }
 return (FUNC_1(VAR_1, VAR_1->e_class, VAR_2));
}
