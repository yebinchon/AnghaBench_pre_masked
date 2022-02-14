
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Dwarf_Unsigned ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef int Dwarf_Die ;
typedef int Dwarf_Attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int *,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int ,int ,int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int
FUNC_5(Dwarf_Die VAR_4, Dwarf_Unsigned VAR_5, Dwarf_Unsigned *VAR_6)
{
 Dwarf_Error VAR_7;
 Dwarf_Half VAR_8;
 Dwarf_Attribute VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_4, VAR_0, &VAR_9, &VAR_7);
 if (VAR_10 == VAR_1) {
  FUNC_4("dwarf_attr failed: %s", FUNC_1(VAR_7));
  return (VAR_10);
 }
 VAR_10 = FUNC_3(VAR_9, &VAR_8, &VAR_7);
 if (VAR_10 == VAR_1) {
  FUNC_4("dwarf_whatform failed: %s", FUNC_1(VAR_7));
  return (VAR_10);
 }
 if (FUNC_2(2, 0, 0, VAR_8) == VAR_3)
  *VAR_6 += VAR_5;

 return (VAR_2);
}
