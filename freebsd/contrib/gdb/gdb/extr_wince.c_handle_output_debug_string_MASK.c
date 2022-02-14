
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct target_waitstatus {int dummy; } ;
typedef int s ;
typedef int p ;
typedef int gdb_wince_len ;
struct TYPE_4__ {int nDebugStringLength; int lpDebugStringData; } ;
struct TYPE_5__ {TYPE_1__ DebugString; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
typedef int LPCWSTR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,char*,int,int *,int *) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int ,char**,int,int*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (struct target_waitstatus *VAR_3)
{
  char VAR_4[256];
  char VAR_5[255];
  char *VAR_6;
  gdb_wince_len VAR_7;
  gdb_wince_len VAR_8 = VAR_1.u.DebugString.nDebugStringLength;

  if (VAR_8 > 255)
    VAR_8 = 255;

  FUNC_1 (VAR_4, 0, sizeof (VAR_4));
  if (!FUNC_2 (VAR_2,
       VAR_1.u.DebugString.lpDebugStringData,
       &VAR_4, VAR_8, &VAR_7)
      || !*VAR_4)
    return;

  FUNC_1 (VAR_5, 0, sizeof (VAR_5));
  FUNC_0 (VAR_0, 0, (LPCWSTR) VAR_4, (int) VAR_7, VAR_5,
         sizeof (VAR_5) - 1, ((void*)0), ((void*)0));
  VAR_6 = FUNC_3 (VAR_5, '\n');
  if (VAR_6 != ((void*)0))
    {
      *VAR_6 = '\0';
      if ((*--VAR_6 = '\r'))
 *VAR_6 = '\0';
    }

  FUNC_4 (VAR_5);

  return;
}
