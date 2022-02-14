
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cts_size; int cts_data; } ;
typedef TYPE_1__ ctf_sect_t ;


 uintptr_t VAR_0 ;
 int FUNC_0 (void*,scalar_t__) ;

void
FUNC_1(const ctf_sect_t *VAR_1)
{
 uintptr_t VAR_2 = (uintptr_t)VAR_1->cts_data;
 uintptr_t VAR_3 = VAR_2 & ~VAR_0;

 (void) FUNC_0((void *)(VAR_2 - VAR_3), VAR_1->cts_size + VAR_3);
}
