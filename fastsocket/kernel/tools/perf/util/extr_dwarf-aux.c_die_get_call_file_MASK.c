
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Files ;
typedef int Dwarf_Die ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 char const* FUNC_2 (int *,int,int *,int *) ;
 scalar_t__ FUNC_3 (int *,int **,int *) ;

const char *FUNC_4(Dwarf_Die *VAR_0)
{
 Dwarf_Die VAR_1;
 Dwarf_Files *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 < 0 || !FUNC_1(VAR_0, &VAR_1, ((void*)0), ((void*)0)) ||
     FUNC_3(&VAR_1, &VAR_2, ((void*)0)) != 0)
  return ((void*)0);

 return FUNC_2(VAR_2, VAR_3, ((void*)0), ((void*)0));
}
