
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
struct skipper {int nskip; int * s; } ;
typedef int s ;
struct TYPE_5__ {int nDebugStringLength; int lpDebugStringData; } ;
struct TYPE_6__ {TYPE_1__ DebugString; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef int DWORD ;
typedef TYPE_3__ DEBUG_EVENT ;


 int FUNC_0 (int ,int ,char*,int,int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 struct skipper* VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_4 (DEBUG_EVENT *VAR_2)
{
  char VAR_3[80];
  DWORD VAR_4;
  struct skipper *VAR_5;
  int VAR_6 = VAR_2->u.DebugString.nDebugStringLength;

  if (VAR_6 > sizeof(VAR_3))
    VAR_6 = sizeof(VAR_3);

  FUNC_1 (VAR_3, 0, sizeof (VAR_3));
  if (!FUNC_0 (VAR_0, VAR_2->u.DebugString.lpDebugStringData,
     VAR_3, VAR_6, &VAR_4))
    return 0;

  for (VAR_5 = VAR_1; VAR_5->s != ((void*)0); VAR_5++)
    if (FUNC_3 ((wchar_t *) VAR_3, VAR_5->s, FUNC_2 (VAR_5->s)) == 0)
      return VAR_5->nskip;

  return 0;
}
