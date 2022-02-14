
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (char*,int ,int ,char*,int *,char*,int ,int *) ;
 int FUNC_2 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_3 (char*,int ,int ,int *,char*,int *) ;
 int FUNC_4 (int ,int *) ;
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
 int VAR_16 ;
 int VAR_17 ;

void
FUNC_5 (void)
{






  FUNC_1 ("serial", VAR_0, VAR_8, "Set default serial/parallel port configuration.",

    &VAR_9, "set serial ",
    0 ,
    &VAR_13);

  FUNC_1 ("serial", VAR_0, VAR_10, "Show default serial/parallel port configuration.",

    &VAR_11, "show serial ",
    0 ,
    &VAR_15);

  FUNC_4
    (FUNC_2 ("remotelogfile", VAR_5,
    VAR_16, (char *) &VAR_7,
    "Set filename for remote session recording.\nThis file is used to record the remote session for future playback\nby gdbserver.",


    &VAR_13),
     &VAR_15);

  FUNC_4
    (FUNC_3 ("remotelogbase", VAR_5,
         VAR_4, &VAR_6,
         "Set numerical base for remote session logging",
         &VAR_13),
     &VAR_15);

  FUNC_4 (FUNC_2 ("serial",
      VAR_0,
      VAR_17,
      (char *)&VAR_3,
      "Set serial debugging.\nWhen non-zero, serial port debugging is enabled.", &VAR_12),

       &VAR_14);
}
