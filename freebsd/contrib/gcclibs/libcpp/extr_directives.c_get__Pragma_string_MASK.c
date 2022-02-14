
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ cpp_token ;
typedef int cpp_reader ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static const cpp_token *
FUNC_1 (cpp_reader *VAR_4)
{
  const cpp_token *VAR_5;

  if (FUNC_0 (VAR_4)->type != VAR_1)
    return ((void*)0);

  VAR_5 = FUNC_0 (VAR_4);
  if (VAR_5->type != VAR_2 && VAR_5->type != VAR_3)
    return ((void*)0);

  if (FUNC_0 (VAR_4)->type != VAR_0)
    return ((void*)0);

  return VAR_5;
}
