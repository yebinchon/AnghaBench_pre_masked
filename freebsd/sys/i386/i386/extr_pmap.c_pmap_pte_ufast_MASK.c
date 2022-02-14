
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static pt_entry_t
FUNC_6(pmap_t VAR_9, vm_offset_t VAR_10, pd_entry_t VAR_11)
{
 pt_entry_t *VAR_12, VAR_13, *VAR_14;

 FUNC_1(VAR_9, VAR_0);
 VAR_11 &= VAR_3;
 FUNC_2();
 VAR_12 = (pt_entry_t *)FUNC_0(VAR_7);
 if ((*VAR_12 & VAR_3) != VAR_11) {
  *VAR_12 = VAR_11 | VAR_5 | VAR_6 | VAR_2 | VAR_4;
  FUNC_5((void *)FUNC_0(VAR_8));
 }
 VAR_14 = (pt_entry_t *)FUNC_0(VAR_8) + (FUNC_4(VAR_10) &
     (VAR_1 - 1));
 VAR_13 = *VAR_14;
 FUNC_3();
 return (VAR_13);
}
