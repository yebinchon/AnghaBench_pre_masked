
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hProcess; int hThread; } ;
typedef int LPVOID ;
typedef int LPSTARTUPINFO ;
typedef TYPE_1__* LPPROCESS_INFORMATION ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int *,int *,int ,int ,int ,int *,int ,TYPE_1__*) ;
 int VAR_0 ;
 char** FUNC_2 (int) ;
 char* FUNC_3 (char* const*) ;
 int VAR_1 ;
 char* FUNC_4 (char const*,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char**,char* const*,int) ;
 int FUNC_8 (char**,int,int,int ) ;
 char* FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char* const) ;

__attribute__((used)) static long
FUNC_11 (const char *VAR_2,
      BOOL VAR_3,
      char *const *VAR_4,
             char *const *VAR_5,
      DWORD VAR_6,
      LPSTARTUPINFO VAR_7,
      LPPROCESS_INFORMATION VAR_8)
{
  char *VAR_9;
  char *VAR_10;
  char **VAR_11;
  char *VAR_12 = ((void*)0);

  VAR_9 = ((void*)0);
  VAR_10 = ((void*)0);

  if (VAR_5)
    {
      int VAR_13;


      for (VAR_13 = 0; VAR_5[VAR_13]; VAR_13++)
        continue;




      if (VAR_13 > 0)
        {
          int VAR_14;
          int VAR_15 = 1;
          char *VAR_16;



          VAR_11 = FUNC_2 (sizeof (char *) * VAR_13);
          FUNC_7 (VAR_11, VAR_5, sizeof (char *) * VAR_13);
          FUNC_8 (VAR_11, VAR_13, sizeof (char *), VAR_1);

          for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
            VAR_15 += FUNC_10 (VAR_5[VAR_14]) + 1;

          VAR_12 = FUNC_6 (VAR_15);
          VAR_16 = VAR_12;
          for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
            VAR_16 = FUNC_9 (VAR_16, VAR_11[VAR_14]) + 1;

          *VAR_16 = '\0';
        }
    }

  VAR_9 = FUNC_4 (VAR_2, VAR_3);
  if (!VAR_9)
    goto error;
  VAR_10 = FUNC_3 (VAR_4);
  if (!VAR_10)
    goto error;


  if (!FUNC_1 (VAR_9, VAR_10,
                                ((void*)0),
                               ((void*)0),
                            VAR_0,
        VAR_6,
        (LPVOID) VAR_12,
                               ((void*)0),
        VAR_7,
        VAR_8))
    {
      if (VAR_12)
        FUNC_5 (VAR_12);

      FUNC_5 (VAR_9);

      return -1;
    }


  FUNC_0 (VAR_8->hThread);
  FUNC_5 (VAR_9);
  if (VAR_12)
    FUNC_5 (VAR_12);

  return (long) VAR_8->hProcess;

 error:
  if (VAR_12)
    FUNC_5 (VAR_12);
  if (VAR_10)
    FUNC_5 (VAR_10);
  if (VAR_9)
    FUNC_5 (VAR_9);

  return -1;
}
