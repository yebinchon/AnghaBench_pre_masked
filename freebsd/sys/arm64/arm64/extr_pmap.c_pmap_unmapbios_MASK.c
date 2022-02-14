
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
struct pmap_preinit_mapping {scalar_t__ va; scalar_t__ size; scalar_t__ pa; } ;
typedef int pt_entry_t ;
typedef int pd_entry_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int * FUNC_5 (int *,scalar_t__) ;
 int * FUNC_6 (int ,scalar_t__,int*) ;
 struct pmap_preinit_mapping* VAR_6 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_7 ;

void
FUNC_11(vm_offset_t VAR_8, vm_size_t VAR_9)
{
 struct pmap_preinit_mapping *VAR_10;
 vm_offset_t VAR_11, VAR_12, VAR_13;
 pd_entry_t *VAR_14;
 pt_entry_t *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 bool VAR_20;

 VAR_18 =
    (FUNC_9(VAR_8 + VAR_9, VAR_1) - FUNC_8(VAR_8, VAR_1)) >> VAR_0;
 FUNC_0(VAR_18 > 0, ("pmap_unmapbios: invalid size %lx", VAR_9));


 VAR_20 = 0;
 VAR_19 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
  VAR_10 = VAR_6 + VAR_16;
  if (VAR_10->va == VAR_8) {
   FUNC_0(VAR_10->size == VAR_9,
       ("pmap_unmapbios: size mismatch"));
   VAR_10->va = 0;
   VAR_10->pa = 0;
   VAR_10->size = 0;
   VAR_20 = 1;
   VAR_11 = VAR_19 * VAR_1;
   VAR_13 = FUNC_8(VAR_8, VAR_1) + VAR_11;


   VAR_14 = FUNC_6(VAR_5, VAR_13, &VAR_17);
   FUNC_0(VAR_14 != ((void*)0),
       ("pmap_unmapbios: Invalid page entry, va: 0x%lx",
       VAR_13));
   VAR_15 = FUNC_5(VAR_14, VAR_13);
   FUNC_2(VAR_15);

   if (VAR_19 == (VAR_18 - 1))
    break;
   VAR_19++;
  }
 }
 if (VAR_20) {
  FUNC_3(VAR_5);
  return;
 }


 if (VAR_7) {
  VAR_11 = VAR_8 & VAR_2;
  VAR_9 = FUNC_7(VAR_11 + VAR_9);
  VAR_8 = FUNC_10(VAR_8);

  VAR_14 = FUNC_6(VAR_5, VAR_8, &VAR_17);
  FUNC_0(VAR_14 != ((void*)0),
      ("pmap_unmapbios: Invalid page entry, va: 0x%lx", VAR_8));
  FUNC_0(VAR_17 == 2, ("pmap_unmapbios: Invalid level %d", VAR_17));


                for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12 += VAR_3)
   FUNC_4(VAR_8 + VAR_12);

  FUNC_1(VAR_8, VAR_9);
 }
}
