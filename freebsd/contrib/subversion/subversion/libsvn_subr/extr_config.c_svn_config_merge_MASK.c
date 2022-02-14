
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {int pool; int option_names_case_sensitive; int section_names_case_sensitive; } ;
typedef TYPE_1__ svn_config_t ;
typedef int svn_boolean_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__**,char const*,int ,int ,int ,int ) ;

svn_error_t *
FUNC_3(svn_config_t *VAR_2, const char *VAR_3,
                 svn_boolean_t VAR_4)
{




  svn_config_t *VAR_5;
  FUNC_0(FUNC_2(&VAR_5, VAR_3, VAR_4,
                           VAR_2->section_names_case_sensitive,
                           VAR_2->option_names_case_sensitive,
                           VAR_2->pool));


  FUNC_1(VAR_5, VAR_2, VAR_5->pool, VAR_1);
  return VAR_0;
}
