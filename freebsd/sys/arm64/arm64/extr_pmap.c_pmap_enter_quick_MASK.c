
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int vm_page_t ;
typedef int vm_offset_t ;
struct rwlock {int dummy; } ;
typedef int pmap_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int *,struct rwlock**) ;
 int FUNC_3 (struct rwlock*) ;

void
FUNC_4(pmap_t VAR_0, vm_offset_t VAR_1, vm_page_t VAR_2, vm_prot_t VAR_3)
{
 struct rwlock *VAR_4;

 VAR_4 = ((void*)0);
 FUNC_0(VAR_0);
 (void)FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0), &VAR_4);
 if (VAR_4 != ((void*)0))
  FUNC_3(VAR_4);
 FUNC_1(VAR_0);
}
