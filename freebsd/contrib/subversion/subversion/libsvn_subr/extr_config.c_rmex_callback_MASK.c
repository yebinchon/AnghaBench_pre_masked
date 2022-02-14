
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_boolean_t ;
typedef int cfg_section_t ;
struct TYPE_3__ {scalar_t__ state; int * x_value; } ;
typedef TYPE_1__ cfg_option_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_boolean_t
FUNC_0(void *VAR_4, cfg_section_t *VAR_5, cfg_option_t *VAR_6)
{


  if ( (VAR_6->state == VAR_2 && VAR_6->x_value != ((void*)0))
      || VAR_6->state == VAR_1)
    {
      VAR_6->x_value = ((void*)0);
      VAR_6->state = VAR_3;
    }

  return VAR_0;
}
