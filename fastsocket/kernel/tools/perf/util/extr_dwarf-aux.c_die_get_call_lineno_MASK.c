
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Dwarf_Word ;
typedef int Dwarf_Die ;
typedef int Dwarf_Attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,scalar_t__*) ;

int FUNC_2(Dwarf_Die *VAR_2)
{
 Dwarf_Attribute VAR_3;
 Dwarf_Word VAR_4;

 if (!FUNC_0(VAR_2, VAR_0, &VAR_3))
  return -VAR_1;

 FUNC_1(&VAR_3, &VAR_4);
 return (int)VAR_4;
}
