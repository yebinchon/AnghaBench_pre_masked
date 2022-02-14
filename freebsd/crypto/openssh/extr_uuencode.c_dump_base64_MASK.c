
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int const*,int,char*,int) ;
 char* FUNC_3 (int *,int,int) ;

void
FUNC_4(FILE *VAR_0, const u_char *VAR_1, u_int VAR_2)
{
 char *VAR_3;
 int VAR_4, VAR_5;

 if (VAR_2 > 65536) {
  FUNC_0(VAR_0, "dump_base64: len > 65536\n");
  return;
 }
 VAR_3 = FUNC_3(((void*)0), 2, VAR_2);
 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, 2*VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  FUNC_0(VAR_0, "%c", VAR_3[VAR_4]);
  if (VAR_4 % 70 == 69)
   FUNC_0(VAR_0, "\n");
 }
 if (VAR_4 % 70 != 69)
  FUNC_0(VAR_0, "\n");
 FUNC_1(VAR_3);
}
