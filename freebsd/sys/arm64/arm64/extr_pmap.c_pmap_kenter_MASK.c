
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int,int) ;
 int* FUNC_3 (int *,int) ;
 int FUNC_4 (int*,int) ;
 int * FUNC_5 (int ,int,int*) ;

void
FUNC_6(vm_offset_t VAR_9, vm_size_t VAR_10, vm_paddr_t VAR_11, int VAR_12)
{
 pd_entry_t *VAR_13;
 pt_entry_t *VAR_14, VAR_15;
 vm_offset_t VAR_16;
 int VAR_17;

 FUNC_1((VAR_11 & VAR_4) == 0,
    ("pmap_kenter: Invalid physical address"));
 FUNC_1((VAR_9 & VAR_4) == 0,
    ("pmap_kenter: Invalid virtual address"));
 FUNC_1((VAR_10 & VAR_6) == 0,
     ("pmap_kenter: Mapping is not page-sized"));

 VAR_15 = VAR_0 | FUNC_0(VAR_12) | VAR_5;
 if (VAR_12 == VAR_3)
  VAR_15 |= VAR_2;
 else
  VAR_15 |= VAR_1;

 VAR_16 = VAR_9;
 while (VAR_10 != 0) {
  VAR_13 = FUNC_5(VAR_8, VAR_16, &VAR_17);
  FUNC_1(VAR_13 != ((void*)0),
      ("pmap_kenter: Invalid page entry, va: 0x%lx", VAR_16));
  FUNC_1(VAR_17 == 2, ("pmap_kenter: Invalid level %d", VAR_17));

  VAR_14 = FUNC_3(VAR_13, VAR_16);
  FUNC_4(VAR_14, (VAR_11 & ~VAR_4) | VAR_15);

  VAR_16 += VAR_7;
  VAR_11 += VAR_7;
  VAR_10 -= VAR_7;
 }
 FUNC_2(VAR_8, VAR_9, VAR_16);
}
