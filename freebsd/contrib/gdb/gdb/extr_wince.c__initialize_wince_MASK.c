
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 struct cmd_list_element* FUNC_0 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_1 (struct cmd_list_element*,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct cmd_list_element*,int (*) (int *,int )) ;
 int FUNC_5 (int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (scalar_t__) ;

void
FUNC_7 (void)
{
  struct cmd_list_element *VAR_14;
  FUNC_3 ();

  FUNC_1
    (FUNC_0 ((char *) "remotedirectory", VAR_6,
    VAR_13, (char *) &VAR_8,
    (char *) "Set directory for remote upload.\n",
    &VAR_10),
     &VAR_11);
  VAR_8 = FUNC_6 (VAR_8);

  VAR_14 = FUNC_0 ((char *) "remoteupload", VAR_6,
       VAR_13, (char *) &VAR_9,
        (char *) "Set how to upload executables to remote device.\n",
       &VAR_10);
  FUNC_1 (VAR_14, &VAR_11);
  FUNC_4 (VAR_14, FUNC_5);
  FUNC_5 (((void*)0), 0);

  FUNC_1
    (FUNC_0 ((char *) "debugexec", VAR_1, VAR_12,
    (char *) &VAR_4,
       (char *) "Set whether to display execution in child process.",
    &VAR_10),
     &VAR_11);

  FUNC_1
    (FUNC_0 ((char *) "remoteaddhost", VAR_1, VAR_12,
    (char *) &VAR_7,
    (char *) "Set whether to add this host to remote stub arguments for\ndebugging over a network.", &VAR_10),


     &VAR_11);

  FUNC_1
    (FUNC_0 ((char *) "debugevents", VAR_1, VAR_12,
    (char *) &VAR_2,
   (char *) "Set whether to display kernel events in child process.",
    &VAR_10),
     &VAR_11);

  FUNC_1
    (FUNC_0 ((char *) "debugmemory", VAR_1, VAR_12,
    (char *) &VAR_5,
 (char *) "Set whether to display memory accesses in child process.",
    &VAR_10),
     &VAR_11);

  FUNC_1
    (FUNC_0 ((char *) "debugexceptions", VAR_1, VAR_12,
    (char *) &VAR_3,
      (char *) "Set whether to display kernel exceptions in child process.",
    &VAR_10),
     &VAR_11);

  FUNC_2 (&VAR_0);
}
