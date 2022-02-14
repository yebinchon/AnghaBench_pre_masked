
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ptid_t ;
struct TYPE_2__ {int dwProcessId; } ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*,char*,int,...) ;

char *
FUNC_2 (ptid_t VAR_1)
{
  static char VAR_2[80];
  int VAR_3 = FUNC_0 (VAR_1);

  if ((DWORD) VAR_3 == VAR_0.dwProcessId)
    FUNC_1 (VAR_2, "process %d", VAR_3);
  else
    FUNC_1 (VAR_2, "thread %ld.0x%x", VAR_0.dwProcessId, VAR_3);
  return VAR_2;
}
