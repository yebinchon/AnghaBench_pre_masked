
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*,int ,int ,char*,struct cmd_list_element**) ;
 int FUNC_1 (char*,int ,int ,char*,struct cmd_list_element**,char*,int ,struct cmd_list_element**) ;
 int FUNC_2 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_4 (void)
{
  extern struct cmd_list_element *VAR_10;
  static struct cmd_list_element *VAR_11 = ((void*)0);

  FUNC_3 (FUNC_2 ("remotetimeout", VAR_5,
      VAR_9, (char *) &VAR_6,
     "Set timeout value for remote read.\n", &VAR_7),
       &VAR_8);

  FUNC_1 ("ocd", VAR_4, VAR_0, "", &VAR_11, "ocd ",
    0, &VAR_10);

  FUNC_0 ("reset", VAR_4, VAR_1, "", &VAR_11);
  FUNC_0 ("restart", VAR_4, VAR_2, "", &VAR_11);
  FUNC_0 ("update-flash", VAR_4, VAR_3, "", &VAR_11);
}
