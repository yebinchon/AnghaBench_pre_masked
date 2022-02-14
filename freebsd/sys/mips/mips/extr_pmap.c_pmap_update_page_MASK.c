
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct pmap_update_page_arg {int pte; int va; int pmap; } ;
typedef int pt_entry_t ;
typedef int pmap_t ;


 int FUNC_0 (int ,int ,struct pmap_update_page_arg*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(pmap_t VAR_1, vm_offset_t VAR_2, pt_entry_t VAR_3)
{
 struct pmap_update_page_arg VAR_4;

 VAR_4.pmap = VAR_1;
 VAR_4.va = VAR_2;
 VAR_4.pte = VAR_3;
 FUNC_0(VAR_1, VAR_0, &VAR_4);
}
