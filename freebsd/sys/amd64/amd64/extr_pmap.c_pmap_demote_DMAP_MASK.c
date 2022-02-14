
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int*,int ) ;
 int FUNC_6 (int ,int*,int ) ;
 int FUNC_7 (int ,int ) ;
 int* FUNC_8 (int ,int ) ;
 int* FUNC_9 (int*,int ) ;
 int FUNC_10 (int) ;

void
FUNC_11(vm_paddr_t VAR_8, vm_size_t VAR_9, boolean_t VAR_10)
{
 pdp_entry_t *VAR_11;
 pd_entry_t *VAR_12;
 vm_offset_t VAR_13;
 boolean_t VAR_14;

 if (VAR_9 == 0)
  return;
 FUNC_0(FUNC_10(VAR_9), ("pmap_demote_DMAP: len is not a power of 2"));
 FUNC_0((VAR_8 & (VAR_9 - 1)) == 0,
     ("pmap_demote_DMAP: base is not a multiple of len"));
 if (VAR_9 < VAR_1 && VAR_8 < VAR_6) {
  VAR_13 = FUNC_1(VAR_8);
  VAR_14 = VAR_0;
  FUNC_2(VAR_7);
  VAR_11 = FUNC_8(VAR_7, VAR_13);
  if ((*VAR_11 & VAR_5) == 0)
   FUNC_4("pmap_demote_DMAP: invalid PDPE");
  if ((*VAR_11 & VAR_3) != 0) {
   if (!FUNC_6(VAR_7, VAR_11, VAR_13))
    FUNC_4("pmap_demote_DMAP: PDPE failed");
   VAR_14 = VAR_4;
  }
  if (VAR_9 < VAR_2) {
   VAR_12 = FUNC_9(VAR_11, VAR_13);
   if ((*VAR_12 & VAR_5) == 0)
    FUNC_4("pmap_demote_DMAP: invalid PDE");
   if ((*VAR_12 & VAR_3) != 0) {
    if (!FUNC_5(VAR_7, VAR_12, VAR_13))
     FUNC_4("pmap_demote_DMAP: PDE failed");
    VAR_14 = VAR_4;
   }
  }
  if (VAR_14 && VAR_10)
   FUNC_7(VAR_7, VAR_13);
  FUNC_3(VAR_7);
 }
}
