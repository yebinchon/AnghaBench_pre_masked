
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 struct cmd_list_element* FUNC_0 (char*,int ,int ,char*,int *) ;
 struct cmd_list_element* FUNC_1 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_2 (struct cmd_list_element*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 (struct cmd_list_element*,int ) ;
 int FUNC_5 (struct cmd_list_element*,int ) ;
 int FUNC_6 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_7 (void)
{
  struct cmd_list_element *VAR_9;
  VAR_9 = FUNC_0 ("core-file", VAR_0, VAR_2,
        "Use FILE as core dump for examining memory and registers.\nNo arg means have no core file.  This command has been superseded by the\n`target core' and `detach' commands.", &VAR_1);


  FUNC_4 (VAR_9, VAR_3);

  VAR_9 = FUNC_1 ("gnutarget", VAR_0, VAR_8,
     (char *) &VAR_4,
     "Set the current BFD target.\nUse `set gnutarget auto' to specify automatic detection.",

     &VAR_6);
  FUNC_5 (VAR_9, VAR_5);
  FUNC_2 (VAR_9, &VAR_7);

  if (FUNC_3 ("GNUTARGET"))
    FUNC_6 (FUNC_3 ("GNUTARGET"));
  else
    FUNC_6 ("auto");
}
