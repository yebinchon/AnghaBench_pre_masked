
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {int a_val; } ;
struct TYPE_4__ {int a_type; TYPE_1__ a_un; } ;
typedef TYPE_2__ Elf_Auxinfo ;




 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static void
FUNC_0(char **VAR_3)
{
 const Elf_Auxinfo *VAR_4;


 while (*VAR_3++ != 0)
  ;
 VAR_4 = (const Elf_Auxinfo *)VAR_3;


 for (; VAR_4->a_type != VAR_0; VAR_4++) {
  switch (VAR_4->a_type) {
  case 129:
   VAR_1 = (uint32_t)VAR_4->a_un.a_val;
   break;
  case 128:
   VAR_2 = (uint32_t)VAR_4->a_un.a_val;
   break;
  }
 }
}
