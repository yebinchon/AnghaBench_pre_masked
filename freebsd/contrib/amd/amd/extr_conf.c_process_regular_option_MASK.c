
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ cfm_dir; } ;
typedef TYPE_1__ cf_map_t ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char const*,TYPE_1__*) ;
 int FUNC_3 (char const*,TYPE_1__*) ;
 int FUNC_4 (char const*,TYPE_1__*) ;
 int FUNC_5 (char const*,TYPE_1__*) ;
 int FUNC_6 (char const*,TYPE_1__*) ;
 int FUNC_7 (char const*,TYPE_1__*) ;
 int FUNC_8 (char const*,TYPE_1__*) ;
 int FUNC_9 (char const*,TYPE_1__*) ;
 int FUNC_10 (char const*,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_11 (char const*) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_1, const char *VAR_2, const char *VAR_3, cf_map_t *VAR_4)
{

  if (!VAR_1 || VAR_1[0] == '\0' ||
      !VAR_2 || VAR_2[0] == '\0' ||
      !VAR_3 || VAR_3[0] == '\0' ||
      !VAR_4) {
    FUNC_1(VAR_0, "conf: process_regular_option: null entries\n");
    return 1;
  }


  if (!VAR_4->cfm_dir)
    VAR_4->cfm_dir = FUNC_11(VAR_1);


  if (FUNC_0(VAR_2, "browsable_dirs"))
    return FUNC_2(VAR_3, VAR_4);

  if (FUNC_0(VAR_2, "map_name"))
    return FUNC_4(VAR_3, VAR_4);

  if (FUNC_0(VAR_2, "map_defaults"))
    return FUNC_3(VAR_3, VAR_4);

  if (FUNC_0(VAR_2, "map_options"))
    return FUNC_5(VAR_3, VAR_4);

  if (FUNC_0(VAR_2, "map_type"))
    return FUNC_6(VAR_3, VAR_4);

  if (FUNC_0(VAR_2, "mount_type"))
    return FUNC_7(VAR_3, VAR_4);

  if (FUNC_0(VAR_2, "search_path"))
    return FUNC_8(VAR_3, VAR_4);

  if (FUNC_0(VAR_2, "sun_map_syntax"))
    return FUNC_9(VAR_3, VAR_4);

  if (FUNC_0(VAR_2, "tag"))
    return FUNC_10(VAR_3, VAR_4);

  FUNC_1(VAR_0, "conf: unknown regular key \"%s\" for section \"%s\"\n",
   VAR_2, VAR_1);
  return 1;
}
