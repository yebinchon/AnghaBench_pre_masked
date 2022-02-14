
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cfm_flags; } ;
typedef TYPE_1__ cf_map_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2, cf_map_t *VAR_3)
{
  if (FUNC_0(VAR_2, "yes")) {
    VAR_3->cfm_flags |= VAR_0;
    return 0;

  } else if (FUNC_0(VAR_2, "no")) {
    VAR_3->cfm_flags &= ~VAR_0;
    return 0;
  }

  FUNC_1(VAR_1, "conf: unknown value to sun_map_syntax \"%s\"\n", VAR_2);
  return 1;
}
