
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int pt1_entry_t ;
typedef scalar_t__ pmap_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int ,int,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool
FUNC_6(pmap_t VAR_13, vm_offset_t VAR_14, vm_page_t VAR_15, vm_prot_t VAR_16)
{
 pt1_entry_t VAR_17;
 vm_paddr_t VAR_18;

 FUNC_1(VAR_13, VAR_1);
 VAR_18 = FUNC_3(VAR_15);
 VAR_17 = FUNC_2(VAR_18, VAR_6 | VAR_8, FUNC_0(FUNC_5(VAR_15)));
 if ((VAR_16 & VAR_11) == 0)
  VAR_17 |= VAR_7;
 if (VAR_14 < VAR_10)
  VAR_17 |= VAR_9;
 if (VAR_13 != VAR_12)
  VAR_17 |= VAR_5;
 return (FUNC_4(VAR_13, VAR_14, VAR_17, VAR_4 |
     VAR_3 | VAR_2, VAR_15) == VAR_0);
}
