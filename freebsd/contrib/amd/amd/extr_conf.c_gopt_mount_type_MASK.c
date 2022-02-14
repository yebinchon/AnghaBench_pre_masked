
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(const char *VAR_4)
{
  if (FUNC_0(VAR_4, "autofs")) {





    FUNC_1(VAR_3, "conf: no autofs support available\n");
    return 1;

  } else if (FUNC_0(VAR_4, "nfs")) {
    VAR_2.flags &= ~VAR_0;
    return 0;
  }

  FUNC_1(VAR_3, "conf: unknown value to mount_type \"%s\"\n", VAR_4);
  return 1;
}
