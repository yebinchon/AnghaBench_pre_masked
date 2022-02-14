
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
struct malloc_type {int dummy; } ;
struct domainset {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct domainset*,unsigned long,int,int ,int ,unsigned long,int ,int ) ;
 int FUNC_1 (struct malloc_type*,int ) ;
 int FUNC_2 (unsigned long) ;

void *
FUNC_3(unsigned long VAR_1, struct malloc_type *VAR_2,
    struct domainset *VAR_3, int VAR_4, vm_paddr_t VAR_5, vm_paddr_t VAR_6,
    unsigned long VAR_7, vm_paddr_t VAR_8)
{
 void *VAR_9;

 VAR_9 = (void *)FUNC_0(VAR_3, VAR_1, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_0);
 if (VAR_9 != ((void*)0))
  FUNC_1(VAR_2, FUNC_2(VAR_1));
 return (VAR_9);
}
