
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct pmap_invalidate_page_arg {int va; int pmap; } ;
typedef int pmap_t ;


 int FUNC_0 (int ,int ,struct pmap_invalidate_page_arg*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(pmap_t VAR_1, vm_offset_t VAR_2)
{
 struct pmap_invalidate_page_arg VAR_3;

 VAR_3.pmap = VAR_1;
 VAR_3.va = VAR_2;
 FUNC_0(VAR_1, VAR_0, &VAR_3);
}
