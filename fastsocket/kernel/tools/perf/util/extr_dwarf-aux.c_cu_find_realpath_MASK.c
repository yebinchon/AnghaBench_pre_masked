
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Files ;
typedef int Dwarf_Die ;


 char* FUNC_0 (int *,size_t,int *,int *) ;
 int FUNC_1 (int *,int **,size_t*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

const char *FUNC_3(Dwarf_Die *VAR_0, const char *VAR_1)
{
 Dwarf_Files *VAR_2;
 size_t VAR_3, VAR_4;
 const char *VAR_5 = ((void*)0);
 int VAR_6;

 if (!VAR_1)
  return ((void*)0);

 VAR_6 = FUNC_1(VAR_0, &VAR_2, &VAR_3);
 if (VAR_6 != 0)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_0(VAR_2, VAR_4, ((void*)0), ((void*)0));
  if (FUNC_2(VAR_5, VAR_1) == 0)
   break;
 }
 if (VAR_4 == VAR_3)
  return ((void*)0);
 return VAR_5;
}
