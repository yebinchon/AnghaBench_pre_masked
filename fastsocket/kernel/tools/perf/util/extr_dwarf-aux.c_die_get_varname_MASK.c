
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dwarf_Die ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,...) ;

int FUNC_4(Dwarf_Die *VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_2("Failed to get type, make it unknown.\n");
  VAR_4 = FUNC_3(VAR_2, VAR_3, "(unknown_type)");
 }
 if (VAR_4 > 0) {
  VAR_5 = FUNC_3(VAR_2 + VAR_4, VAR_3 - VAR_4, "\t%s",
    FUNC_1(VAR_1));
  VAR_4 = (VAR_5 >= VAR_3 - VAR_4) ? -VAR_0 : VAR_5 + VAR_4;
 }
 return VAR_4;
}
