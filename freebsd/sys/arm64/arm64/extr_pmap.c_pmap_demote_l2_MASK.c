
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef int pmap_t ;


 int * FUNC_0 (int ,int *,int ,struct rwlock**) ;
 int FUNC_1 (struct rwlock*) ;

__attribute__((used)) static pt_entry_t *
FUNC_2(pmap_t VAR_0, pt_entry_t *VAR_1, vm_offset_t VAR_2)
{
 struct rwlock *VAR_3;
 pt_entry_t *VAR_4;

 VAR_3 = ((void*)0);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3);
 if (VAR_3 != ((void*)0))
  FUNC_1(VAR_3);
 return (VAR_4);
}
