
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cfm_flags; } ;
typedef TYPE_1__ cf_map_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(const char *VAR_3, cf_map_t *VAR_4)
{
  if (FUNC_0(VAR_3, "full")) {
    VAR_4->cfm_flags |= VAR_1;
    return 0;
  } else if (FUNC_0(VAR_3, "yes")) {
    VAR_4->cfm_flags |= VAR_0;
    return 0;
  } else if (FUNC_0(VAR_3, "no")) {
    VAR_4->cfm_flags &= ~VAR_0;
    return 0;
  }

  FUNC_1(VAR_2, "conf: unknown value to browsable_dirs \"%s\"\n", VAR_3);
  return 1;
}
