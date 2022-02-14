
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __find_variable_param {int addr; int name; } ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(Dwarf_Die *VAR_5, void *VAR_6)
{
 struct __find_variable_param *VAR_7 = VAR_6;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_5);
 if ((VAR_8 == VAR_3 ||
      VAR_8 == VAR_4) &&
     FUNC_0(VAR_5, VAR_7->name))
  return VAR_1;

 if (FUNC_1(VAR_5, VAR_7->addr))
  return VAR_0;
 else
  return VAR_2;
}
