
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*,int ,int ,char*,struct cmd_list_element**) ;
 int FUNC_1 (char*,int ,int ,char*,struct cmd_list_element**,char*,int ,int *) ;
 int FUNC_2 (char*,int ,int *,char*,char*,int *,int *,struct cmd_list_element**,struct cmd_list_element**) ;
 int FUNC_3 (char*,int ,int ,int *,char*,char*,int *,int *,struct cmd_list_element**,struct cmd_list_element**) ;
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
 int VAR_10 ;
 int FUNC_4 (char*) ;

void
FUNC_5 (void)
{
  static struct cmd_list_element *VAR_11, *VAR_12;


  FUNC_1 ("logging", VAR_0, VAR_4,
    "Set logging options", &VAR_11,
    "set logging ", 0, &VAR_7);
  FUNC_1 ("logging", VAR_0, VAR_8,
    "Show logging options", &VAR_12,
    "show logging ", 0, &VAR_9);
  FUNC_2 ("overwrite", VAR_0, &VAR_2,
      "Set whether logging overwrites or appends "
      "to the log file.\n",
      "Show whether logging overwrites or appends "
      "to the log file.\n",
      ((void*)0), ((void*)0), &VAR_11, &VAR_12);
  FUNC_2 ("redirect", VAR_0, &VAR_3,
      "Set the logging output mode.\n"
      "If redirect is off, output will go to both the "
      "screen and the log file.\n"
      "If redirect is on, output will go only to the log "
      "file.",
      "Show the logging output mode.\n"
      "If redirect is off, output will go to both the "
      "screen and the log file.\n"
      "If redirect is on, output will go only to the log "
      "file.",
      ((void*)0), ((void*)0), &VAR_11, &VAR_12);
  FUNC_3 ("file", VAR_0, VAR_10, &VAR_1,
     "Set the current logfile.", "Show the current logfile.",
     ((void*)0), ((void*)0), &VAR_11, &VAR_12);
  FUNC_0 ("on", VAR_0, VAR_6,
    "Enable logging.", &VAR_11);
  FUNC_0 ("off", VAR_0, VAR_5,
    "Disable logging.", &VAR_11);

  VAR_1 = FUNC_4 ("gdb.txt");
}
