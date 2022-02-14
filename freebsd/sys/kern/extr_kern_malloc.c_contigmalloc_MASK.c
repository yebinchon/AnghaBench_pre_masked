
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
struct malloc_type {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,int,int ,int ,unsigned long,int ,int ) ;
 int FUNC_1 (struct malloc_type*,int ) ;
 int FUNC_2 (unsigned long) ;

void *
FUNC_3(unsigned long VAR_1, struct malloc_type *VAR_2, int VAR_3,
    vm_paddr_t VAR_4, vm_paddr_t VAR_5, unsigned long VAR_6,
    vm_paddr_t VAR_7)
{
 void *VAR_8;

 VAR_8 = (void *)FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_0);
 if (VAR_8 != ((void*)0))
  FUNC_1(VAR_2, FUNC_2(VAR_1));
 return (VAR_8);
}
