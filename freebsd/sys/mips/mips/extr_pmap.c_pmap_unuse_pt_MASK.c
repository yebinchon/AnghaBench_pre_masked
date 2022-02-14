
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int pmap_t ;
typedef scalar_t__ pd_entry_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_4(pmap_t VAR_1, vm_offset_t VAR_2, pd_entry_t VAR_3)
{
 vm_page_t VAR_4;

 if (VAR_2 >= VAR_0)
  return (0);
 FUNC_0(VAR_3 != 0, ("pmap_unuse_pt: pde != 0"));
 VAR_4 = FUNC_2(FUNC_1(VAR_3));
 return (FUNC_3(VAR_1, VAR_2, VAR_4));
}
