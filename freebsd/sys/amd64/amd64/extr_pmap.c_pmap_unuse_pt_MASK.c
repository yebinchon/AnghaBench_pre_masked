
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_offset_t ;
struct spglist {int dummy; } ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,scalar_t__,int ,struct spglist*) ;

__attribute__((used)) static int
FUNC_3(pmap_t VAR_2, vm_offset_t VAR_3, pd_entry_t VAR_4,
    struct spglist *VAR_5)
{
 vm_page_t VAR_6;

 if (VAR_3 >= VAR_1)
  return (0);
 FUNC_0(VAR_4 != 0, ("pmap_unuse_pt: ptepde != 0"));
 VAR_6 = FUNC_1(VAR_4 & VAR_0);
 return (FUNC_2(VAR_2, VAR_3, VAR_6, VAR_5));
}
