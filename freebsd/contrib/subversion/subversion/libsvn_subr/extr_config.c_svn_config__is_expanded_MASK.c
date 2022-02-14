
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_config_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {scalar_t__ state; scalar_t__ value; } ;
typedef TYPE_1__ cfg_option_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,char const*,char const*,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,char) ;

svn_boolean_t
FUNC_2(svn_config_t *VAR_4,
                        const char *VAR_5,
                        const char *VAR_6)
{
  cfg_option_t *VAR_7;

  if (VAR_4 == ((void*)0))
    return VAR_0;


  VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6, ((void*)0));
  if (VAR_7 == ((void*)0))
    return VAR_0;


  if ( VAR_7->state == VAR_3
      || VAR_7->state == VAR_2)
    return VAR_1;


  if (VAR_7->value && FUNC_1(VAR_7->value, '%'))
    return VAR_0;


  return VAR_1;
}
