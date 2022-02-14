
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int option_names_case_sensitive; int tmp_key; int section_names_case_sensitive; int sections; } ;
typedef TYPE_1__ svn_config_t ;
struct TYPE_6__ {int options; } ;
typedef TYPE_2__ cfg_section_t ;
typedef int cfg_option_t ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 void* FUNC_1 (int ,int ,char const*,int ) ;

__attribute__((used)) static cfg_option_t *
FUNC_2(svn_config_t *VAR_1, const char *VAR_2, const char *VAR_3,
            cfg_section_t **VAR_4)
{
  void *VAR_5 = FUNC_1(VAR_1->sections, VAR_1->tmp_key, VAR_2,
                                 VAR_1->section_names_case_sensitive);
  if (VAR_4 != ((void*)0))
    *VAR_4 = VAR_5;

  if (VAR_5 != ((void*)0) && VAR_3 != ((void*)0))
    {
      cfg_section_t *VAR_6 = VAR_5;
      cfg_option_t *VAR_7 = FUNC_1(VAR_6->options, VAR_1->tmp_key, VAR_3,
                                         VAR_1->option_names_case_sensitive);

      if (VAR_7 == ((void*)0)
          && FUNC_0(VAR_2, VAR_0) != 0)


        VAR_7 = FUNC_2(VAR_1, VAR_0, VAR_3, &VAR_6);
      return VAR_7;
    }

  return ((void*)0);
}
