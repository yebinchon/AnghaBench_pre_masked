
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct sbuf {int dummy; } ;
struct pmap_kernel_map_range {scalar_t__ sva; } ;
typedef int pt_entry_t ;
typedef int pml4_entry_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sbuf*,struct pmap_kernel_map_range*,scalar_t__) ;
 int FUNC_1 (struct pmap_kernel_map_range*,int) ;
 int FUNC_2 (struct pmap_kernel_map_range*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(struct sbuf *VAR_9, struct pmap_kernel_map_range *VAR_10,
    vm_offset_t VAR_11, pml4_entry_t VAR_12, pdp_entry_t VAR_13, pd_entry_t VAR_14,
    pt_entry_t VAR_15)
{
 pt_entry_t VAR_16;

 VAR_16 = VAR_12 & (VAR_6 | VAR_7 | VAR_8);

 VAR_16 |= VAR_13 & VAR_8;
 VAR_16 &= VAR_8 | (VAR_13 & (VAR_6 | VAR_7));
 if ((VAR_13 & VAR_0) != 0) {
  VAR_16 |= VAR_13 & (VAR_1 | VAR_2);
 } else if (VAR_14 != 0) {
  VAR_16 |= VAR_14 & VAR_8;
  VAR_16 &= VAR_8 | (VAR_14 & (VAR_6 | VAR_7));
 }
 if ((VAR_14 & VAR_0) != 0) {
  VAR_16 |= VAR_14 & (VAR_1 | VAR_2);
 } else if (VAR_15 != 0) {
  VAR_16 |= VAR_15 & VAR_8;
  VAR_16 &= VAR_8 | (VAR_15 & (VAR_6 | VAR_7));
  VAR_16 |= VAR_15 & (VAR_1 | VAR_4);


  if ((VAR_16 & VAR_5) != 0)
   VAR_16 ^= VAR_3 | VAR_5;
 }

 if (VAR_10->sva > VAR_11 || !FUNC_1(VAR_10, VAR_16)) {
  FUNC_0(VAR_9, VAR_10, VAR_11);
  FUNC_2(VAR_10, VAR_11, VAR_16);
 }
}
