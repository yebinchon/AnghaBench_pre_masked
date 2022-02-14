
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dll_buf ;
struct TYPE_5__ {scalar_t__ lpBaseOfDll; int fUnicode; int lpImageName; } ;
struct TYPE_4__ {TYPE_2__ LoadDll; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
typedef TYPE_2__ LOAD_DLL_DEBUG_INFO ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_3 (void *VAR_3)
{
  LOAD_DLL_DEBUG_INFO *VAR_4 = &VAR_1.u.LoadDll;
  char VAR_5[VAR_0 + 1];
  char *VAR_6 = ((void*)0);
  char *VAR_7;

  VAR_5[0] = VAR_5[sizeof (VAR_5) - 1] = '\0';

  if (!FUNC_1 ((DWORD) (VAR_4->lpBaseOfDll), VAR_5))
    VAR_5[0] = VAR_5[sizeof (VAR_5) - 1] = '\0';

  VAR_6 = VAR_5;

  if (*VAR_6 == '\0')
    VAR_6 = FUNC_0 (VAR_2, VAR_4->lpImageName, VAR_4->fUnicode);
  if (!VAR_6)
    return 1;

  FUNC_2 (VAR_6, (DWORD) VAR_4->lpBaseOfDll + 0x1000);

  return 1;
}
