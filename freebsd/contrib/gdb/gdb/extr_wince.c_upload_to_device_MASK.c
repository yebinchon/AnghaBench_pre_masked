
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct stat {scalar_t__ st_mtime; } ;
typedef int buf ;
typedef int LPWSTR ;
typedef int * HANDLE ;
typedef int FILETIME ;
typedef char* DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,int,int ,int *,int ,int ,int *) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 char const* FUNC_4 () ;
 int FUNC_5 (int *,char*,char*,char**,int *) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int) ;
 char* FUNC_7 (scalar_t__*) ;
 int FUNC_8 (char*,char const*,...) ;
 scalar_t__ FUNC_9 (int,struct stat*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,int ,char*,int ,int ,int *) ;
 int FUNC_12 (char*,char*,char*) ;
 int FUNC_13 (int,char*,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_14 (char*,char const*) ;
 int FUNC_15 (char*,char const*) ;
 int FUNC_16 (char const*) ;
 char* FUNC_17 (char const*,char*) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (char const*,int *) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_20 (char*,int) ;

char *
FUNC_21 (const char *VAR_12, const char *VAR_13)
{
  HANDLE VAR_14;
  const char *VAR_15 = VAR_10 ?: "\\gdb";
  int VAR_16;
  static char *VAR_17 = ((void*)0);
  LPWSTR VAR_18;
  char *VAR_19;
  DWORD VAR_20;
  const char *VAR_21 = VAR_12;
  FILETIME VAR_22, VAR_23, VAR_24;
  time_t VAR_25;
  struct stat VAR_26;
  int VAR_27;


  while ((VAR_19 = FUNC_17 (VAR_12, "/\\")) != ((void*)0))
    VAR_12 = VAR_19 + 1;

  if (!*VAR_12)
    FUNC_8 ("no filename found to upload - %s.", VAR_21);

  VAR_16 = FUNC_16 (VAR_15) + FUNC_16 (VAR_12) + 2;
  VAR_17 = (char *) FUNC_20 (VAR_17, VAR_16);
  FUNC_15 (VAR_17, VAR_15);
  FUNC_14 (VAR_17, "\\");
  FUNC_14 (VAR_17, VAR_12);

  if (VAR_11 == VAR_9)
    return VAR_17;


  if ((VAR_27 = FUNC_11 (FUNC_10 ("PATH"), VAR_7, (char *) VAR_13, VAR_6, 0, ((void*)0))) < 0)
    FUNC_8 ("couldn't open %s", VAR_13);


  if (FUNC_9 (VAR_27, &VAR_26))
    VAR_26.st_mtime = (time_t) - 1;


  VAR_18 = FUNC_19 (VAR_15, ((void*)0));
  (void) FUNC_1 (VAR_18, ((void*)0));


  VAR_18 = FUNC_19 (VAR_17, ((void*)0));
  VAR_14 = FUNC_2 (VAR_18, VAR_2 | VAR_3, 0, ((void*)0),
      VAR_5, VAR_1, ((void*)0));


  VAR_20 = FUNC_4 ();
  if (VAR_14 == ((void*)0) || VAR_14 == VAR_4)
    FUNC_8 ("error opening file \"%s\".  Windows error %d.",
    VAR_17, VAR_20);

  FUNC_3 (VAR_14, &VAR_22, &VAR_23, &VAR_24);
  VAR_25 = FUNC_18 (&VAR_24);
  if (VAR_11 == VAR_8 ||
      VAR_20 != VAR_0 ||
      !FUNC_3 (VAR_14, &VAR_22, &VAR_23, &VAR_24) ||
      FUNC_18 (&VAR_24) < VAR_26.st_mtime)
    {
      DWORD VAR_28;
      char VAR_29[4096];
      int VAR_30;


      while ((VAR_30 = FUNC_13 (VAR_27, VAR_29, sizeof (VAR_29))) > 0)
 if (!FUNC_5 (VAR_14, VAR_29, (DWORD) VAR_30, &VAR_28, ((void*)0)))
   FUNC_8 ("error writing to remote device - %d.",
   FUNC_4 ());
    }

  FUNC_6 (VAR_27);
  if (!FUNC_0 (VAR_14))
    FUNC_8 ("error closing remote file - %d.", FUNC_4 ());

  return VAR_17;
}
