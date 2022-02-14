
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char*,...) ;

int FUNC_4(Dwarf_Die *VAR_8, char *VAR_9, int VAR_10)
{
 Dwarf_Die VAR_11;
 int VAR_12, VAR_13, VAR_14;
 const char *VAR_15 = "";

 if (FUNC_0(VAR_8, &VAR_11) == ((void*)0))
  return -VAR_7;

 VAR_12 = FUNC_2(&VAR_11);
 if (VAR_12 == VAR_0 || VAR_12 == VAR_2)
  VAR_15 = "*";
 else if (VAR_12 == VAR_4) {

  VAR_13 = FUNC_3(VAR_9, VAR_10, "(function_type)");
  return (VAR_13 >= VAR_10) ? -VAR_6 : VAR_13;
 } else {
  if (!FUNC_1(&VAR_11))
   return -VAR_7;
  if (VAR_12 == VAR_5)
   VAR_15 = "union ";
  else if (VAR_12 == VAR_3)
   VAR_15 = "struct ";
  else if (VAR_12 == VAR_1)
   VAR_15 = "enum ";

  VAR_13 = FUNC_3(VAR_9, VAR_10, "%s%s", VAR_15, FUNC_1(&VAR_11));
  return (VAR_13 >= VAR_10) ? -VAR_6 : VAR_13;
 }
 VAR_13 = FUNC_4(&VAR_11, VAR_9, VAR_10);
 if (VAR_13 > 0) {
  VAR_14 = FUNC_3(VAR_9 + VAR_13, VAR_10 - VAR_13, "%s", VAR_15);
  VAR_13 = (VAR_14 >= VAR_10 - VAR_13) ? -VAR_6 : VAR_14 + VAR_13;
 }
 return VAR_13;
}
