
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct heim_base_mem {int ref_cnt; char const* name; int dealloc; int * isa; } ;
typedef int heim_type_dealloc ;


 void* FUNC_0 (struct heim_base_mem*) ;
 struct heim_base_mem* FUNC_1 (int,size_t) ;
 int VAR_0 ;

void *
FUNC_2(size_t VAR_1, const char *VAR_2, heim_type_dealloc VAR_3)
{


    struct heim_base_mem *VAR_4 = FUNC_1(1, VAR_1 + sizeof(*VAR_4));
    if (VAR_4 == ((void*)0))
 return ((void*)0);
    VAR_4->isa = &VAR_0;
    VAR_4->ref_cnt = 1;
    VAR_4->name = VAR_2;
    VAR_4->dealloc = VAR_3;
    return FUNC_0(VAR_4);
}
