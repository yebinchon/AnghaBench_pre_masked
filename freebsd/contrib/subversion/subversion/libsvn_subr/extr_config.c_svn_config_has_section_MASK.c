
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int section_names_case_sensitive; int tmp_key; int sections; } ;
typedef TYPE_1__ svn_config_t ;
typedef int svn_boolean_t ;


 int * FUNC_0 (int ,int ,char const*,int ) ;

svn_boolean_t
FUNC_1(svn_config_t *VAR_0, const char *VAR_1)
{
  return ((void*)0) != FUNC_0(VAR_0->sections, VAR_0->tmp_key, VAR_1,
                                VAR_0->section_names_case_sensitive);
}
