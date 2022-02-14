
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int pt_entry_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 size_t FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,int*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_8(pd_entry_t *VAR_5, vm_offset_t VAR_6)
{
 pd_entry_t *VAR_7, VAR_8;
 pt_entry_t *VAR_9, VAR_10;
 vm_offset_t VAR_11;
 int VAR_12 = 0;




 VAR_7 = &VAR_5[FUNC_0(VAR_6)];
 VAR_8 = *VAR_7;

 if (FUNC_5(VAR_8)) {
  if ((VAR_8 & VAR_1) != VAR_3) {
   *VAR_7 = (VAR_8 & ~VAR_1) |
       VAR_3;
   FUNC_1(VAR_7);
   FUNC_2((vm_offset_t)VAR_7,
       sizeof(*VAR_7));
   FUNC_3((vm_offset_t)VAR_7,
       sizeof(*VAR_7));
   VAR_12 = 1;
  }
 } else {
  VAR_11 = (vm_paddr_t)(VAR_8 & VAR_0);
  VAR_9 = (pt_entry_t *)FUNC_4(VAR_11);
  if (VAR_9 == ((void*)0))
   FUNC_7("pmap_bootstrap: No L2 for L2 @ va %p\n", VAR_9);

  VAR_9 = &VAR_9[FUNC_6(VAR_6)];
  VAR_10 = *VAR_9;
  if ((VAR_10 & VAR_2) != VAR_4) {
   *VAR_9 = (VAR_10 & ~VAR_2) |
       VAR_4;
   FUNC_1(VAR_9);
   FUNC_2((vm_offset_t)VAR_9,
       sizeof(*VAR_9));
   FUNC_3((vm_offset_t)VAR_9,
       sizeof(*VAR_9));
   VAR_12 = 1;
  }
 }

 return (VAR_12);
}
