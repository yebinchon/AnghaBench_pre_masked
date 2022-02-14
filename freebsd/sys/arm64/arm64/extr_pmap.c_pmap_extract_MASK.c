
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int ,int,int*) ;

vm_paddr_t
FUNC_5(pmap_t VAR_8, vm_offset_t VAR_9)
{
 pt_entry_t *VAR_10, VAR_11;
 vm_paddr_t VAR_12;
 int VAR_13;

 VAR_12 = 0;
 FUNC_1(VAR_8);




 VAR_10 = FUNC_4(VAR_8, VAR_9, &VAR_13);
 if (VAR_10 != ((void*)0)) {
  VAR_11 = FUNC_3(VAR_10);
  VAR_12 = VAR_11 & ~VAR_1;
  switch(VAR_13) {
  case 1:
   FUNC_0((VAR_11 & VAR_0) == VAR_2,
       ("pmap_extract: Invalid L1 pte found: %lx",
       VAR_11 & VAR_0));
   VAR_12 |= (VAR_9 & VAR_3);
   break;
  case 2:
   FUNC_0((VAR_11 & VAR_0) == VAR_4,
       ("pmap_extract: Invalid L2 pte found: %lx",
       VAR_11 & VAR_0));
   VAR_12 |= (VAR_9 & VAR_5);
   break;
  case 3:
   FUNC_0((VAR_11 & VAR_0) == VAR_7,
       ("pmap_extract: Invalid L3 pte found: %lx",
       VAR_11 & VAR_0));
   VAR_12 |= (VAR_9 & VAR_6);
   break;
  }
 }
 FUNC_2(VAR_8);
 return (VAR_12);
}
