
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(const char *VAR_3)
{
    FUNC_1(VAR_2, "conf: no tcpd/libwrap support available\n");
    return 1;


  FUNC_1(VAR_2, "conf: unknown value to use_tcpwrappers \"%s\"\n", VAR_3);
  return 1;
}
