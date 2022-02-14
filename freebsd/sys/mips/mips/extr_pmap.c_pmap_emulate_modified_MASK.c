
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ,int ) ;

int
FUNC_7(pmap_t VAR_4, vm_offset_t VAR_5)
{
 pt_entry_t *VAR_6;

 FUNC_0(VAR_4);
 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (VAR_6 == ((void*)0))
  FUNC_2("pmap_emulate_modified: can't find PTE");
 if (!FUNC_5(VAR_6, VAR_3) || FUNC_5(VAR_6, VAR_0))
  FUNC_2("pmap_emulate_modified: invalid pte");

 if (FUNC_5(VAR_6, VAR_2)) {
  FUNC_1(VAR_4);
  return (1);
 }
 FUNC_4(VAR_6, VAR_0);
 FUNC_6(VAR_4, VAR_5, *VAR_6);
 if (!FUNC_5(VAR_6, VAR_1))
  FUNC_2("pmap_emulate_modified: unmanaged page");
 FUNC_1(VAR_4);
 return (0);
}
