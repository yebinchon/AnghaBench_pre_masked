
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int u_long ;
typedef int pt_entry_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* FUNC_2 (int) ;
 int* FUNC_3 (int*,int) ;
 int* FUNC_4 (int*,int) ;

__attribute__((used)) static vm_paddr_t
FUNC_5(vm_offset_t VAR_10)
{
 pdp_entry_t *VAR_11, VAR_12;
 pd_entry_t *VAR_13, VAR_14;
 pt_entry_t *VAR_15, VAR_16;

 FUNC_0(FUNC_1(VAR_10),
     ("not largemap range %#lx", (u_long)VAR_10));
 VAR_11 = FUNC_2(VAR_10);
 VAR_12 = *VAR_11;
 FUNC_0((VAR_12 & VAR_8) != 0,
     ("invalid pdp va %#lx pdpe %#lx pdp %#lx", VAR_10,
     (u_long)VAR_11, VAR_12));
 if ((VAR_12 & VAR_7) != 0) {
  FUNC_0((VAR_9 & VAR_0) != 0,
      ("no 1G pages, va %#lx pdpe %#lx pdp %#lx", VAR_10,
      (u_long)VAR_11, VAR_12));
  return ((VAR_12 & VAR_6) | (VAR_10 & VAR_2));
 }
 VAR_13 = FUNC_4(VAR_11, VAR_10);
 VAR_14 = *VAR_13;
 FUNC_0((VAR_14 & VAR_8) != 0,
     ("invalid pd va %#lx pde %#lx pd %#lx", VAR_10, (u_long)VAR_13, VAR_14));
 if ((VAR_14 & VAR_7) != 0)
  return ((VAR_14 & VAR_5) | (VAR_10 & VAR_3));
 VAR_15 = FUNC_3(VAR_13, VAR_10);
 VAR_16 = *VAR_15;
 FUNC_0((VAR_16 & VAR_8) != 0,
     ("invalid pte va %#lx pte %#lx pt %#lx", VAR_10, (u_long)VAR_15, VAR_16));
 return ((VAR_16 & VAR_4) | (VAR_10 & VAR_1));
}
