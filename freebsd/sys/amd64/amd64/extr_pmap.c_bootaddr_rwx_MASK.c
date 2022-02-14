
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int pt_entry_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline pt_entry_t
FUNC_2(vm_paddr_t VAR_7)
{
 if (VAR_7 < FUNC_1(VAR_4 - VAR_0) ||
     VAR_7 >= FUNC_1(VAR_2 - VAR_0))
  return (VAR_1 | VAR_6);







 if (VAR_7 >= FUNC_1(VAR_3 - VAR_0))
  return (VAR_1 | VAR_6);
 if (VAR_7 < FUNC_0(VAR_5 - VAR_0))
  return (0);
 return (VAR_6);
}
