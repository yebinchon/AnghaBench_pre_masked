
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*,char*,int ,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,char*,int *,char*,int ,int *) ;
 struct cmd_list_element* FUNC_3 (char*,int ,int ,char*,char*,int *) ;
 struct cmd_list_element* FUNC_4 (struct cmd_list_element*,int *) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* FUNC_5 (char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct cmd_list_element*,int ) ;
 int FUNC_7 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (char*) ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

void
FUNC_9 (void)
{
  struct cmd_list_element *VAR_25, *VAR_26;



  VAR_25 = FUNC_3 ("language", VAR_2, VAR_24,
       (char *) &VAR_3,
       "Set the current source language.",
       &VAR_14);
  VAR_26 = FUNC_4 (VAR_25, &VAR_21);
  FUNC_6 (VAR_25, VAR_10);
  FUNC_6 (VAR_26, VAR_17);

  FUNC_2 ("check", VAR_6, VAR_9,
    "Set the status of the type/range checker.",
    &VAR_13, "set check ", 0, &VAR_14);
  FUNC_0 ("c", "check", VAR_6, 1, &VAR_14);
  FUNC_0 ("ch", "check", VAR_6, 1, &VAR_14);

  FUNC_2 ("check", VAR_6, VAR_16,
    "Show the status of the type/range checker.",
    &VAR_20, "show check ", 0, &VAR_21);
  FUNC_0 ("c", "check", VAR_6, 1, &VAR_21);
  FUNC_0 ("ch", "check", VAR_6, 1, &VAR_21);

  VAR_25 = FUNC_3 ("type", VAR_2, VAR_24,
       (char *) &VAR_22,
       "Set type checking.  (on/warn/off/auto)",
       &VAR_13);
  VAR_26 = FUNC_4 (VAR_25, &VAR_20);
  FUNC_6 (VAR_25, VAR_12);
  FUNC_6 (VAR_26, VAR_19);

  VAR_25 = FUNC_3 ("range", VAR_2, VAR_24,
       (char *) &VAR_7,
       "Set range checking.  (on/warn/off/auto)",
       &VAR_13);
  VAR_26 = FUNC_4 (VAR_25, &VAR_20);
  FUNC_6 (VAR_25, VAR_11);
  FUNC_6 (VAR_26, VAR_18);

  VAR_25 = FUNC_3 ("case-sensitive", VAR_2, VAR_24,
                     (char *) &VAR_1,
                     "Set case sensitivity in name search.  (on/off/auto)\nFor Fortran the default is off; for other languages the default is on.",

                     &VAR_14);
  VAR_26 = FUNC_4 (VAR_25, &VAR_21);
  FUNC_6 (VAR_25, VAR_8);
  FUNC_6 (VAR_26, VAR_15);

  FUNC_1 (&VAR_23);
  FUNC_1 (&VAR_5);
  FUNC_1 (&VAR_0);

  VAR_3 = FUNC_5 ("auto", FUNC_8 ("auto"));
  VAR_22 = FUNC_5 ("auto", FUNC_8 ("auto"));
  VAR_7 = FUNC_5 ("auto", FUNC_8 ("auto"));
  VAR_1 = FUNC_5 ("auto",FUNC_8 ("auto"));


  FUNC_7 (VAR_4);
}
