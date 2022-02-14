
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct l2_bucket {int * l2b_kva; } ;
typedef int pt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 struct l2_bucket* FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(vm_offset_t *VAR_2, int VAR_3, vm_offset_t *VAR_4,
    pt_entry_t **VAR_5)
{
 vm_offset_t VAR_6 = *VAR_2;
 struct l2_bucket *VAR_7;

 if (VAR_5) {
  VAR_7 = FUNC_2(VAR_1, VAR_6);
  if (VAR_7 == ((void*)0))
   FUNC_1("pmap_alloc_specials: no l2b for 0x%x", VAR_6);

  *VAR_5 = &VAR_7->l2b_kva[FUNC_0(VAR_6)];
 }

 *VAR_4 = VAR_6;
 *VAR_2 = VAR_6 + (VAR_0 * VAR_3);
}
