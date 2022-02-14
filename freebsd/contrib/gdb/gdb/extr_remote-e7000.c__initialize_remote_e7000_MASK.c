
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void
FUNC_5 (void)
{
  FUNC_4 ();
  FUNC_3 (&VAR_5);

  FUNC_0 ("e7000", VAR_0, VAR_1,
    "Send a command to the e7000 monitor.");

  FUNC_0 ("ftplogin", VAR_0, VAR_4,
    "Login to machine and change to directory.");

  FUNC_0 ("ftpload", VAR_0, VAR_3,
    "Fetch and load a file from previously described place.");

  FUNC_0 ("drain", VAR_0, VAR_2,
    "Drain pending e7000 text buffers.");

  FUNC_2 (FUNC_1 ("usehardbreakpoints", VAR_6,
    VAR_10, (char *) &VAR_9,
 "Set use of hardware breakpoints for all breakpoints.\n", &VAR_7),
       &VAR_8);
}
