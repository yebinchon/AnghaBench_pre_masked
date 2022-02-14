
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tdesc_t ;
typedef int dwarf_t ;
typedef int Dwarf_Off ;
typedef int Dwarf_Half ;
typedef int Dwarf_Die ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int *,int ) ;

__attribute__((used)) static tdesc_t *
FUNC_3(dwarf_t *VAR_0, Dwarf_Die VAR_1, Dwarf_Half VAR_2)
{
 Dwarf_Off VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 tdesc_t *VAR_4;

 if ((VAR_4 = FUNC_2(VAR_0, VAR_3)) != ((void*)0))
  return (VAR_4);

 return (FUNC_0(VAR_0, VAR_3));
}
