
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int) ;

Dwarf_Die *FUNC_3(Dwarf_Die *VAR_3,
     int (*VAR_4)(Dwarf_Die *, void *),
     void *VAR_5, Dwarf_Die *VAR_6)
{
 Dwarf_Die VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_3, VAR_6);
 if (VAR_8 != 0)
  return ((void*)0);

 do {
  VAR_8 = VAR_4(VAR_6, VAR_5);
  if (VAR_8 == VAR_1)
   return VAR_6;

  if ((VAR_8 & VAR_0) &&
      FUNC_3(VAR_6, VAR_4, VAR_5, &VAR_7)) {
   FUNC_2(VAR_6, &VAR_7, sizeof(Dwarf_Die));
   return VAR_6;
  }
 } while ((VAR_8 & VAR_2) &&
   FUNC_1(VAR_6, VAR_6) == 0);

 return ((void*)0);
}
