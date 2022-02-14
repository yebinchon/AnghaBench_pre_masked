
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(pmap_t VAR_2, vm_offset_t VAR_3, pd_entry_t VAR_4)
{
 if ((VAR_4 & VAR_1) != 0)
  FUNC_1(VAR_2, VAR_3, VAR_3 + VAR_0 - 1);
 else
  FUNC_0(VAR_2, VAR_3);
}
