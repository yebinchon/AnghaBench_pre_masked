
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct xen_add_to_physmap {unsigned int idx; unsigned int gpfn; int space; int domid; } ;
typedef int grant_entry_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct xen_add_to_physmap*) ;
 int FUNC_1 (scalar_t__,char*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,unsigned int) ;
 unsigned int VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static int
FUNC_6(unsigned int VAR_7, unsigned int VAR_8)
{
 struct xen_add_to_physmap VAR_9;
 unsigned int VAR_10 = VAR_8;





 do {
  VAR_9.domid = VAR_0;
  VAR_9.idx = VAR_10;
  VAR_9.space = VAR_3;
  VAR_9.gpfn = (VAR_5 >> VAR_1) + VAR_10;
  if (FUNC_0(VAR_4, &VAR_9))
   FUNC_4("HYPERVISOR_memory_op failed to map gnttab");
 } while (VAR_10-- > VAR_7);

 if (VAR_6 == ((void*)0)) {
  vm_offset_t VAR_11;

  VAR_11 = FUNC_2(VAR_2 * FUNC_3());
  FUNC_1(VAR_11, ("can't allocate VM space for grant table"));
  VAR_6 = (grant_entry_t *)VAR_11;
 }

 for (VAR_10 = VAR_7; VAR_10 <= VAR_8; VAR_10++) {
  FUNC_5((vm_offset_t) VAR_6 + VAR_10 * VAR_2,
      VAR_5 + VAR_10 * VAR_2);
 }

 return (0);
}
