
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ auto_attrcache; } ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,char const*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2)
{
  VAR_0.auto_attrcache = FUNC_0(VAR_2);
  if (VAR_0.auto_attrcache < 0) {
    FUNC_1(VAR_1, "conf: bad attrcache value: \"%s\"\n", VAR_2);
    return 1;
  }
  return 0;
}
