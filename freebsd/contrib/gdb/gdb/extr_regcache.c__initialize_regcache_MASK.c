
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,char*,int *) ;
 int FUNC_2 (char*,int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ) ;
 int VAR_13 ;

void
FUNC_6 (void)
{
  VAR_12 = FUNC_5 (VAR_5);
  FUNC_0 (VAR_2);
  FUNC_0 (VAR_4);
  FUNC_0 (VAR_3);
  FUNC_3 (((void*)0), 0, VAR_0);

  FUNC_2 ("flushregs", VAR_1, VAR_11,
    "Force gdb to flush its register cache (maintainer command)");



  VAR_13 = FUNC_4 (-1);

  FUNC_1 ("registers", VAR_1,
    VAR_9,
    "Print the internal register configuration.Takes an optional file parameter.",

    &VAR_10);
  FUNC_1 ("raw-registers", VAR_1,
    VAR_7,
    "Print the internal register configuration including raw values.Takes an optional file parameter.",

    &VAR_10);
  FUNC_1 ("cooked-registers", VAR_1,
    VAR_6,
    "Print the internal register configuration including cooked values.Takes an optional file parameter.",

    &VAR_10);
  FUNC_1 ("register-groups", VAR_1,
    VAR_8,
    "Print the internal register configuration including each register's group.Takes an optional file parameter.",

    &VAR_10);

}
