
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cfm_type; } ;
typedef TYPE_1__ cf_map_t ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char const*) ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, cf_map_t *VAR_2)
{

  if (!FUNC_1(VAR_1)) {
    FUNC_0(VAR_0, "conf: no such map type \"%s\"\n", VAR_1);
    return 1;
  }
  VAR_2->cfm_type = FUNC_2(VAR_1);
  return 0;
}
