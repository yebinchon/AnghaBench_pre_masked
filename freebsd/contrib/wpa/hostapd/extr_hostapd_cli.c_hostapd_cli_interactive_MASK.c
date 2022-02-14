
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int ,int ,int ,int *,char*,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,int ,int *,int *) ;
 int FUNC_6 () ;
 char* FUNC_7 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*,int,char*,char*,char const*) ;
 int FUNC_11 (char const*) ;
 int VAR_6 ;
 int FUNC_12 (char*) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_13(void)
{
 char *VAR_8 = ((void*)0);
 char *VAR_9;

 FUNC_12("\nInteractive mode\n\n");




 VAR_9 = FUNC_7("HOME");

 if (VAR_9) {
  const char *VAR_10 = ".hostapd_cli_history";
  int VAR_11 = FUNC_11(VAR_9) + 1 + FUNC_11(VAR_10) + 1;
  VAR_8 = FUNC_9(VAR_11);
  if (VAR_8)
   FUNC_10(VAR_8, VAR_11, "%s/%s", VAR_9, VAR_10);
 }

 FUNC_4(VAR_4, ((void*)0));
 FUNC_2(VAR_1, VAR_3,
    VAR_2, ((void*)0), VAR_8, ((void*)0));
 FUNC_5(VAR_6, 0, VAR_5, ((void*)0), ((void*)0));

 FUNC_6();

 FUNC_0(&VAR_7);
 FUNC_1(VAR_8, ((void*)0));
 FUNC_8(VAR_8);
 FUNC_3(VAR_5, ((void*)0), ((void*)0));
}
