
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct spglist*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int*,int ,struct spglist*,struct rwlock**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct spglist*,int) ;

__attribute__((used)) static void
FUNC_7(pmap_t VAR_1, vm_offset_t VAR_2, pd_entry_t *VAR_3,
    pd_entry_t VAR_4, struct rwlock **VAR_5)
{
 struct spglist VAR_6;
 vm_offset_t VAR_7;

 FUNC_1(&VAR_6);
 VAR_7 = FUNC_5(VAR_2);
 FUNC_4(VAR_1, VAR_3, VAR_7, &VAR_6, VAR_5);
 if ((VAR_4 & FUNC_2(VAR_1)) == 0)
  FUNC_3(VAR_1, VAR_7, VAR_4);
 FUNC_6(&VAR_6, 1);
 FUNC_0(VAR_0, "pmap_demote_pde: failure for va %#lx in pmap %p",
     VAR_2, VAR_1);
}
