
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_opt_pass {int static_pass_number; int letter; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char const*,int ,char*,...) ;
 int FUNC_1 (char*,char*,char*,int,int ) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_3 (struct tree_opt_pass *VAR_4, bool VAR_5, int VAR_6)
{
  char *VAR_7, *VAR_8, *VAR_9;
  const char *VAR_10;
  char VAR_11[10];
  int VAR_12;


  VAR_11[0] = '\0';
  if (VAR_4->static_pass_number != -1)
    FUNC_2 (VAR_11, "%d", ((int) VAR_4->static_pass_number < 0
    ? 1 : VAR_4->static_pass_number));

  VAR_7 = FUNC_0 (".", VAR_4->name, VAR_11, ((void*)0));
  if (VAR_5)
    VAR_10 = "ipa-", VAR_12 = VAR_1;
  else if (VAR_6 & VAR_0)
    VAR_10 = "tree-", VAR_12 = VAR_3;
  else
    VAR_10 = "rtl-", VAR_12 = VAR_2;

  VAR_8 = FUNC_0 (VAR_10, VAR_4->name, VAR_11, ((void*)0));
  VAR_9 = FUNC_0 (VAR_10, VAR_4->name, ((void*)0));
  VAR_4->static_pass_number = FUNC_1 (VAR_7, VAR_8, VAR_9,
                                            VAR_12, VAR_4->letter);
}
