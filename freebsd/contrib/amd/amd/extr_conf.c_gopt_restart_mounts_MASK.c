
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,char*,char const*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(const char *VAR_3)
{
  if (FUNC_0(VAR_3, "yes")) {
    VAR_1.flags |= VAR_0;
    return 0;
  } else if (FUNC_0(VAR_3, "no")) {
    VAR_1.flags &= ~VAR_0;
    return 0;
  }

  FUNC_1(VAR_2, "conf: unknown value to restart_mounts \"%s\"\n", VAR_3);
  return 1;
}
