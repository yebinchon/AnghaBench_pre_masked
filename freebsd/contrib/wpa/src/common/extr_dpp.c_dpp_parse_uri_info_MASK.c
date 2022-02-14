
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_bootstrap_info {char* info; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,...) ;

int FUNC_6(struct dpp_bootstrap_info *VAR_1, const char *VAR_2)
{
 const char *VAR_3;

 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_3(VAR_2, ';');
 if (!VAR_3)
  VAR_3 = VAR_2 + FUNC_4(VAR_2);
 VAR_1->info = FUNC_1(VAR_3 - VAR_2 + 1);
 if (!VAR_1->info)
  return -1;
 FUNC_2(VAR_1->info, VAR_2, VAR_3 - VAR_2);
 VAR_1->info[VAR_3 - VAR_2] = '\0';
 FUNC_5(VAR_0, "DPP: URI(information): %s", VAR_1->info);
 if (!FUNC_0(VAR_1->info)) {
  FUNC_5(VAR_0, "DPP: Invalid URI information payload");
  return -1;
 }

 return 0;
}
