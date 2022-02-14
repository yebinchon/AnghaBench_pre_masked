
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int map_type; } ;


 int FUNC_0 (int ,char*,char const*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char const*) ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_2)
{

  if (!FUNC_1(VAR_2)) {
    FUNC_0(VAR_1, "conf: no such map type \"%s\"\n", VAR_2);
    return 1;
  }
  VAR_0.map_type = FUNC_2(VAR_2);
  return 0;
}
