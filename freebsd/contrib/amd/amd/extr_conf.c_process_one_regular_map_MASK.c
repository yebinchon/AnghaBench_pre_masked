
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* cfm_dir; int cfm_flags; char* cfm_opts; int cfm_name; int cfm_tag; } ;
typedef TYPE_1__ cf_map_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (char*,char*,int ,TYPE_1__ const*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(const cf_map_t *VAR_2)
{
  if (!VAR_2->cfm_name) {
    FUNC_1(VAR_1, "conf: map_name must be defined for map \"%s\"\n", VAR_2->cfm_dir);
    return 1;
  }





  if (!VAR_2->cfm_tag ||
      (VAR_0 && FUNC_0(VAR_2->cfm_tag, VAR_0))) {




    FUNC_2(VAR_2->cfm_dir,
  VAR_2->cfm_opts ? VAR_2->cfm_opts : "",
  VAR_2->cfm_name,
  VAR_2);
  } else {
    FUNC_1(VAR_1, "skipping map %s...\n", VAR_2->cfm_dir);
  }

  return 0;
}
