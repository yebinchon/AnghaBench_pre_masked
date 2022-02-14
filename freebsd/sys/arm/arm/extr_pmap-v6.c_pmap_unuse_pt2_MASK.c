
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_offset_t ;
struct spglist {int dummy; } ;
typedef int pt1_entry_t ;
typedef int pmap_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ,struct spglist*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static boolean_t
FUNC_5(pmap_t VAR_2, vm_offset_t VAR_3, struct spglist *VAR_4)
{
 pt1_entry_t VAR_5;
 vm_page_t VAR_6;

 if (VAR_3 >= VAR_1)
  return (VAR_0);
 VAR_5 = FUNC_4(FUNC_1(VAR_2, VAR_3));
 VAR_6 = FUNC_0(FUNC_3(VAR_5));
 return (FUNC_2(VAR_2, VAR_3, VAR_6, VAR_4));
}
