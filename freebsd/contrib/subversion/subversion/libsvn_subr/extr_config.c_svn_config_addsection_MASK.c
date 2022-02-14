
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sections; int pool; scalar_t__ section_names_case_sensitive; } ;
typedef TYPE_1__ svn_config_t ;
struct TYPE_8__ {char* name; int options; } ;
typedef TYPE_2__ cfg_section_t ;


 TYPE_2__* FUNC_0 (int ,int) ;
 char* FUNC_1 (int ,char const*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char const*,TYPE_2__*) ;

__attribute__((used)) static cfg_section_t *
FUNC_5(svn_config_t *VAR_0,
                      const char *VAR_1)
{
  cfg_section_t *VAR_2;
  const char *VAR_3;

  VAR_2 = FUNC_0(VAR_0->pool, sizeof(cfg_section_t));
  VAR_2->name = FUNC_1(VAR_0->pool, VAR_1);
  if(VAR_0->section_names_case_sensitive)
    VAR_3 = VAR_2->name;
  else
    VAR_3 = FUNC_2(FUNC_1(VAR_0->pool, VAR_1));
  VAR_2->options = FUNC_3(VAR_0->pool);

  FUNC_4(VAR_0->sections, VAR_3, VAR_2);

  return VAR_2;
}
