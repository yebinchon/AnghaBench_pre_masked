
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_config__open_section_fn ;
struct TYPE_4__ {int add_value; int close_section; int open_section; } ;
typedef TYPE_1__ svn_config__constructor_t ;
typedef int svn_config__close_section_fn ;
typedef int svn_config__add_value_fn ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

svn_config__constructor_t *
FUNC_1(
    svn_config__open_section_fn VAR_0,
    svn_config__close_section_fn VAR_1,
    svn_config__add_value_fn VAR_2,
    apr_pool_t *VAR_3)
{
  svn_config__constructor_t *VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));
  VAR_4->open_section = VAR_0;
  VAR_4->close_section = VAR_1;
  VAR_4->add_value = VAR_2;
  return VAR_4;
}
