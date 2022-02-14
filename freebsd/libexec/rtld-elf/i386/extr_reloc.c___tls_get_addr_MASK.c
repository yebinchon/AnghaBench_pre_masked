
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ti_offset; int ti_module; } ;
typedef TYPE_1__ tls_index ;
typedef int Elf_Addr ;


 void* FUNC_0 (int **,int ,int ) ;

void *FUNC_1(tls_index *VAR_0)
{
    Elf_Addr** VAR_1;

    __asm __volatile("movl %%gs:0, %0" : "=r" (VAR_1));

    return FUNC_0(&VAR_1[1], VAR_0->ti_module, VAR_0->ti_offset);
}
