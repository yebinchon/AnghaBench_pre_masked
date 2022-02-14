
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_5 (void)
{
  FUNC_4 ();
  FUNC_3 (&VAR_3);

  FUNC_2 (FUNC_1 ("sdstimeout", VAR_1,
      VAR_7, (char *) &VAR_4,
        "Set timeout value for sds read.\n", &VAR_5),
       &VAR_6);

  FUNC_0 ("sds", VAR_0, VAR_2,
    "Send a command to the SDS monitor.");
}
