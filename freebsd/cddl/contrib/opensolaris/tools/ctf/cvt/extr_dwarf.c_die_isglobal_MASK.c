
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dwarf_t ;
typedef scalar_t__ Dwarf_Signed ;
typedef int Dwarf_Die ;
typedef scalar_t__ Dwarf_Bool ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ,scalar_t__*,int ) ;

__attribute__((used)) static int
FUNC_2(dwarf_t *VAR_3, Dwarf_Die VAR_4)
{
 Dwarf_Signed VAR_5;
 Dwarf_Bool VAR_6;





 if (FUNC_1(VAR_3, VAR_4, VAR_1, &VAR_5, 0))
  return (VAR_5 == VAR_2);
 else
  return (FUNC_0(VAR_3, VAR_4, VAR_0, &VAR_6, 0) && VAR_6);
}
