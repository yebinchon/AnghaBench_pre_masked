
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int* FUNC_2 (int*,int ) ;
 int FUNC_3 (int ,int*,int ,int,struct spglist*,struct rwlock**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rwlock*) ;

__attribute__((used)) static void
FUNC_6(pmap_t VAR_1, vm_offset_t VAR_2, pd_entry_t *VAR_3,
    struct spglist *VAR_4)
{
 struct rwlock *VAR_5;
 pt_entry_t *VAR_6, VAR_7;

 VAR_7 = FUNC_4(VAR_1);
 FUNC_0(VAR_1, VAR_0);
 if ((*VAR_3 & VAR_7) == 0)
  return;
 VAR_6 = FUNC_2(VAR_3, VAR_2);
 if ((*VAR_6 & VAR_7) == 0)
  return;
 VAR_5 = ((void*)0);
 FUNC_3(VAR_1, VAR_6, VAR_2, *VAR_3, VAR_4, &VAR_5);
 if (VAR_5 != ((void*)0))
  FUNC_5(VAR_5);
 FUNC_1(VAR_1, VAR_2);
}
