
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stat_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(stat_t *VAR_0, char *VAR_1)
{
 const char *VAR_2 = "";
 char *VAR_3;

 for (VAR_3 = FUNC_2(VAR_1, ","); VAR_3 != ((void*)0); VAR_3 = FUNC_2(((void*)0), ",")) {
  FUNC_0("%s", VAR_2);
  FUNC_1(VAR_0, VAR_3);
  VAR_2 = ",";
 }
 FUNC_0("\n");
}
