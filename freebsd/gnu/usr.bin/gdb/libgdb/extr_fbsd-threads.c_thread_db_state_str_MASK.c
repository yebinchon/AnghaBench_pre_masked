
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int td_thr_state_e ;
typedef int buf ;
 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static char *
FUNC_1 (td_thr_state_e VAR_0)
{
  static char VAR_1[64];

  switch (VAR_0)
    {
    case 130:
      return "stopped by debugger";
    case 132:
      return "runnable";
    case 133:
      return "active";
    case 128:
      return "zombie";
    case 131:
      return "sleeping";
    case 129:
      return "stopped by debugger AND blocked";
    default:
      FUNC_0 (VAR_1, sizeof (VAR_1), "unknown thread_db state %d", VAR_0);
      return VAR_1;
    }
}
