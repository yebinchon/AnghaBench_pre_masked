
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static Dwarf_Die *FUNC_2(Dwarf_Die *VAR_4, Dwarf_Die *VAR_5)
{
 int VAR_6;

 do {
  VAR_4 = FUNC_0(VAR_4, VAR_5);
  if (!VAR_4)
   break;
  VAR_6 = FUNC_1(VAR_4);
 } while (VAR_6 == VAR_0 ||
   VAR_6 == VAR_1 ||
   VAR_6 == VAR_3 ||
   VAR_6 == VAR_2);

 return VAR_4;
}
