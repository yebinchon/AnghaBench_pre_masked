
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_cli_cmd {char* usage; int cmd; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_0, const struct hostapd_cli_cmd *VAR_1,
      const char *VAR_2)
{
 char VAR_3;
 size_t VAR_4;

 if (VAR_1->usage == ((void*)0))
  return;
 FUNC_0(VAR_0, "%s%s ", VAR_2, VAR_1->cmd);
 for (VAR_4 = 0; (VAR_3 = VAR_1->usage[VAR_4]); VAR_4++) {
  FUNC_0(VAR_0, "%c", VAR_3);
  if (VAR_3 == '\n')
   FUNC_0(VAR_0, "%s", VAR_2);
 }
 FUNC_0(VAR_0, "\n");
}
