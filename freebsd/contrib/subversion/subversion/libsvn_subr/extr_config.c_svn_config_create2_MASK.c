
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {void* read_only; void* option_names_case_sensitive; void* section_names_case_sensitive; void* tmp_value; void* tmp_key; void* x_values; int x_pool; int * pool; int sections; } ;
typedef TYPE_1__ svn_config_t ;
typedef void* svn_boolean_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;

svn_error_t *
FUNC_4(svn_config_t **VAR_2,
                   svn_boolean_t VAR_3,
                   svn_boolean_t VAR_4,
                   apr_pool_t *VAR_5)
{
  svn_config_t *VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6));

  VAR_6->sections = FUNC_1(VAR_5);
  VAR_6->pool = VAR_5;
  VAR_6->x_pool = FUNC_2(VAR_5);
  VAR_6->x_values = VAR_0;
  VAR_6->tmp_key = FUNC_3(VAR_5);
  VAR_6->tmp_value = FUNC_3(VAR_5);
  VAR_6->section_names_case_sensitive = VAR_3;
  VAR_6->option_names_case_sensitive = VAR_4;
  VAR_6->read_only = VAR_0;

  *VAR_2 = VAR_6;
  return VAR_1;
}
