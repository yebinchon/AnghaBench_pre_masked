
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char**,char*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 char* VAR_13 ;
 int FUNC_14 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (char*) ;

int
FUNC_18 (int VAR_16, char **VAR_17)
{
  extern int FUNC_19 (char *);
  char *VAR_18 = ((void*)0);
  int VAR_19;

  VAR_13 = *VAR_17;
  FUNC_17 (VAR_13);

  while ((VAR_19 = FUNC_5 (VAR_16, VAR_17, "vVdh", VAR_10, 0)) != VAR_0)
    switch (VAR_19)
      {
      case 128:
 VAR_18 = VAR_11;
 break;
      case 'V':
      case 'v':
 FUNC_12 ();
 break;
      case 'd':
 VAR_1 = 1;
 break;
      case 'h':
      case '?':
 FUNC_16 (VAR_14, 0);
      default:
      case 0:
 break;
      }

  if (VAR_12 != VAR_16)
    FUNC_16 (VAR_15, 1);

  if (VAR_18 != ((void*)0))
    if (FUNC_19 (VAR_18) != 0)
      FUNC_3 (FUNC_0("unable to change directory to \"%s\", errno = %s\n"),
     VAR_18, FUNC_15 (VAR_2));

  FUNC_7 ();
  FUNC_6 ();

  FUNC_14 (VAR_3);
  FUNC_14 (VAR_4);
  FUNC_14 (VAR_6);
  FUNC_14 (VAR_7);
  FUNC_14 (VAR_8);
  FUNC_14 (VAR_9);
  FUNC_14 (VAR_5);

  FUNC_1 ();

  FUNC_13 ("/* This file is automatically generated by ia64-gen.  Do not edit!  */\n");
  FUNC_11 ();
  FUNC_9 ();
  FUNC_8 ();
  FUNC_10 ();

  FUNC_4 ();

  FUNC_2 (0);
}
