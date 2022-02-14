
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 struct cmd_list_element* FUNC_0 (char*,int ,int ,char*,int *) ;
 int FUNC_1 (char*,int ,int ,char*) ;
 int FUNC_2 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 (struct cmd_list_element*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void
FUNC_7 (void)
{
  struct cmd_list_element *VAR_13;

  FUNC_5 ();

  if (!VAR_3)
    {
      VAR_13 = FUNC_0 ("file", VAR_0, VAR_6,
     "Use FILE as program to be debugged.\nIt is read for its symbols, for getting the contents of pure memory,\nand it is the program executed when you use the `run' command.\nIf FILE cannot be found as specified, your execution directory path\n($PATH) is searched for a command of that name.\nNo arg means to have no executable file and no symbols.", &VAR_2);





      FUNC_6 (VAR_13, VAR_7);
    }

  VAR_13 = FUNC_0 ("exec-file", VAR_0, VAR_4,
        "Use FILE as program for getting contents of pure memory.\nIf FILE cannot be found as specified, your execution directory path\nis searched for a command of that name.\nNo arg means have no executable file.", &VAR_2);



  FUNC_6 (VAR_13, VAR_7);

  FUNC_1 ("section", VAR_0, VAR_8,
    "Change the base address of section SECTION of the exec file to ADDR.\nThis can be used if the exec file does not contain section addresses,\n(such as in the a.out format), or when the addresses specified in the\nfile itself are wrong.  Each section must be changed separately.  The\n``info files'' command lists all the sections and their addresses.");





  FUNC_3
    (FUNC_2 ("write", VAR_1, VAR_11, (char *) &VAR_12,
    "Set writing into executable and core files.",
    &VAR_9),
     &VAR_10);

  FUNC_4 (&VAR_5);
}
