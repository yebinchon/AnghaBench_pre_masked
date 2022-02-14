
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*,int ,int ,char*,int *) ;
 struct cmd_list_element* FUNC_1 (char*,int ,int ,char*) ;
 int FUNC_2 (char*,char*,int ,int) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int ,int ,char*,int *,char*,int ,int *) ;
 int FUNC_6 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 () ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (struct cmd_list_element*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

void
FUNC_11 (void)
{
  struct cmd_list_element *VAR_22;

  FUNC_9 ();

  VAR_22 = FUNC_1 ("dll-symbols", VAR_2, VAR_10,
        "Load dll library symbols from FILE.");
  FUNC_10 (VAR_22, VAR_11);

  FUNC_2 ("sharedlibrary", "dll-symbols", VAR_1, 1);

  FUNC_7 (FUNC_6 ("shell", VAR_4, VAR_21,
      (char *) &VAR_20,
   "Set use of shell to start subprocess.",
      &VAR_18),
       &VAR_19);

  FUNC_7 (FUNC_6 ("new-console", VAR_4, VAR_21,
      (char *) &VAR_16,
   "Set creation of new console when creating child process.",
      &VAR_18),
       &VAR_19);

  FUNC_7 (FUNC_6 ("new-group", VAR_4, VAR_21,
      (char *) &VAR_17,
     "Set creation of new group when creating child process.",
      &VAR_18),
       &VAR_19);

  FUNC_7 (FUNC_6 ("debugexec", VAR_4, VAR_21,
      (char *) &VAR_7,
         "Set whether to display execution in child process.",
      &VAR_18),
       &VAR_19);

  FUNC_7 (FUNC_6 ("debugevents", VAR_4, VAR_21,
      (char *) &VAR_5,
     "Set whether to display kernel events in child process.",
      &VAR_18),
       &VAR_19);

  FUNC_7 (FUNC_6 ("debugmemory", VAR_4, VAR_21,
      (char *) &VAR_8,
   "Set whether to display memory accesses in child process.",
      &VAR_18),
       &VAR_19);

  FUNC_7 (FUNC_6 ("debugexceptions", VAR_4, VAR_21,
      (char *) &VAR_6,
        "Set whether to display kernel exceptions in child process.",
      &VAR_18),
       &VAR_19);

  FUNC_3 ("dll", VAR_12, "Status of loaded DLLs.");
  FUNC_4 ("sharedlibrary", "dll", 1);

  FUNC_5 ("w32", VAR_3, VAR_14,
    "Print information specific to Win32 debugging.",
    &VAR_13, "info w32 ", 0, &VAR_15);

  FUNC_0 ("selector", VAR_3, VAR_9,
    "Display selectors infos.",
    &VAR_13);

  FUNC_8 (&VAR_0);
}
