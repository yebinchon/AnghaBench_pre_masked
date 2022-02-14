
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_3 (char*,int ,int *,char*,char*,int *,int *,int *,int *) ;
 int FUNC_4 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
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

void
FUNC_8 (void)
{
  FUNC_6 ();
  FUNC_7 (&VAR_4);

  FUNC_1 ("target", VAR_11, VAR_9);
  FUNC_1 ("files", VAR_11, VAR_9);

  FUNC_4
    (FUNC_2 ("target", VAR_0, VAR_14,
    (char *) &VAR_12,
    "Set target debugging.\nWhen non-zero, target debugging is enabled.", &VAR_5),

     &VAR_7);

  FUNC_3 ("trust-readonly-sections", VAR_2,
      &VAR_13, "Set mode for reading from readonly sections.\nWhen this mode is on, memory reads from readonly sections (such as .text)\nwill be read from the object file instead of from the target.  This will\nresult in significant performance improvement for remote targets.", "Show mode for reading from readonly sections.\n",





      ((void*)0), ((void*)0),
      &VAR_6, &VAR_8);

  FUNC_0 ("monitor", VAR_1, VAR_3,
    "Send a command to the remote monitor (remote targets only).");

  VAR_10 = FUNC_5 ();
}
