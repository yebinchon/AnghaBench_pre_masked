
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct image_params {TYPE_1__* args; } ;
typedef int register_t ;
struct TYPE_2__ {scalar_t__ argc; } ;
typedef int Elf32_Addr ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(register_t **VAR_1, struct image_params *VAR_2)
{
 Elf32_Addr *VAR_3;

 VAR_3 = (Elf32_Addr *)*VAR_1;
 VAR_3--;
 if (FUNC_0(VAR_3, (uint32_t)VAR_2->args->argc) == -1)
  return (VAR_0);
 *VAR_1 = (register_t *)VAR_3;
 return (0);
}
