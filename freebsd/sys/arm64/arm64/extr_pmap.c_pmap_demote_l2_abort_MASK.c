
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef int pmap_t ;


 int FUNC_0 (struct spglist*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ,int ,struct spglist*,struct rwlock**) ;
 int FUNC_4 (struct spglist*,int) ;

__attribute__((used)) static void
FUNC_5(pmap_t VAR_0, vm_offset_t VAR_1, pt_entry_t *VAR_2,
    struct rwlock **VAR_3)
{
 struct spglist VAR_4;

 FUNC_0(&VAR_4);
 (void)FUNC_3(VAR_0, VAR_2, VAR_1, FUNC_2(FUNC_1(VAR_0, VAR_1)), &VAR_4,
     VAR_3);
 FUNC_4(&VAR_4, 1);
}
