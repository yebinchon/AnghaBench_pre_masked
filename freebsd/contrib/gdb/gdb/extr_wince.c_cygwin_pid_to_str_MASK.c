
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dwProcessId; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,char*,unsigned int,...) ;

char *
FUNC_1 (int VAR_1)
{
  static char VAR_2[80];
  if (VAR_1 == VAR_0.dwProcessId)
    FUNC_0 (VAR_2, "process %d", VAR_1);
  else
    FUNC_0 (VAR_2, "thread %d.0x%x", (unsigned) VAR_0.dwProcessId, VAR_1);
  return VAR_2;
}
