
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int,char**,char*,int ,int ) ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (char*) ;

int
FUNC_11 (int VAR_9, char **VAR_10)
{
  extern int FUNC_12 (char *);
  char *VAR_11 = ((void*)0);
  int VAR_12;

  VAR_6 = *VAR_10;
  FUNC_10 (VAR_6);

  while ((VAR_12 = FUNC_3 (VAR_9, VAR_10, "vVdh", VAR_3, 0)) != VAR_0)
    switch (VAR_12)
      {
      case 128:
 VAR_11 = VAR_4;
 break;
      case 'V':
      case 'v':
 FUNC_4 ();
 break;
      case 'd':
 VAR_1 = 1;
 break;
      case 'h':
      case '?':
 FUNC_9 (VAR_7, 0);
      default:
      case 0:
 break;
      }

  if (VAR_5 != VAR_9)
    FUNC_9 (VAR_8, 1);

  if (VAR_11 != ((void*)0))
    if (FUNC_12 (VAR_11) != 0)
      FUNC_2 (FUNC_0("unable to change directory to \"%s\", errno = %s\n"),
     VAR_11, FUNC_8 (VAR_2));

  FUNC_5 ("/* This file is automatically generated by i386-gen.  Do not edit!  */\n");

  FUNC_6 ();
  FUNC_7 ();

  FUNC_1 (0);
}
