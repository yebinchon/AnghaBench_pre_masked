
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gdb_wince_len ;
typedef int dll_buf ;
struct TYPE_5__ {char* lpImageName; int lpBaseOfDll; scalar_t__ fUnicode; } ;
struct TYPE_4__ {TYPE_2__ LoadDll; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
typedef int LPCWSTR ;
typedef TYPE_2__ LOAD_DLL_DEBUG_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,char*,int,int ,int ) ;
 char* FUNC_1 (int) ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,char*,char*,int,int*) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char*,char) ;

__attribute__((used)) static int
FUNC_7 (void *VAR_4)
{
  LOAD_DLL_DEBUG_INFO *VAR_5 = &VAR_2.u.LoadDll;
  char VAR_6[VAR_1 + 1];
  char *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11;
  int VAR_12;

  VAR_6[0] = VAR_6[sizeof (VAR_6) - 1] = '\0';
  if (!VAR_5->lpImageName)
    return 1;

  VAR_12 = 0;
  for (VAR_8 = VAR_6, VAR_9 = VAR_5->lpImageName;
       VAR_8 < VAR_6 + sizeof (VAR_6);
       VAR_8 += 16, VAR_9 += 16)
    {
      gdb_wince_len VAR_13 = 0;
      (void) FUNC_4 (VAR_3,
      VAR_9, VAR_8, 16, &VAR_13);

      if (!VAR_13 && VAR_8 == VAR_6)
 return 1;
      for (VAR_7 = VAR_8; VAR_7 < VAR_8 + VAR_13; VAR_7++)
 {
   VAR_12++;
   if (*VAR_7 == '\0')
     goto out;
   if (VAR_5->fUnicode)
     VAR_7++;
 }
      if (!VAR_13)
 break;
    }

out:
  if (!VAR_12)
    return 1;



  VAR_10 = FUNC_1 (VAR_12);

  if (!VAR_10)
    return 1;

  if (!VAR_5->fUnicode)
    FUNC_2 (VAR_10, VAR_6, VAR_12);
  else
    FUNC_0 (VAR_0, 0, (LPCWSTR) VAR_6, VAR_12,
    VAR_10, VAR_12, 0, 0);

  while ((VAR_7 = FUNC_5 (VAR_10, '\\')))
    *VAR_7 = '/';




  if (!(VAR_11 = FUNC_6 (VAR_10, '/')))
    VAR_11 = VAR_10;
  else
    VAR_11++;







  FUNC_3 ("%x:%s", VAR_5->lpBaseOfDll, VAR_10);
  FUNC_3 ("\n");

  return 1;
}
